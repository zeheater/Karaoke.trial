#pragma once


namespace Test02Window {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	
	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^  axWMP;
	protected: 

	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::ListView^  lvLibrary;

	private: System::Windows::Forms::TextBox^  txSearch;
	private: System::Windows::Forms::ColumnHeader^  id;
	private: System::Windows::Forms::ColumnHeader^  Title;
	private: System::Windows::Forms::ColumnHeader^  Artist;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->axWMP = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lvLibrary = (gcnew System::Windows::Forms::ListView());
			this->id = (gcnew System::Windows::Forms::ColumnHeader());
			this->Title = (gcnew System::Windows::Forms::ColumnHeader());
			this->Artist = (gcnew System::Windows::Forms::ColumnHeader());
			this->txSearch = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWMP))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// axWMP
			// 
			this->axWMP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axWMP->Enabled = true;
			this->axWMP->Location = System::Drawing::Point(0, 0);
			this->axWMP->Name = L"axWMP";
			this->axWMP->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axWMP.OcxState")));
			this->axWMP->Size = System::Drawing::Size(576, 442);
			this->axWMP->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(401, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 30);
			this->button1->TabIndex = 1;
			this->button1->Text = L"load song";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(401, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"toggle audio";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->lvLibrary);
			this->panel1->Controls->Add(this->txSearch);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(493, 295);
			this->panel1->TabIndex = 3;
			// 
			// lvLibrary
			// 
			this->lvLibrary->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {this->id, this->Title, 
				this->Artist});
			this->lvLibrary->Location = System::Drawing::Point(7, 39);
			this->lvLibrary->Name = L"lvLibrary";
			this->lvLibrary->Size = System::Drawing::Size(387, 243);
			this->lvLibrary->TabIndex = 4;
			this->lvLibrary->UseCompatibleStateImageBehavior = false;
			this->lvLibrary->View = System::Windows::Forms::View::Details;
			this->lvLibrary->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listView1_SelectedIndexChanged);
			// 
			// id
			// 
			this->id->Text = L"#";
			this->id->Width = 33;
			// 
			// Title
			// 
			this->Title->Text = L"Title";
			this->Title->Width = 182;
			// 
			// Artist
			// 
			this->Artist->Text = L"Artist";
			this->Artist->Width = 97;
			// 
			// txSearch
			// 
			this->txSearch->Location = System::Drawing::Point(8, 11);
			this->txSearch->Name = L"txSearch";
			this->txSearch->Size = System::Drawing::Size(387, 20);
			this->txSearch->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 442);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->axWMP);
			this->Name = L"Form1";
			this->Text = L"KaraokeTrial";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWMP))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void library_Display( std::string sFilter) {
		System::Windows::Forms::ListViewItem^ lAdd;
		
		lvLibrary->Items->Clear();
		for (UINT i = 0; i < library_List.size(); i++) {
			if (sFilter == "" || library_List[i]._findStr.find( sFilter )!=std::string::npos ) {
				// draw
				lAdd = lvLibrary->Items->Add( System::Convert::ToString(i));
				lAdd->SubItems->Add( gcnew System::String( library_List[i].title.c_str() ));
				lAdd->SubItems->Add( gcnew System::String( library_List[i].artist.c_str() ));
			}			
		}
	}
	
	private: void library_Init(){
		array<String^>^ file;
		try {
			file = Directory::GetFiles( Application::StartupPath + library_sPath, "*.txt" );
		} catch (...) {
			MessageBox::Show("Failed to read the library.");
			this->Close();
		}

		for (int  i=0; i<file->Length; i++) {
			library_List.push_back( LIBRARY_SONG( str2std( file[i] )) );
		}
		
		library_Display("");
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		axWMP->URL = "D:\\Downloads\\New folder\\[Hi10]_Gurren_Lagann_[BD_1080p]\\(Hi10)_Gurren_Lagann_-_01_(BD_1080p)_(ReinForce_tlacatlc6)_(Dual_Audio)_(654ACF10).mkv";
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			   //System::Diagnostics::Debug::WriteLine(String::Concat("audio count : ",ctrl->audioLanguageCount));
			   int audiocount = ((WMPLib::IWMPControls3^)axWMP->Ctlcontrols)->audioLanguageCount;
			   static int audiopos = 1;
			   if (audiopos >= audiocount) audiopos = 1;
			   else audiopos++;
			   ((WMPLib::IWMPControls3^)axWMP->Ctlcontrols)->currentAudioLanguageIndex = audiopos;
			   System::Diagnostics::Debug::WriteLine(audiopos);
		    }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		//get all files in the folder
		library_Init();
			 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

