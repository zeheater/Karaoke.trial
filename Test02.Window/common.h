#pragma once

#define library_sPath "\\Library\\"

// includes
#include <windows.h>
#include <string>
#include <sstream>
#include <vector>
#include <exception>
#include <fstream>
#include <algorithm>

std::vector<std::string> stdSplit ( std::string ss, char delimiter );
std::string		stdJoin ( std::vector<std::string> v, std::string delimiter);
std::string		stdJoin ( std::vector<char*> v, std::string delimiter);
std::string		int2std ( int i );
std::string		int2std ( int i, char* sFormat );
std::wstring	std2wstd ( std::string s );
std::string		stdLCase ( std::string s);
std::string		str2std ( System::String ^ s );
std::wstring	str2wstd ( System::String ^ s );
std::string		stdTrim	(std::string& str);

struct LIBRARY_SONG {
	std::string	title;
	std::string artist;
	std::string album;
	std::string audio1;
	std::string audio2;
	std::string	filename;
	std::string _findStr;
	
	LIBRARY_SONG( std::string sDescriptor ) {
		std::ifstream infile( sDescriptor.c_str() );
		std::string line, sTag, sVal;
		UINT iSp=0;
		
		// read the descriptor line by line
		while (std::getline(infile, line))
		{
			iSp = line.find("=");
			if (iSp) {
				// separator found
				sTag = stdTrim(line.substr(0,iSp));
				if (iSp+1 < line.length()) {
					sVal = stdTrim(line.substr(iSp+1));
				} else { sVal = ""; }
				
				// read data
				if (sTag=="title")	title	= sVal;
				if (sTag=="artist")	artist	= sVal;
				if (sTag=="album")	album	= sVal;
				if (sTag=="audio1")	audio1	= sVal;
				if (sTag=="audio2")	audio2	= sVal;
				if (sTag=="v_ext")	{
					iSp = sDescriptor.find_last_of(".");
					if (iSp) filename = sDescriptor.substr(0,iSp+1) + sVal;
				}
			}
		}
		infile.close();

		_findStr = stdLCase(title)+"|"+stdLCase(artist)+"|"+stdLCase(album);
	} 
};
extern std::vector<LIBRARY_SONG> library_List;