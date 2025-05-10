#pragma once

namespace LB1_there {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ inputText;
	protected:

	private: System::Windows::Forms::TextBox^ outputText;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ FileButton;
	private: System::Windows::Forms::Button^ StartButton;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inputText = (gcnew System::Windows::Forms::TextBox());
			this->outputText = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->FileButton = (gcnew System::Windows::Forms::Button());
			this->StartButton = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// inputText
			// 
			this->inputText->Location = System::Drawing::Point(12, 80);
			this->inputText->Multiline = true;
			this->inputText->Name = L"inputText";
			this->inputText->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->inputText->Size = System::Drawing::Size(285, 370);
			this->inputText->TabIndex = 0;
			// 
			// outputText
			// 
			this->outputText->Location = System::Drawing::Point(336, 80);
			this->outputText->Multiline = true;
			this->outputText->Name = L"outputText";
			this->outputText->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->outputText->Size = System::Drawing::Size(306, 370);
			this->outputText->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Исходный текст";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(333, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Измененный текст";
			// 
			// FileButton
			// 
			this->FileButton->Location = System::Drawing::Point(222, 32);
			this->FileButton->Name = L"FileButton";
			this->FileButton->Size = System::Drawing::Size(75, 36);
			this->FileButton->TabIndex = 4;
			this->FileButton->Text = L"Загрузка файла";
			this->FileButton->UseVisualStyleBackColor = true;
			this->FileButton->Click += gcnew System::EventHandler(this, &MyForm::FileButton_Click);
			// 
			// StartButton
			// 
			this->StartButton->Location = System::Drawing::Point(241, 483);
			this->StartButton->Name = L"StartButton";
			this->StartButton->Size = System::Drawing::Size(148, 43);
			this->StartButton->TabIndex = 5;
			this->StartButton->Text = L"Начать";
			this->StartButton->UseVisualStyleBackColor = true;
			this->StartButton->Click += gcnew System::EventHandler(this, &MyForm::StartButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 569);
			this->Controls->Add(this->StartButton);
			this->Controls->Add(this->FileButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->outputText);
			this->Controls->Add(this->inputText);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FileButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FileName = "";
		/*if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog1->FileName;
		}*/
		try
		{
			StreamReader^ file = File::OpenText("input.txt");
			inputText->Text = file->ReadToEnd();
		}
		catch (Exception^ e)
		{
			inputText->Text = "Файл не был открыт";
		}
	}


	private: System::Void StartButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ s = inputText->Text;
		outputText->Text = "";

		int Number = 1;
		outputText->Text += "1\t";
		int S = 0, i = 0, len = s->Length;
		bool perehod = 0;

		while (i<len)
		{
			switch (S)
			{
			case 0:
				if (s[i] == ' ') {
					S = 2;
				}
				else if (s[i] == '\r') {
					i++;
					S = 0;
				}
				else if (s[i] == '\t');
				else if (s[i] == '/') S = 3;
				else {
					outputText->Text += s[i];
					S = 1;
				}
				break;

			case 1:
				if (s[i] == ' ') {
					outputText->Text += s[i];
					S = 2;
				}
				else if (s[i] == '\r') {
					i++;
					outputText->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				else if (s[i] == '\t') S = 0;
				else if (s[i] == '/') S = 8;
				else {
					outputText->Text += s[i];
					S = 1;
				}
				break;
			case 2:
				if (s[i] == ' ') S = 2;
				else if (s[i] == '\r') {
					i++;
					outputText->Text += "\r\n" + ++Number + "\t";;
					S = 0;
				}
				else if (s[i] == '\t') S = 2;
				else if (s[i] == '/') S = 3;
				else {
					outputText->Text += s[i];
					S = 1;
				}
				break;
			case 3:
				if (s[i] == '\r') {
					i++;
					outputText->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				else if (s[i] == '\t') {
					S = 1;
					outputText->Text += "/";
				}
				else if (s[i] == '/') S = 4;
				else if (s[i] == '*') S = 5;
				else {
					outputText->Text += "/" + s[i];
					S = 1;
				}
				break;
			case 4:
				if (s[i] == '\r') {
					i++;
					//outputText->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				break;
			case 5:
				if (s[i] == '*') S = 6;
				if (s[i] == '\r') S = 7;

				break;
			case 6:
				if (s[i] == '/') S = 0;
				else S = 5;
				break;
			case 7:
				if (s[i] == '/') S = 1;
				else S = 5;
				break;
			case 8:
				if (s[i] == '\r') {
					i++;
					outputText->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				else if (s[i] == '\t') S = 1;
				else if (s[i] == '/') S = 9;
				else if (s[i] == '*') S = 5;
				else {
					outputText->Text += "/" + s[i];
					S = 1;
				}
				break;
			case 9:
				if (s[i] == '\r') {
					i++;
					outputText->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				break;
			}

			i++;
		}

	}
	};
}
