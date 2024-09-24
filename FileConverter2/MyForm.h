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
		//retrieve input from textbox
		String^ s = strText->Text;
		int len = strText->Text->Length;  //number of loop iterations corresponds to number of characters in file
		//Initializing result and dummy strings
		String^ bin = "";
		String^ binres = "";
		String^ hexres = "";
		String^ firsthex = "";
		String^ secondhex = "";
		for (int i = 0; i <= len-1 ; i++)
		{
			// convert each char to
			// ASCII value
			int val = int(s[i]);

			// Convert ASCII value to binary
			//loop reads every 8 characters. Adds 1 if decimal divisible by 2 and 0 if not
			for (int j = 0; j < 8; j++) {
				(val % 2) ? bin = "1" + bin :
					bin = "0" + bin;
				val /= 2;
			}
			binres +=bin;
			//reset dummy string
			bin = "";
		};
		
		for (int k = 0; k <= len - 1; k++)
		{
			//Divide decimal value by 16 to get first part of the hexadecimal output 
			int val = int(s[k]);
			firsthex = (val / 16).ToString();
			//Get remainder of the division and map to the second part of hexadecimal output
			int num = val % 16;
			switch(num)
			{
			case 0:
				secondhex = "0";
				break;
			case 1:
				secondhex = "1";
				break;
			case 2:
				secondhex = "2";
				break;
			case 3:
				secondhex = "3";
				break;
			case 4:
				secondhex = "4";
				break;
			case 5:
				secondhex = "5";
				break;
			case 6:
				secondhex = "6";
				break;
			case 7:
				secondhex = "7";
				break;
			case 8:
				secondhex = "8";
				break;
			case 9:
				secondhex = "9";
				break;
			case 10:
				secondhex = "a";
				break;
			case 11:
				secondhex = "b";
				break;
			case 12:
				secondhex = "c";
				break;
			case 13:
				secondhex = "d";
				break;
			case 14:
				secondhex = "e";
				break;
			case 15:
				secondhex = "f";
				break;
			}
			//Add the two parts to an ouput string
			hexres = hexres + firsthex + secondhex ;
		}
		binText->Text = binres;
		hexText->Text = hexres;
		
	}
private: System::Void binconvert_Click(System::Object^ sender, System::EventArgs^ e) {
	//initializing binary base value, decimal value and result strings
	String^ bin = binText->Text;
	String^ resStr = "";
	String^ resHex = "";
	String^ hex = "";
	int dec = 0;
	int len = bin->Length ;
	int base_val = 1;
	
	//double for loops with related indices so that 
	//the base and decimal value restarts for every 8 elements
	//decreasing index to read from right to left
	for (int i = len / 8; i > 0; i--) {

		for (int j = 8 * i - 1; j >= 8 * i - 8; j--) {
			//add the base value if a '1' is found in the string
			if (bin[j] == '1')
				dec += base_val;
			//multiply base value by 2 
			base_val = base_val * 2;
		}
		//dec will be the sum of the 8 characters, and will be the decimal value
		//use dec as the ASCII value to be passed to char function
		Char letter = (char)dec;
		//add to result string
		resStr = letter + resStr;
		//reset
		base_val = 1;
		dec = 0;
		
	}
	// same double for loops but adjusted for every 4 elements
	for (int i = len / 4; i > 0; i--) {

		for (int j = 4 * i - 1; j >= 4 * i - 4; j--) {
			if (bin[j] == '1')
				dec += base_val;
			base_val = base_val * 2;

		}
			//map retrieved decimal value to hexadecimal equivalent
			switch (dec)
			{
			case 0:
				hex = "0";
				break;
			case 1:
				hex = "1";
				break;
			case 2:
				hex = "2";
				break;
			case 3:
				hex = "3";
				break;
			case 4:
				hex = "4";
				break;
			case 5:
				hex = "5";
				break;
			case 6:
				hex = "6";
				break;
			case 7:
				hex = "7";
				break;
			case 8:
				hex = "8";
				break;
			case 9:
				hex = "9";
				break;
			case 10:
				hex = "a";
				break;
			case 11:
				hex = "b";
				break;
			case 12:
				hex = "c";
				break;
			case 13:
				hex = "d";
				break;
			case 14:
				hex = "e";
				break;
			case 15:
				hex = "f";
				break;
			}
			//reset decimal and base
		base_val = 1;
		dec = 0;
		resHex = hex + resHex;
	}

	//output result strings
	hexText->Text = resHex;
	strText->Text = resStr;
	}

	 


private: System::Void hexconvert_Click(System::Object^ sender, System::EventArgs^ e) {
	//initializing decimal values, binary base value and result strings
	int len = hexText->Text->Length;
	String^ bin = "";
	String^ binres = "";
	String^ resStr = "";
	String^ Hex = hexText->Text;
	//initialize two different decimal values to analyse
	int bindec = 0;
	int strdec = 0;
	int base_val = 1;
	//take each element and map into its decimal value
	for (int i = 0; i< len ; i++) {
		Char hex = Hex[i];
		switch (hex) {
		case '1':
			bindec = 1;
			break;
		case '2':
			bindec = 2;
			break;
		case '3':
			bindec = 3;
			break;
		case '4':
			bindec = 4;
			break;
		case '5':
			bindec = 5;
			break;
		case '6':
			bindec = 6;
			break;
		case '7':
			bindec = 7;
			break;
		case '8':
			bindec = 8;
			break;
		case '9':
			bindec = 9;
			break;
		case '0':
			bindec =0 ;
			break;
		case 'a':
			bindec = 10;
			break;
		case 'b':
			bindec = 11;
			break;
		case 'c':
			bindec = 12;
			break;
		case 'd':
			bindec = 13;
			break;
		case 'e':
			bindec = 14;
			break;
		case 'f':
			bindec = 15;
			break;
		}

		//take each decimal and split into 4bits
		for (int j = 0; j < 4; j++) {
			(bindec % 2) ? bin = "1" + bin :
				bin = "0" + bin;
			bindec /= 2;
		}
		binres += bin;
		//reset
		bin = "";
		bindec = 0;
		//ouput resulting binary string
		binText->Text = binres;
	
	}
	//use binary string to convert to CHAR as before
	int size = binres->Length;
	for (int i = size / 8; i > 0; i--) {
		for (int j = 8 * i - 1; j >= 8 * i - 8; j--) {
			if (binres[j] == '1')
				strdec += base_val;
			base_val = base_val * 2;
		}
		Char letter = (char)strdec;
		resStr = letter + resStr;
		//reset
		base_val = 1;
		strdec = 0;
	}
	//output result
	strText->Text = resStr;
}
};
}
