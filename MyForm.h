#pragma once
#include <string>

namespace ProjectMusic2Klavar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		String^ mMusicFileName;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  musicFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  targetFolderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;


	private: System::Windows::Forms::Button^  buttonDraw;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->musicFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->targetFolderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttonDraw = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 1, 0, 1);
			this->menuStrip1->Size = System::Drawing::Size(385, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->musicFileToolStripMenuItem,
					this->targetFolderToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 22);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// musicFileToolStripMenuItem
			// 
			this->musicFileToolStripMenuItem->Name = L"musicFileToolStripMenuItem";
			this->musicFileToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->musicFileToolStripMenuItem->Text = L"Music file";
			this->musicFileToolStripMenuItem->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::musicFileToolStripMenuItem_MouseDown);
			// 
			// targetFolderToolStripMenuItem
			// 
			this->targetFolderToolStripMenuItem->Name = L"targetFolderToolStripMenuItem";
			this->targetFolderToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->targetFolderToolStripMenuItem->Text = L"Target folder";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::exitToolStripMenuItem_MouseDown);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 22);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::aboutToolStripMenuItem_MouseDown);
			// 
			// buttonDraw
			// 
			this->buttonDraw->Location = System::Drawing::Point(35, 24);
			this->buttonDraw->Margin = System::Windows::Forms::Padding(2);
			this->buttonDraw->Name = L"buttonDraw";
			this->buttonDraw->Size = System::Drawing::Size(88, 25);
			this->buttonDraw->TabIndex = 1;
			this->buttonDraw->Text = L"Draw music";
			this->buttonDraw->UseVisualStyleBackColor = true;
			this->buttonDraw->Click += gcnew System::EventHandler(this, &MyForm::buttonDraw_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(385, 159);
			this->Controls->Add(this->buttonDraw);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"Music2Klavar";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		} // void initialize
#pragma endregion 
// above is Windows Form Designer generated code
	private: System::Void thisProgramIsCreatedByToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void buttonDraw_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void musicFileToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {}
	private: System::Void musicFileToolStripMenuItem_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		System::IO::Stream^ myStream;
		OpenFileDialog^ openFileDialogMusicFile = gcnew OpenFileDialog;

		openFileDialogMusicFile->InitialDirectory = "c:\\";
		openFileDialogMusicFile->Filter = "MusicXml files (*.xml)|*.xml|Midi files (*.midi)|*.midi|All files (*.*)|*.*";
		openFileDialogMusicFile->FilterIndex = 1;
		openFileDialogMusicFile->RestoreDirectory = true;

		if (openFileDialogMusicFile->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = openFileDialogMusicFile->OpenFile()) != nullptr) {
				mMusicFileName = openFileDialogMusicFile->FileName;
				myStream->Close();
			}
		}
	};
private: System::Void exitToolStripMenuItem_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Application::Exit();
}
private: System::Void aboutToolStripMenuItem_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	RichTextBox^ richTextBox = gcnew RichTextBox;

	richTextBox->LoadFile("C:\\MyDocument.rtf");
	richTextBox->Find("Text", RichTextBoxFinds::MatchCase);

	richTextBox->SelectionFont = gcnew System::Drawing::Font("Verdana", 12, FontStyle::Bold);
	richTextBox->SelectionColor = Color::Blue;
	richTextBox->Height = 100;
	richTextBox->Width = 325;
	richTextBox->Location = Point(50,50);

	Controls->Add(richTextBox);
}
};
}// namespace
