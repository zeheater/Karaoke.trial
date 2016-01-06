#include "stdafx.h"

// string
std::vector<std::string> stdSplit ( const std::string haystack, char delimiter ) {
	std::stringstream			ss(haystack);
	std::vector<std::string>	result;
	std::string					item;
	while (std::getline( ss, item, delimiter )) {
		result.push_back( item );
	}
	return result;
}
std::string  int2std ( int i, char* sFormat ) {
	char		buffer[sizeof(sFormat)];
	sprintf_s( buffer, sizeof(buffer), sFormat, i);

	std::string result = buffer;
	return result;
}
std::string  int2std ( int i ) {
	return int2std( i, "%d" );
}
std::wstring  std2wstd ( std::string s ) {
	std::wstring ws(s.begin(), s.end());
	return ws;
}
std::string	stdJoin ( std::vector<std::string> v, std::string delimiter = "" ) {
	std::string res;
	for (UINT i = 0; i < v.size(); i++) {
		res += v[i] + delimiter;
	}
	return res;
}
std::string	stdJoin ( std::vector<char*> v, std::string delimiter = "" ) {
	std::string res;
	for (UINT i = 0; i < v.size(); i++) {
		res += std::string(v[i]) + delimiter;
	}
	return res;
}
std::string	stdLCase ( std::string data) {
	std::string sB = data;
	std::transform(sB.begin(), sB.end(), sB.begin(), ::tolower);
	
	return sB;
}

std::string str2std ( System::String ^ s ) {
   using namespace System::Runtime::InteropServices;
   const char* chars = 
      (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
   std::string os = chars;
   Marshal::FreeHGlobal(System::IntPtr((void*)chars));
   
   return os;
}

std::wstring str2wstd ( System::String ^ s ) {
   using namespace System::Runtime::InteropServices;
   const wchar_t* chars = 
      (const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
   std::wstring os = chars;
   Marshal::FreeHGlobal(System::IntPtr((void*)chars));
   
   return os;
}
std::string stdTrim(std::string& str) {
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    return str.substr(first, (last-first+1));
}

bool	fCopy( std::string sSrc, std::string sDest ){
	try {
		std::ofstream fD( sDest.c_str(), std::ios::binary | std::ios::trunc | std::ios::out );
		std::ofstream fS( sSrc.c_str() , std::ios::binary | std::ios::in );
	
		if (!fD.is_open() || !fS.is_open()) return false;
		
		fD << fS.rdbuf();
		
		return true;
	} catch (std::exception& e) {
		std::string errM = "fCopy failed: ";
			errM.append(e.what());
		OutputDebugStringA( errM.c_str() );
	} catch (...) {
		OutputDebugStringA( "fCopy failed: unknown error" );
	}	
	return false;
}