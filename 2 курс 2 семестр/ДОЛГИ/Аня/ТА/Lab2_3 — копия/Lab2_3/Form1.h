#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 306);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 61);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Load File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(152, 306);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 61);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Convert File";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(246, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(217, 288);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 12);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(228, 288);
			this->textBox2->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(524, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(342, 150);
			this->dataGridView1->TabIndex = 7;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"10";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Ключ.слова";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Псевдокод";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView2->Location = System::Drawing::Point(524, 178);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(342, 150);
			this->dataGridView2->TabIndex = 8;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"20";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Идентификаторы";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Псевдокод";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 374);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(227, 159);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(246, 374);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(217, 159);
			this->textBox4->TabIndex = 10;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1351, 561);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: void filtering(int S, String^* s, int Number, int len) {
		for (int i = 0; i < len; i++)
		{
			switch (S)
			{
			case 0:
				if ((*s)[i] == ' ') {
					S = 2;
				}
				else if ((*s)[i] == '\r') {
					i++;
					S = 0;
				}
				else if ((*s)[i] == '\t');
				else if ((*s)[i] == '/') S = 3;
				else {
					textBox1->Text += (*s)[i];
					S = 1;
				}
				break;

			case 1:
				if ((*s)[i] == ' ') {
					textBox1->Text += (*s)[i];
					S = 2;
				}
				else if ((*s)[i] == '\r') {
					i++;
					textBox1->Text += "\r\n" + ++Number + "\t" + " ";
					S = 0;
				}
				else if ((*s)[i] == '\t') S = 0;
				else if ((*s)[i] == '/') S = 8;
				else {
					textBox1->Text += (*s)[i];
					S = 1;
				}
				break;
			case 2:
				if ((*s)[i] == ' ') S = 2;
				else if ((*s)[i] == '\r') {
					i++;
					textBox1->Text += "\r\n" + ++Number + "\t" + " ";
					S = 0;
				}
				else if ((*s)[i] == '\t') S = 2;
				else if ((*s)[i] == '/') S = 3;
				else {
					textBox1->Text += (*s)[i];
					S = 1;
				}
				break;
			case 3:
				if ((*s)[i] == '\r') {
					i++;
					textBox1->Text += "\r\n" + ++Number + "\t" + " ";
					S = 0;
				}
				else if ((*s)[i] == '\t') {
					S = 1;
					textBox1->Text += "/";
				}
				else if ((*s)[i] == '/') S = 4;
				else if ((*s)[i] == '*') S = 5;
				else {
					textBox1->Text += "/" + (*s)[i];
					S = 1;
				}
				break;
			case 4:
				if ((*s)[i] == '\r') {
					i++;
					//textBox1->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				break;
			case 5:
				if ((*s)[i] == '*') S = 6;
				if ((*s)[i] == '\r') S = 7;

				break;
			case 6:
				if ((*s)[i] == '/') S = 0;
				else S = 5;
				break;
			case 7:
				if ((*s)[i] == '/') S = 1;
				else S = 5;
				break;
			case 8:
				if ((*s)[i] == '\r') {
					i++;
					textBox1->Text += "\r\n" + ++Number + "\t" + " ";
					S = 0;
				}
				else if ((*s)[i] == '\t') S = 1;
				else if ((*s)[i] == '/') S = 9;
				else if ((*s)[i] == '*') S = 5;
				else {
					textBox1->Text += "/" + (*s)[i];
					S = 1;
				}
				break;
			case 9:
				if ((*s)[i] == '\r') {
					i++;
					textBox1->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				break;

			}

		}
	}

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{
		String^ fileName = "test.txt";
		try
		{
			StreamReader^ DataIn = File::OpenText(fileName);
			String^ DataStr;
			int count = 0;
			while ((DataStr = DataIn->ReadLine()) != nullptr)
			{
				count++;
				MessageBox::Show("Line " + count + " " + DataStr);
			}
		}
		catch (Exception^ e)
		{
			if (dynamic_cast<FileNotFoundException^>(e))
				MessageBox::Show("File " + fileName + " not found");
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ myStream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
				String^ path = openFileDialog1->FileName;
				StreamReader^ reader = File::OpenText(path);

				textBox2->Text = reader->ReadToEnd();
				myStream->Close();
			}
		}

	}

		   int numcount = 1, keywordcount = 1, idcount = 1, opcount = 1, symcount = 1;
		   String^ psevdo;
		   String^ descrypt;
		   String^ error_identificator = " - ошибка идентификатора ";
		   String^ error_constant = " - ошибка константы";
		   String^ error_symbol = " - ошибка символа";
		   String^ error_operation = " - ошибка операции";
		   bool fl, fl1, fl2, fl3;
		void output(String^ word, int S, int i, int count) {
			if (word != " ") {
				if (S == 183) {
					bool flag = true;
					for (int i = 0; i < keywordcount - 1; i++) {
						if (dataGridView1[1, i]->Value->ToString() == word) flag = false;
					}

					if (flag) dataGridView1->Rows->Add(keywordcount++, word, word);
					psevdo += word + " ";
					for (int i = 0; i < keywordcount - 1; i++) {
						if (dataGridView1[1, i]->Value->ToString() == word) {
							descrypt += "(10.";
							descrypt += dataGridView1[0, i]->Value->ToString() + ") ";
						}
					}
					flag = true;
				}
				if (S == 193 || S == 194) {
					bool flag = true;
					for (int i = 0; i < idcount - 1; i++) {
						if (dataGridView2[1, i]->Value->ToString() == word) flag = false;
					}
					String^ idd = "id";
					if (flag) dataGridView2->Rows->Add(idcount++, word, idd += idcount - 1); idd = "id";
					for (int i = 0; i < idcount - 1; i++) {
						if (dataGridView2[1, i]->Value->ToString() == word) {
							psevdo += dataGridView2[2, i]->Value->ToString() + " ";
							descrypt += "(20.";
							descrypt += dataGridView2[0, i]->Value->ToString() + ") ";
						}
					}
					flag = true;
				}
			}
			
		}


		int check(int S, String^ s, int i, bool sym, bool alp, String^ FullAlp, String^ symbolSpec, String^ word, int count) {
			S = 193;
			for (int j = 0; j < FullAlp->Length; j++) { if (s[i] == FullAlp[j]) alp = true; }
			for (int j = 0; j < symbolSpec->Length; j++) { if (s[i] == symbolSpec[j]) sym = true; }
			if (alp) {
				word += s[i];
			}
			else if (sym) { S = 900; word += s[i]; }//ошибка идентификатора
			else {
				output(word, S, i, count);
			}
			return S;
		}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = textBox2->Text + " ";
		//textBox1->Text = "";

		int Number = 1;
		textBox1->Text += "1\t";
		int S = 0, i = 0, len = s->Length;
		bool perehod = 0;

		filtering(S, &s, Number, len);

		String^ word;
		String^ number = "0123456789";
		String^ Alphabet = "_AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
		String^ FullAlp = Alphabet + number;
		String^ symbol = ":;,.^'()[]{}#";
		String^ symbolSpec = "@$^~";
		int count = 0;
		S = 0;
		i = 0;
		bool flag, sym = false, alp = false;
		while (i < len) {
			switch (S) {
				case 0:
					if (s[i] == 'a') { S = 2; word += s[i]; }
					else if (s[i] == 'b') {S = 12;  word += s[i];}
					else if (s[i] == 'c'){S = 22; word += s[i];}
					else if (s[i] == 'd') {S = 42; word += s[i];}
					else if (s[i] == 'e') {S = 52;  word += s[i];}
					else if (s[i] == 'f') {S = 60; word += s[i];}
					else if (s[i] == 'i'){S = 68;  word += s[i];}
					else if (s[i] == 'l') {S = 70;  word += s[i];}
					else if (s[i] == 'm') {S = 73; word += s[i];}
					else if (s[i] == 'n') {S = 81; word += s[i];}
					else if (s[i] == 'o') {S = 95; word += s[i];}
					else if (s[i] == 'p') {S = 103; word += s[i];}
					else if (s[i] == 'r') {S = 119;  word += s[i];}
					else if (s[i] == 's') {S = 124; word += s[i];}
					else if (s[i] == 't') {S = 148; word += s[i];}
					else if (s[i] == 'u') {S = 159; word += s[i];}
					else if (s[i] == 'v') {S = 171; word += s[i];}
					else if (s[i] == 'w') {S = 179; word += s[i];}

					else if (s[i] >= '1' && s[i] <= '9') {S = 1;count += s[i];}
					else if (s[i] == '0') {S = 187;count += s[i];}

					else if (S==0){
						for (int j = 0; j < symbolSpec->Length; j++) {
							if (s[i] == symbolSpec[j]) sym = true;
						}
						if (sym) { S = 300; word += s[i];}
						else {
							alp = false;
							for (int j = 0; j < FullAlp->Length; j++) {
								if (s[i] == FullAlp[j]) alp = true;
							}
							if (alp) {
								S = 193; //Конечная состояние для идентификаторов
								word += s[i];
							}
							else {
								alp = false;
								for (int j = 0; j < symbol->Length; j++) {
									if (s[i] == symbol[j]) alp = true;
								}
								if (alp) {
									S = 188; //разделители
									word += s[i];
								}
								else {
									word += s[i];
									output(word, S, i, count);
									word = "";
									S = 0;
									i--;
									i++;
								}
							}
						}
					}
					break;

					//Ключевые слова
				case 2:
					if (s[i] == 'b') { S = 3; word += s[i]; }
					else if (s[i] == 'u') {S = 10; word += s[i];}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 3:
					if (s[i] == 's') {S = 4;  word += s[i];}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 4:
					if (s[i] == 't') {S = 5; word += s[i];}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 5:
					if (s[i] == 'r') {S = 6;  word += s[i];}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 6:
					if (s[i] == 'a') {S = 7; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 7:
					if (s[i] == 'c') {S = 8; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 8:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//abstract
				case 10:
					if (s[i] == 't') {S = 11; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 11:
					if (s[i] == 'o') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//auto
				case 12:
					if (s[i] == 'a') {S = 13; word += s[i];
					}
					else if (s[i] == 'o') {S = 15; word += s[i];
					}
					else if (s[i] == 'r') {S = 17; word += s[i];
					}
					else if (s[i] == 'y') {S = 20; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 13:
					if (s[i] == 's') {S = 14; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 14:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//base
				case 15:
					if (s[i] == 'o') {S = 16; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 16:
					if (s[i] == 'l') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//bool
				case 17:
					if (s[i] == 'e') {S = 18; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 18:
					if (s[i] == 'a') {S = 19; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 19:
					if (s[i] == 'k') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//break
				case 20:
					if (s[i] == 't') {S = 21; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 21:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//byte
				case 22:
					if (s[i] == 'a') {S = 23; word += s[i];
					}
					else if (s[i] == 'h') {S = 28; word += s[i];
					}
					else if (s[i] == 'i') {S = 30; word += s[i];
					}
					else if (s[i] == 'l') {S = 31; word += s[i];
					}
					else if (s[i] == 'o') {S = 34; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 23:
					if (s[i] == 's') {S = 24; word += s[i];
					}
					else if (s[i] == 't') {S = 25; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 24:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}//case
					break;
				case 25:
					if (s[i] == 'c') {S = 26; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 26:
					if (s[i] == 'h') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//catch
				case 28:
					if (s[i] == 'a') {S = 29; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 29:
					if (s[i] == 'r') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//char
				case 30:
					if (s[i] == 'n') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//cin
				case 31:
					if (s[i] == 'a') {S = 32; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 32:
					if (s[i] == 's') {S = 33; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 33:
					if (s[i] == 's') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//class
				case 34:
					if (s[i] == 'u') {S = 35; word += s[i];
					}
					else if (s[i] == 'n') {S = 36; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 35:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//cout
				case 36:
					if (s[i] == 's') {S = 37; word += s[i];
					}
					else if (s[i] == 't') {S = 38; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 37:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//const
				case 38:
					if (s[i] == 'i') {S = 39; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 39:
					if (s[i] == 'n') {S = 40; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 40:
					if (s[i] == 'u') {S = 41; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 41:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//continue
				case 42:
					if (s[i] == 'e') {S = 43; word += s[i];
					}
					else if (s[i] == 'o') {S = 48; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 43:
					if (s[i] == 'f') {S = 44; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 44:
					if (s[i] == 'a') {S = 45; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 45:
					if (s[i] == 'u') {S = 46; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 46:
					if (s[i] == 'l') {S = 47; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 47:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//default
				case 48:
					if (s[i] == 'u') {S = 49; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 49:
					if (s[i] == 'b') {S = 50; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 50:
					if (s[i] == 'l') {S = 51; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 51:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//double
				case 52:
					if (s[i] == 'l') {S = 53; word += s[i];
					}
					else if (s[i] == 'n') {S = 55; word += s[i];
					}
					else if (s[i] == 'v') {S = 57; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 53:
					if (s[i] == 's') {S = 54; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 54:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//else
				case 55:
					if (s[i] == 'u') {S = 56; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 56:
					if (s[i] == 'm') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//enum
				case 57:
					if (s[i] == 'e') {S = 58; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 58:
					if (s[i] == 'n') {S = 59; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 59:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//event
				case 60:
					if (s[i] == 'a') {S = 61; word += s[i];
					}
					else if (s[i] == 'l') {S = 64; word += s[i];
					}
					else if (s[i] == 'o') {S = 67; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 61:
					if (s[i] == 'l') {S = 62; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 62:
					if (s[i] == 's') {S = 63; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 63:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//false
				case 64:
					if (s[i] == 'o') {S = 65; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 65:
					if (s[i] == 'a') {S = 66; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 66:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//float
				case 67:
					if (s[i] == 'r') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//for
				case 68:
					if (s[i] == 'n') {S = 69; word += s[i];}
					else if (s[i] == 'f') { S = 183; word += s[i]; }//if
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 69:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//int
				case 70:
					if (s[i] == 'o') {S = 71; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 71:
					if (s[i] == 'n') {S = 72; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 72:
					if (s[i] == 'g') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//long
				case 73:
					if (s[i] == 'a') {S = 74; word += s[i];
					}
					else if (s[i] == 'u') {S = 76; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 74:
					if (s[i] == 'i') {S = 75; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 75:
					if (s[i] == 'n') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//main
				case 76:
					if (s[i] == 't') {S = 77; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 77:
					if (s[i] == 'a') {S = 78; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 78:
					if (s[i] == 'b') {S = 79; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 79:
					if (s[i] == 'l') {S = 80; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 80:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//mutable
				case 81:
					if (s[i] == 'a') {S = 82; word += s[i];
					}
					else if (s[i] == 'e') {S = 89; word += s[i];
					}
					else if (s[i] == 'u') {S = 90; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 82:
					if (s[i] == 'm') {S = 83; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 83:
					if (s[i] == 'e') {S = 84; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 84:
					if (s[i] == 's') {S = 85; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 85:
					if (s[i] == 'p') {S = 86; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 86:
					if (s[i] == 'a') {S = 87; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 87:
					if (s[i] == 'c') {S = 88; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 88:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//namespace
				case 89:
					if (s[i] == 'w') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//new
				case 90:
					if (s[i] == 'l') {S = 91; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 91:
					if (s[i] == 'l') {S = 92; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 92:
					if (s[i] == 'p') {S = 93; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 93:
					if (s[i] == 't') {S = 94; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 94:
					if (s[i] == 'r') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//nullptr
				case 95:
					if (s[i] == 'v') {S = 97; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 97:
					if (s[i] == 'e') {S = 98; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 98:
					if (s[i] == 'r') {S = 99; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 99:
					if (s[i] == 'r') {S = 100; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 100:
					if (s[i] == 'i') {S = 101; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 101:
					if (s[i] == 'd') {S = 102; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 102:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//overrate
				case 103:
					if (s[i] == 'r') {S = 104; word += s[i];
					}
					else if (s[i] == 'u') {S = 115; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 104:
					if (s[i] == 'i') {S = 105; word += s[i];
					}
					else if (s[i] == 'o') {S = 109; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 105:
					if (s[i] == 'v') {S = 106; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 106:
					if (s[i] == 'a') {S = 107; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 107:
					if (s[i] == 't') {S = 108; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 108:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//private
				case 109:
					if (s[i] == 't') {S = 110; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 110:
					if (s[i] == 'e') {S = 111; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 111:
					if (s[i] == 'c') {S = 112; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 112:
					if (s[i] == 't') {S = 113; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 113:
					if (s[i] == 'e') {S = 114; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 114:
					if (s[i] == 'd') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//protected
				case 115:
					if (s[i] == 'b') {S = 116; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 116:
					if (s[i] == 'l') {S = 117; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 117:
					if (s[i] == 'i') {S = 118; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 118:
					if (s[i] == 'c') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//public
				case 119:
					if (s[i] == 'e') {S = 120; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 120:
					if (s[i] == 'f') { S = 183; word += s[i]; }//ref
					else if (s[i] == 't') {S = 121; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 121:
					if (s[i] == 'u') {S = 122; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 122:
					if (s[i] == 'r') {S = 123; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 123:
					if (s[i] == 'n') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//return
				case 124:
					if (s[i] == 'b') {S = 125; word += s[i];
					}
					else if (s[i] == 'h') {S = 128; word += s[i];
					}
					else if (s[i] == 'i') {S = 131; word += s[i];
					}
					else if (s[i] == 't') {S = 135; word += s[i];
					}
					else if (s[i] == 'w') {S = 144; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					break;
				case 125:
					if (s[i] == 'y') {S = 126; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 126:
					if (s[i] == 't') {S = 127; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 127:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//sbyte
				case 128:
					if (s[i] == 'o') {S = 129; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 129:
					if (s[i] == 'r') {S = 130; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 130:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//short
				case 131:
					if (s[i] == 'z') {S = 132; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 132:
					if (s[i] == 'e') {S = 133; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 133:
					if (s[i] == 'o') {S = 134; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 134:
					if (s[i] == 'f') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//sizeof
				case 135:
					if (s[i] == 'a') {S = 136; word += s[i];
					}
					else if (s[i] == 'r') {S = 139; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 136:
					if (s[i] == 't') {S = 137; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 137:
					if (s[i] == 'i') {S = 138; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 138:
					if (s[i] == 'c') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//static
				case 139:
					if (s[i] == 'i') {S = 140; word += s[i];
					}
					else if (s[i] == 'u') {S = 142; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 140:
					if (s[i] == 'n') {S = 141; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 141:
					if (s[i] == 'g') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//string
				case 142:
					if (s[i] == 'c') {S = 143; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 143:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//struct
				case 144:
					if (s[i] == 'i') {S = 145; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 145:
					if (s[i] == 't') {S = 146; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 146:
					if (s[i] == 'c') {S = 147; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 147:
					if (s[i] == 'h') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//switch
				case 148:
					if (s[i] == 'h') {S = 149; word += s[i];
					}
					else if (s[i] == 'r') {S = 153; word += s[i];
					}
					else if (s[i] == 'y') {S = 155; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 149:
					if (s[i] == 'i') {S = 150; word += s[i];
					}
					else if (s[i] == 'r') {S = 151; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 150:
					if (s[i] == 's') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//this
				case 151:
					if (s[i] == 'o') {S = 152; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 152:
					if (s[i] == 'w') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//throw
				case 153:
					if (s[i] == 'u') {S = 154; word += s[i];
					}
					else if (s[i] == 'y') { S = 183; word += s[i]; }//try
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 154:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//true
				case 155:
					if (s[i] == 'p') {S = 156; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 156:
					if (s[i] == 'e') {S = 157; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 157:
					if (s[i] == 'o') {S = 158; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 158:
					if (s[i] == 'f') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//typeof
				case 159:
					if (s[i] == 'i') {S = 160; word += s[i];
					}
					else if (s[i] == 'l') {S = 162; word += s[i];
					}
					else if (s[i] == 's') {S = 165; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 160:
					if (s[i] == 'n') {S = 161; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 161:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//uint
				case 162:
					if (s[i] == 'o') {S = 163; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 163:
					if (s[i] == 'n') {S = 164; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 164:
					if (s[i] == 'g') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//ulong
				case 165:
					if (s[i] == 'h') {S = 166; word += s[i];
					}
					else if (s[i] == 'i') {S = 169; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 166:
					if (s[i] == 'o') {S = 167; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 167:
					if (s[i] == 'r') {S = 168; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 168:
					if (s[i] == 't') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//ushort
				case 169:
					if (s[i] == 'n') {S = 170; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 170:
					if (s[i] == 'g') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//using
				case 171:
					if (s[i] == 'i') {S = 172; word += s[i];
					}
					else if (s[i] == 'o') {S = 177; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 172:
					if (s[i] == 'r') {S = 173; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 173:
					if (s[i] == 't') {S = 174; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 174:
					if (s[i] == 'u') {S = 175; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 175:
					if (s[i] == 'a') {S = 176; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 176:
					if (s[i] == 'l') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//virtual
				case 177:
					if (s[i] == 'i') {S = 178; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 178:
					if (s[i] == 'd') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//void
				case 179:
					if (s[i] == 'h') {S = 180; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 180:
					if (s[i] == 'i') {S = 181; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 181:
					if (s[i] == 'l') {S = 182; word += s[i];
					}
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;
				case 182:
					if (s[i] == 'e') { S = 183; word += s[i]; }
					else {
						if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 193) { S = 193; }
						else if (check(S, s, i, sym, alp, FullAlp, symbolSpec, word, count) == 900) { S = 900; }
						word += s[i];
						alp = false;
					}
					break;//while

				case 183:
					output(word, S, i, count);//Конеч.состояние ключ.слов
					word = "";
					S = 0;
					i--;
					break;
				case 193:
					alp = false;
					for (int j = 0; j < FullAlp->Length; j++) {
						if (s[i] == FullAlp[j]) alp = true;
					}
					if (alp) {
						S = 193; 
						word += s[i];
					}
					else {
						for (int j = 0; j < symbolSpec->Length; j++) { 
							if (s[i] == symbolSpec[j]) sym = true;}
						if (sym) {
							S = 195;
							word += s[i];
						}
						else {
							S = 194;
						}
					}
					break;
				case 194:
					output(word, S, i, count);
					word = "";
					S = 0;
					i--;
					break;
			}
			i++;
		}
		textBox3->Text = psevdo;
		textBox4->Text = descrypt;
	};
	};
};
}