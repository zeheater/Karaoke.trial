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

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panelControl;

	private: System::Windows::Forms::ListView^  lvLibrary;

	private: System::Windows::Forms::TextBox^  txSearch;
	private: System::Windows::Forms::ColumnHeader^  id;
	private: System::Windows::Forms::ColumnHeader^  Title;
	private: System::Windows::Forms::ColumnHeader^  Artist;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ColumnHeader^  Album;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnPlaylistDn;
	private: System::Windows::Forms::Button^  btnPlaylistDel;



	private: System::Windows::Forms::Button^  btnPlaylistUp;


	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  btnControlUp;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::Button^  btnControlDn;
	private: System::Windows::Forms::ListView^  lvPlaylist;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->axWMP = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panelControl = (gcnew System::Windows::Forms::Panel());
			this->btnControlUp = (gcnew System::Windows::Forms::Button());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lvPlaylist = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->btnPlaylistDn = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->btnPlaylistDel = (gcnew System::Windows::Forms::Button());
			this->btnPlaylistUp = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lvLibrary = (gcnew System::Windows::Forms::ListView());
			this->id = (gcnew System::Windows::Forms::ColumnHeader());
			this->Title = (gcnew System::Windows::Forms::ColumnHeader());
			this->Artist = (gcnew System::Windows::Forms::ColumnHeader());
			this->Album = (gcnew System::Windows::Forms::ColumnHeader());
			this->txSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnControlDn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWMP))->BeginInit();
			this->panelControl->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// axWMP
			// 
			this->axWMP->Dock = System::Windows::Forms::DockStyle::Fill;
			this->axWMP->Enabled = true;
			this->axWMP->Location = System::Drawing::Point(0, 0);
			this->axWMP->Name = L"axWMP";
			this->axWMP->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axWMP.OcxState")));
			this->axWMP->Size = System::Drawing::Size(793, 576);
			this->axWMP->TabIndex = 0;
			this->axWMP->PlayStateChange += gcnew AxWMPLib::_WMPOCXEvents_PlayStateChangeEventHandler(this, &Form1::axWMP_PlayStateChange);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(98, 237);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 30);
			this->button2->TabIndex = 2;
			this->button2->Text = L"toggle audio";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// panelControl
			// 
			this->panelControl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelControl->Controls->Add(this->btnControlUp);
			this->panelControl->Controls->Add(this->groupBox1);
			this->panelControl->Controls->Add(this->label1);
			this->panelControl->Controls->Add(this->lvLibrary);
			this->panelControl->Controls->Add(this->txSearch);
			this->panelControl->Location = System::Drawing::Point(0, 0);
			this->panelControl->Name = L"panelControl";
			this->panelControl->Size = System::Drawing::Size(643, 305);
			this->panelControl->TabIndex = 3;
			// 
			// btnControlUp
			// 
			this->btnControlUp->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->btnControlUp->ImageKey = L"up";
			this->btnControlUp->ImageList = this->imageList2;
			this->btnControlUp->Location = System::Drawing::Point(306, 289);
			this->btnControlUp->Name = L"btnControlUp";
			this->btnControlUp->Size = System::Drawing::Size(26, 15);
			this->btnControlUp->TabIndex = 7;
			this->btnControlUp->UseVisualStyleBackColor = true;
			this->btnControlUp->Click += gcnew System::EventHandler(this, &Form1::btnControlUp_Click);
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"down");
			this->imageList2->Images->SetKeyName(1, L"up");
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->lvPlaylist);
			this->groupBox1->Controls->Add(this->btnPlaylistDn);
			this->groupBox1->Controls->Add(this->btnPlaylistDel);
			this->groupBox1->Controls->Add(this->btnPlaylistUp);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(435, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(203, 279);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Playlist";
			// 
			// lvPlaylist
			// 
			this->lvPlaylist->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, this->columnHeader2});
			this->lvPlaylist->FullRowSelect = true;
			this->lvPlaylist->HideSelection = false;
			this->lvPlaylist->Location = System::Drawing::Point(6, 19);
			this->lvPlaylist->Name = L"lvPlaylist";
			this->lvPlaylist->Size = System::Drawing::Size(157, 208);
			this->lvPlaylist->TabIndex = 5;
			this->lvPlaylist->UseCompatibleStateImageBehavior = false;
			this->lvPlaylist->View = System::Windows::Forms::View::Details;
			this->lvPlaylist->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::lvPlaylist_SelectedIndexChanged);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"#";
			this->columnHeader1->Width = 29;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Title";
			this->columnHeader2->Width = 106;
			// 
			// btnPlaylistDn
			// 
			this->btnPlaylistDn->BackColor = System::Drawing::SystemColors::Control;
			this->btnPlaylistDn->Enabled = false;
			this->btnPlaylistDn->ImageKey = L"down";
			this->btnPlaylistDn->ImageList = this->imageList1;
			this->btnPlaylistDn->Location = System::Drawing::Point(169, 50);
			this->btnPlaylistDn->Name = L"btnPlaylistDn";
			this->btnPlaylistDn->Size = System::Drawing::Size(28, 28);
			this->btnPlaylistDn->TabIndex = 4;
			this->btnPlaylistDn->UseVisualStyleBackColor = false;
			this->btnPlaylistDn->Click += gcnew System::EventHandler(this, &Form1::btnPlaylistDn_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^  >(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"del");
			this->imageList1->Images->SetKeyName(1, L"up");
			this->imageList1->Images->SetKeyName(2, L"down");
			// 
			// btnPlaylistDel
			// 
			this->btnPlaylistDel->BackColor = System::Drawing::SystemColors::Control;
			this->btnPlaylistDel->Enabled = false;
			this->btnPlaylistDel->ImageKey = L"del";
			this->btnPlaylistDel->ImageList = this->imageList1;
			this->btnPlaylistDel->Location = System::Drawing::Point(169, 81);
			this->btnPlaylistDel->Name = L"btnPlaylistDel";
			this->btnPlaylistDel->Size = System::Drawing::Size(28, 28);
			this->btnPlaylistDel->TabIndex = 3;
			this->btnPlaylistDel->UseVisualStyleBackColor = false;
			this->btnPlaylistDel->Click += gcnew System::EventHandler(this, &Form1::btnPlaylistDel_Click);
			// 
			// btnPlaylistUp
			// 
			this->btnPlaylistUp->BackColor = System::Drawing::SystemColors::Control;
			this->btnPlaylistUp->Enabled = false;
			this->btnPlaylistUp->ImageKey = L"up";
			this->btnPlaylistUp->ImageList = this->imageList1;
			this->btnPlaylistUp->Location = System::Drawing::Point(169, 19);
			this->btnPlaylistUp->Name = L"btnPlaylistUp";
			this->btnPlaylistUp->Size = System::Drawing::Size(28, 28);
			this->btnPlaylistUp->TabIndex = 1;
			this->btnPlaylistUp->UseVisualStyleBackColor = false;
			this->btnPlaylistUp->Click += gcnew System::EventHandler(this, &Form1::btnPlaylistUp_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Search";
			// 
			// lvLibrary
			// 
			this->lvLibrary->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->id, this->Title, 
				this->Artist, this->Album});
			this->lvLibrary->FullRowSelect = true;
			this->lvLibrary->HideSelection = false;
			this->lvLibrary->Location = System::Drawing::Point(7, 39);
			this->lvLibrary->Name = L"lvLibrary";
			this->lvLibrary->Size = System::Drawing::Size(422, 243);
			this->lvLibrary->TabIndex = 4;
			this->lvLibrary->UseCompatibleStateImageBehavior = false;
			this->lvLibrary->View = System::Windows::Forms::View::Details;
			this->lvLibrary->DoubleClick += gcnew System::EventHandler(this, &Form1::lvLibrary_DoubleClick);
			// 
			// id
			// 
			this->id->Text = L"#";
			this->id->Width = 29;
			// 
			// Title
			// 
			this->Title->Text = L"Title";
			this->Title->Width = 161;
			// 
			// Artist
			// 
			this->Artist->Text = L"Artist";
			this->Artist->Width = 100;
			// 
			// Album
			// 
			this->Album->Text = L"Album";
			this->Album->Width = 109;
			// 
			// txSearch
			// 
			this->txSearch->Location = System::Drawing::Point(56, 10);
			this->txSearch->Name = L"txSearch";
			this->txSearch->Size = System::Drawing::Size(373, 20);
			this->txSearch->TabIndex = 3;
			this->txSearch->TextChanged += gcnew System::EventHandler(this, &Form1::txSearch_TextChanged);
			// 
			// btnControlDn
			// 
			this->btnControlDn->ImageKey = L"down";
			this->btnControlDn->ImageList = this->imageList2;
			this->btnControlDn->Location = System::Drawing::Point(0, 0);
			this->btnControlDn->Name = L"btnControlDn";
			this->btnControlDn->Size = System::Drawing::Size(26, 15);
			this->btnControlDn->TabIndex = 8;
			this->btnControlDn->UseVisualStyleBackColor = true;
			this->btnControlDn->Visible = false;
			this->btnControlDn->Click += gcnew System::EventHandler(this, &Form1::btnControlDn_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 576);
			this->Controls->Add(this->btnControlDn);
			this->Controls->Add(this->panelControl);
			this->Controls->Add(this->axWMP);
			this->Name = L"Form1";
			this->Text = L"KaraokeTrial";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWMP))->EndInit();
			this->panelControl->ResumeLayout(false);
			this->panelControl->PerformLayout();
			this->groupBox1->ResumeLayout(false);
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
				lAdd->SubItems->Add( gcnew System::String( library_List[i].album.c_str() ));
			}			
		}
	}
	private: void library_Play( int id ) {
		try {
			axWMP->URL = gcnew System::String( library_List[id].filename.c_str() );
		} catch (...) {}
	}
	private: void library_PlayNext() {
		if (!lvPlaylist->Items->Count) return;
		
		library_Play( Convert::ToInt32(lvPlaylist->Items[0]->Text));
		System::Diagnostics::Debug::WriteLine("Playing "+lvPlaylist->Items[0]->Text);
		
		axWMP->Ctlcontrols->play();
		lvPlaylist->Items->Remove(lvPlaylist->Items[0]);		
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
	private: System::Void txSearch_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		library_Display( str2std(txSearch->Text) );
			 }
	private: System::Void lvLibrary_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
		if (!lvLibrary->SelectedItems->Count) return;
		
		System::Windows::Forms::ListViewItem^ lAdd;
		
		lAdd = lvPlaylist->Items->Add( lvLibrary->SelectedItems[0]->Text );
		lAdd->SubItems->Add( lvLibrary->SelectedItems[0]->SubItems[1]->Text );
		
		System::Diagnostics::Debug::WriteLine(axWMP->playState);
		if (axWMP->playState == WMPLib::WMPPlayState::wmppsUndefined || axWMP->playState == WMPLib::WMPPlayState::wmppsStopped)
			library_PlayNext();
			 }
private: System::Void btnControlUp_Click(System::Object^  sender, System::EventArgs^  e) {
	panelControl->Visible = false;
	btnControlDn->Visible = true;
		 }
private: System::Void btnControlDn_Click(System::Object^  sender, System::EventArgs^  e) {
	panelControl->Visible = true;
	btnControlDn->Visible = false;
		 }
private: System::Void btnPlaylistDel_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!lvPlaylist->SelectedItems->Count) return;
	lvPlaylist->Items->Remove( lvPlaylist->SelectedItems[0] );
		 }
private: System::Void btnPlaylistUp_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!lvPlaylist->SelectedItems->Count || lvPlaylist->SelectedItems[0]->Index == 0) return;
	
	System::Windows::Forms::ListViewItem^	lMove = lvPlaylist->SelectedItems[0];
	UINT									index = lMove->Index;
	
	lvPlaylist->Items->Remove(lMove);
	lvPlaylist->Items->Insert( index-1, lMove );
	
	lMove->Selected = true;
	
		 }
private: System::Void btnPlaylistDn_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!lvPlaylist->SelectedItems->Count || lvPlaylist->SelectedItems[0]->Index >= lvPlaylist->Items->Count-1) return;
	
	System::Windows::Forms::ListViewItem^	lMove = lvPlaylist->SelectedItems[0];
	UINT									index = lMove->Index;
	
	lvPlaylist->Items->Remove(lMove);
	lvPlaylist->Items->Insert( index+1, lMove );
	
	lMove->Selected = true;
	
		 }
private: System::Void lvPlaylist_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (!lvPlaylist->SelectedItems->Count) {
		btnPlaylistUp->Enabled = false; 
		btnPlaylistDn->Enabled = false; 
		btnPlaylistDel->Enabled = false; 
		return;
	}
	
	btnPlaylistDel->Enabled = true; 
	btnPlaylistUp->Enabled = (lvPlaylist->SelectedItems[0]->Index != 0);
	btnPlaylistDn->Enabled = (lvPlaylist->SelectedItems[0]->Index < lvPlaylist->Items->Count-1);
		 }
private: System::Void axWMP_PlayStateChange(System::Object^  sender, AxWMPLib::_WMPOCXEvents_PlayStateChangeEvent^  e) {
	static bool bOnProc = false;
	
	System::Diagnostics::Debug::WriteLine(axWMP->playState );
	if (axWMP->playState == WMPLib::WMPPlayState::wmppsStopped) {
		if (bOnProc) { bOnProc = false; //axWMP->Ctlcontrols->play(); 
			System::Diagnostics::Debug::WriteLine("Proc on bOnProc: aborting");
			return; }
			
		System::Diagnostics::Debug::WriteLine("Proc on success");
		bOnProc = true;
		library_PlayNext();
	}
		 }
};
}

