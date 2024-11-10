#pragma once

namespace FileConverter2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;
	#include"hexconvert.cpp";
	#include"binconvert.cpp";
	#include"strconvert.cpp"

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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ fread;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RichTextBox^ strText;
	private: System::Windows::Forms::Button^ strconvert;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ binText;
	private: System::Windows::Forms::Button^ binconvert;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ hexText;
	private: System::Windows::Forms::Button^ hexconvert;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->fread = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->strText = (gcnew System::Windows::Forms::RichTextBox());
			this->strconvert = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->binText = (gcnew System::Windows::Forms::RichTextBox());
			this->binconvert = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->hexText = (gcnew System::Windows::Forms::RichTextBox());
			this->hexconvert = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 21);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Enter file name here:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 33);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 22);
			this->textBox1->TabIndex = 7;
			// 
			// fread
			// 
			this->fread->BackColor = System::Drawing::SystemColors::Info;
			this->fread->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fread->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->fread->Location = System::Drawing::Point(230, 28);
			this->fread->Name = L"fread";
			this->fread->Size = System::Drawing::Size(75, 30);
			this->fread->TabIndex = 8;
			this->fread->Text = L"Read";
			this->fread->UseVisualStyleBackColor = false;
			this->fread->Click += gcnew System::EventHandler(this, &MyForm::fread_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(114, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 21);
			this->label2->TabIndex = 12;
			this->label2->Text = L"TEXT";
			// 
			// strText
			// 
			this->strText->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->strText->ForeColor = System::Drawing::SystemColors::WindowText;
			this->strText->Location = System::Drawing::Point(16, 115);
			this->strText->Name = L"strText";
			this->strText->Size = System::Drawing::Size(248, 376);
			this->strText->TabIndex = 13;
			this->strText->Text = L"";
			// 
			// strconvert
			// 
			this->strconvert->BackColor = System::Drawing::SystemColors::Info;
			this->strconvert->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->strconvert->Location = System::Drawing::Point(270, 288);
			this->strconvert->Name = L"strconvert";
			this->strconvert->Size = System::Drawing::Size(86, 33);
			this->strconvert->TabIndex = 14;
			this->strconvert->Text = L"Convert";
			this->strconvert->UseVisualStyleBackColor = false;
			this->strconvert->Click += gcnew System::EventHandler(this, &MyForm::strconvert_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(532, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 21);
			this->label3->TabIndex = 15;
			this->label3->Text = L"BINARY";
			// 
			// binText
			// 
			this->binText->Location = System::Drawing::Point(440, 28);
			this->binText->Name = L"binText";
			this->binText->Size = System::Drawing::Size(248, 248);
			this->binText->TabIndex = 16;
			this->binText->Text = L"";
			// 
			// binconvert
			// 
			this->binconvert->BackColor = System::Drawing::SystemColors::Info;
			this->binconvert->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->binconvert->Location = System::Drawing::Point(694, 130);
			this->binconvert->Name = L"binconvert";
			this->binconvert->Size = System::Drawing::Size(86, 33);
			this->binconvert->TabIndex = 17;
			this->binconvert->Text = L"Convert";
			this->binconvert->UseVisualStyleBackColor = false;
			this->binconvert->Click += gcnew System::EventHandler(this, &MyForm::binconvert_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(510, 288);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 21);
			this->label4->TabIndex = 18;
			this->label4->Text = L"HEXADECIMAL";
			// 
			// hexText
			// 
			this->hexText->Location = System::Drawing::Point(440, 312);
			this->hexText->Name = L"hexText";
			this->hexText->Size = System::Drawing::Size(248, 248);
			this->hexText->TabIndex = 19;
			this->hexText->Text = L"";
			// 
			// hexconvert
			// 
			this->hexconvert->BackColor = System::Drawing::SystemColors::Info;
			this->hexconvert->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hexconvert->Location = System::Drawing::Point(694, 418);
			this->hexconvert->Name = L"hexconvert";
			this->hexconvert->Size = System::Drawing::Size(86, 33);
			this->hexconvert->TabIndex = 20;
			this->hexconvert->Text = L"Convert";
			this->hexconvert->UseVisualStyleBackColor = false;
			this->hexconvert->Click += gcnew System::EventHandler(this, &MyForm::hexconvert_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(829, 570);
			this->Controls->Add(this->hexconvert);
			this->Controls->Add(this->hexText);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->binconvert);
			this->Controls->Add(this->binText);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->strconvert);
			this->Controls->Add(this->strText);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->fread);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void fread_Click(System::Object^ sender, System::EventArgs^ e) {
		
		StreamReader^ input_file = File::OpenText(textBox1->Text);

		String^ line;

		line = input_file -> ReadToEnd();
		strText-> Text = line;

		if (input_file)
		{
			input_file-> Close();

		}
	}
	private: System::Void strconvert_Click(System::Object^ sender, System::EventArgs^ e) {
		
		binText->Text = strtobin(strText->Text);
		hexText->Text = strtohex(strText->Text);

	}
private: System::Void binconvert_Click(System::Object^ sender, System::EventArgs^ e) {

	hexText->Text = bintohex(binText->Text);
	strText->Text = bintochar(binText->Text);

	}

	 
private: System::Void hexconvert_Click(System::Object^ sender, System::EventArgs^ e) {
	
	binText->Text = hextobin(hexText->Text);
	//Instead of reading every two hexadecimal characters to output one CHAR value, it is more code efficient to
	//take the resulting binary text and use the existing bin-to-char conversion function
	strText->Text = bintochar(binText->Text);
}
};
}
