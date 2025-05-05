#pragma once
#include <cctype>
namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::RichTextBox^ input;
	private: System::Windows::Forms::RichTextBox^ output;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ IntVal;
	private: System::Windows::Forms::DataGridView^ floatVal;


	private: System::Windows::Forms::DataGridView^ doubleVal;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ wordsTab;
	private: System::Windows::Forms::DataGridView^ IdTab;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

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
			this->input = (gcnew System::Windows::Forms::RichTextBox());
			this->output = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->IntVal = (gcnew System::Windows::Forms::DataGridView());
			this->floatVal = (gcnew System::Windows::Forms::DataGridView());
			this->doubleVal = (gcnew System::Windows::Forms::DataGridView());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->wordsTab = (gcnew System::Windows::Forms::DataGridView());
			this->IdTab = (gcnew System::Windows::Forms::DataGridView());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doubleVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wordsTab))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IdTab))->BeginInit();
			this->SuspendLayout();
			// 
			// input
			// 
			this->input->Location = System::Drawing::Point(12, 54);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(545, 259);
			this->input->TabIndex = 0;
			this->input->Text = L"";
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(12, 376);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(545, 259);
			this->output->TabIndex = 1;
			this->output->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Входной код";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 332);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Обратный код";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1314, 840);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Обработать код";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// IntVal
			// 
			this->IntVal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->IntVal->Location = System::Drawing::Point(652, 54);
			this->IntVal->Name = L"IntVal";
			this->IntVal->Size = System::Drawing::Size(239, 217);
			this->IntVal->TabIndex = 5;
			// 
			// floatVal
			// 
			this->floatVal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->floatVal->Location = System::Drawing::Point(1142, 54);
			this->floatVal->Name = L"floatVal";
			this->floatVal->Size = System::Drawing::Size(239, 217);
			this->floatVal->TabIndex = 6;
			// 
			// doubleVal
			// 
			this->doubleVal->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->doubleVal->Location = System::Drawing::Point(897, 54);
			this->doubleVal->Name = L"doubleVal";
			this->doubleVal->Size = System::Drawing::Size(239, 217);
			this->doubleVal->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(647, 26);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 25);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Целые";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(892, 26);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 25);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Вещественные";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1137, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(208, 25);
			this->label5->TabIndex = 10;
			this->label5->Text = L"С плавающей точкой";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 689);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(393, 204);
			this->richTextBox1->TabIndex = 11;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(411, 689);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(393, 204);
			this->richTextBox2->TabIndex = 12;
			this->richTextBox2->Text = L"";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(13, 661);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 25);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Псевдокод";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(411, 661);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Дескрипторный";
			// 
			// wordsTab
			// 
			this->wordsTab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->wordsTab->Location = System::Drawing::Point(652, 376);
			this->wordsTab->Name = L"wordsTab";
			this->wordsTab->Size = System::Drawing::Size(240, 196);
			this->wordsTab->TabIndex = 16;
			// 
			// IdTab
			// 
			this->IdTab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->IdTab->Location = System::Drawing::Point(896, 376);
			this->IdTab->Name = L"IdTab";
			this->IdTab->Size = System::Drawing::Size(240, 196);
			this->IdTab->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(647, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 25);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Слова";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(892, 348);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 25);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Идентификаторы";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1483, 901);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->IdTab);
			this->Controls->Add(this->wordsTab);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->doubleVal);
			this->Controls->Add(this->floatVal);
			this->Controls->Add(this->IntVal);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->output);
			this->Controls->Add(this->input);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntVal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatVal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doubleVal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wordsTab))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IdTab))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очистим поле для обратного кода
		output->Clear();
		// Получим текст из поля записи
		String^ text = input->Text;
		// Создадим переменную для хранения состояний
		int s = 0;
		bool closed = 1;
		int counter = 1;

		output->AppendText(counter.ToString() + "   ");
		counter++;
		char prev = '/';
		// Обойдём каждый символ кода
		for each (Char c in text) {
			switch (s)
			{
			case 0: 
				if (c == '\n') { // если c - это переход на следующую строку
					if (c != prev && prev != '/') {
						output->AppendText(c.ToString());
						output->AppendText(counter.ToString() + "   ");
						counter++;
					}
					prev = c;
					s = 7;
				}
				if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != '\t' && c != '*') {// если символ - это буква
					s = 0;
					output->AppendText(c.ToString());
					prev = c;
				}
				if (c == '/') {// если с = /
					s = 1;
					prev = c;
				}
				if (c == ' ') { // если c - это пробел
					s = 5;
					prev = c;
				}
				if (c == '*') {
					s = 0;
					output->AppendText(c.ToString());
					prev = c;
				}
				if (c == '\t') {
					s = 6;
					prev = c;
				}
				break;
			case 1:
				if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != 't' && c != '*') { // если c - это символ
					s = 0;
					output->AppendText("/");
					output->AppendText(c.ToString());
					prev = c;
				}
				else if (c == '/') {
					s = 2;
					if (c != prev) {
						output->AppendText(c.ToString());
					}
					/*output->AppendText("\n");
					output->AppendText(counter.ToString() + "   ");*/
					prev = c;
				}
				else if (c == '*') {
					if (prev != '/') {
						output->AppendText("/");
					}
					s = 3;
					prev = c;
				}
				else if (c == '\n') {
					s = 0;
					if (c != prev) {
						output->AppendText("/");
						output->AppendText(c.ToString());
						output->AppendText(counter.ToString() + "   ");
						counter++;
					}
					prev = c;
				}
				else if (c == '\t') {
					output->AppendText("/");
					s = 0;
					prev = c;
				}
				else if (' ') {
					output->AppendText("/");
					s = 0;
					prev = c;
				}
				break;
			case 2:
				if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != 't' && c != '*') {
					s = 2;
					prev = c;
				}
				else if (c == '\n') {
					s = 0;
				}
				else if (c == '*') {
					s = 2;
					prev = c;
				}
				else if (c == '\t') {
					s = 2;
				}
				else if (c == '/') {
					s = 2;
					prev = c;
				}
				else if (c == ' ') {
					s = 2;
					prev = c;
				}
				break;
			case 3:
				if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != 't' && c != '*') {
					s = 3;
					prev = c;
				}
				else if (c == ' ') {
					s = 3;
					prev = c;
				}
				else if ('\t') {
					s = 3;
					prev = c;
				}
				else if ('\n') {
					s = 3;
					if (c != prev) {
						counter++;
					}
					prev = c;
				}
				else if (c == '/') {
					s = 3;
					prev = c;
				}
				if (c == '*') {
					s = 4;
					prev = c;
				}
				break;
			case 4:
				if (c == '/') {
					s = 0;
					prev = c;
				}
				else if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != 't' && c != '*') {
					s = 3;
					prev = c;
				}
				else if (c == ' ') {
					s = 3;
					prev = c;
				}
				else if (c == '\t') {
					s = 3;
					prev = c;
				}
				else if (c == '\n') {
					s = 3;
					if (c != prev) {
						counter++;
					}
					prev = c;
				}
				else if (c == '*') {
					s = 3;
					prev = c;
				}
				break;
			case 5:
				if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != 't' && c != '*') {
					s = 0;
					output->AppendText(c.ToString());
					prev = c;
				}
				else if (c == '\t') {
					s = 6;
					prev = c;
				}
				else if (c == '\n') {
					s = 7;
					prev = c;
					if (c != prev) {
						output->AppendText(c.ToString());
						output->AppendText(counter.ToString() + "   ");
						counter++;
					}
				}
				else if (c == ' ') {
					s = 5;
					prev = c;
				}
				else if (c == '*') {
					s = 5;
					output->AppendText(c.ToString());
					prev = c;
				}
				else if (c == '/') {
					s = 1;
					prev = c;
				}
				break;
			case 6:
				if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != 't' && c != '*') {
					s = 0;
					output->AppendText(c.ToString());
					prev = c;
				}
				else if (c == '\t') {
					s = 6;
					prev = c;
				}
				else if (c == '\n') {
					s = 7;
					if (c != prev) {
						output->AppendText(c.ToString());
						output->AppendText(counter.ToString() + "   ");
						counter++;
					}
					prev = c;
				}
				else if (c == ' ') {
					s = 5;
					prev = c;
				}
				else if (c == '*') {
					s = 6;
					output->AppendText(c.ToString());
					prev = c;
				}
				else if (c == '/') {
					s = 1;
					prev = c;
				}
				break;
			case 7:
				if (!Char::IsWhiteSpace(c) && c != '\n' && c != '/' && c != '\r' && c != 't' && c != '*') {
					s = 0;
					output->AppendText(c.ToString());
					prev = c;
				}
				else if (c == '\t') {
					s = 6;
					prev = c;
				}
				else if (c == '\n') {
					s = 7;
					if (c != prev) {
						output->AppendText(c.ToString());
						output->AppendText(counter.ToString() + "   ");
						counter++;
					}
					prev = c;
				}
				else if (c == '*') {
					s = 7;
					output->AppendText(c.ToString());
					prev = c;
				}
				else if (c == ' ') {
					s = 5;
					prev = c;
				}
				else if (c == '/') {
					s = 1;
					prev = c;
				}
				break;
			default:
				break;
			}
		}
		IntVal->Rows->Clear();
		if (IntVal->Columns->Count == 0) {
			DataGridViewTextBoxColumn^ column1 = gcnew DataGridViewTextBoxColumn();
			column1->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column1->Name = "10";
			IntVal->Columns->Add(column1);
			
			DataGridViewTextBoxColumn^ column2 = gcnew DataGridViewTextBoxColumn();
			column2->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column2->Name = "Number";
			IntVal->Columns->Add(column2);

			DataGridViewTextBoxColumn^ column3 = gcnew DataGridViewTextBoxColumn();
			column3->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column3->Name = "Psevdo";
			IntVal->Columns->Add(column3);
		}
		doubleVal->Rows->Clear();
		if (doubleVal->Columns->Count == 0) {
			DataGridViewTextBoxColumn^ column1 = gcnew DataGridViewTextBoxColumn();
			column1->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column1->Name = "20";
			doubleVal->Columns->Add(column1);

			DataGridViewTextBoxColumn^ column2 = gcnew DataGridViewTextBoxColumn();
			column2->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column2->Name = "Number";
			doubleVal->Columns->Add(column2);

			DataGridViewTextBoxColumn^ column3 = gcnew DataGridViewTextBoxColumn();
			column3->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column3->Name = "Psevdo";
			doubleVal->Columns->Add(column3);
		}
		floatVal->Rows->Clear();
		if (floatVal->Columns->Count == 0) {
			DataGridViewTextBoxColumn^ column1 = gcnew DataGridViewTextBoxColumn();
			column1->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column1->Name = "30";
			floatVal->Columns->Add(column1);

			DataGridViewTextBoxColumn^ column2 = gcnew DataGridViewTextBoxColumn();
			column2->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column2->Name = "Number";
			floatVal->Columns->Add(column2);

			DataGridViewTextBoxColumn^ column3 = gcnew DataGridViewTextBoxColumn();
			column3->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column3->Name = "Psevdo";
			floatVal->Columns->Add(column3);
		}
		wordsTab->Rows->Clear();
		if (wordsTab->Columns->Count == 0) {
			DataGridViewTextBoxColumn^ column1 = gcnew DataGridViewTextBoxColumn();
			column1->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column1->Name = "40";
			wordsTab->Columns->Add(column1);

			DataGridViewTextBoxColumn^ column2 = gcnew DataGridViewTextBoxColumn();
			column2->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column2->Name = "Number";
			wordsTab->Columns->Add(column2);

			DataGridViewTextBoxColumn^ column3 = gcnew DataGridViewTextBoxColumn();
			column3->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column3->Name = "Psevdo";
			wordsTab->Columns->Add(column3);
		}
		IdTab->Rows->Clear();
		if (IdTab->Columns->Count == 0) {
			DataGridViewTextBoxColumn^ column1 = gcnew DataGridViewTextBoxColumn();
			column1->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column1->Name = "50";
			IdTab->Columns->Add(column1);

			DataGridViewTextBoxColumn^ column2 = gcnew DataGridViewTextBoxColumn();
			column2->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column2->Name = "Number";
			IdTab->Columns->Add(column2);

			DataGridViewTextBoxColumn^ column3 = gcnew DataGridViewTextBoxColumn();
			column3->AutoSizeMode = DataGridViewAutoSizeColumnMode::AllCells;
			column3->Name = "Psevdo";
			IdTab->Columns->Add(column3);
		}
		String^ str = input->Text + " ";
		int s1 = 0;
		int i = 0;
		int in = 1, dou = 1, fl = 1;
		int len = str->Length;
		String^ st = "";
		richTextBox1->Clear();
		richTextBox2->Clear();
		while (i < len) {
			switch (s1)
			{
			case 0:
				if (i >= str->Length) i--;
				if (i != 0 && i < str->Length && (str[i - 1] != '0' || str[i - 1] != '1' || str[i - 1] != '2' || str[i - 1] != '3' ||
					str[i - 1] != '4' || str[i - 1] != '5' || str[i - 1] != '6' || str[i - 1] != '7' || str[i - 1] != '8' || str[i - 1] != '9') && str[i] == '-' && (str[i + 1] == '0' || str[i + 1] == '1' || str[i + 1] == '2' || str[i + 1] == '3' ||
					str[i + 1] == '4' || str[i + 1] == '5' || str[i + 1] == '6' || str[i + 1] == '7' || str[i + 1] == '8' || str[i + 1] == '9')) {
					s1 = 1;
					st = st + str[i];
					i++;
				}
				if (i == 0 && i < str->Length && str[i] == '-' && (str[i + 1] == '0' || str[i + 1] == '1' || str[i + 1] == '2' || str[i + 1] == '3' || 
					str[i + 1] == '4' || str[i + 1] == '5' || str[i + 1] == '6' || str[i + 1] == '7' || str[i + 1] == '8' || str[i + 1] == '9')) {
					s1 = 1;
					st = st + str[i];
					i++;
				}
				if (str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
					str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || 
					str[i] == '8' || str[i] == '9') {
					s1 = 1;
					st = st + str[i];
					i++;
				}
				else {
					s1 = 8;
					st = "";
					i++;
				}
				break;
			case 1:
				if ((str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
					str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')) {
					s1 = 1;
					st = st + str[i];
					i++;
				}
				else if (str[i] == '.') {
					s1 = 2;
					i++;
				}
				else {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < IntVal->Rows->Count; i++)
					{
						if (IntVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							IntVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					
					richTextBox1->AppendText(st);
					if (!flag)
					{
						IntVal->Rows->Add(in.ToString(), st, st);
						in++;
					}
					for (int i = 0; i < IntVal->Rows->Count; i++) {
						if (IntVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							IntVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(10, " + IntVal->Rows[i]->Cells["10"]->Value->ToString() + ")");
						}
					}
					
					s1 = 0;
					st = "";
				}
				break;
			case 2:
				if ((str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
					str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')) {
					s1 = 3;
					st = st + ".";
					st = st + str[i];
					i++;
				}
				else {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < IntVal->Rows->Count; i++)
					{
						if (IntVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							IntVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						IntVal->Rows->Add(in.ToString(), st, st);
						in++;
					}
					for (int i = 0; i < IntVal->Rows->Count; i++) {
						if (IntVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							IntVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(10, " + IntVal->Rows[i]->Cells["10"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				break;
			case 3:
				if ((str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
					str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')) {
					s1 = 3;
					st = st + str[i];
					i++;
				}
				else if (i < str->Length && str[i] == 'e' || str[i] == 'E') {
					st = st + str[i];
					s1 = 4;
					i++;
				}
				else {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < doubleVal->Rows->Count; i++)
					{
						if (doubleVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							doubleVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						doubleVal->Rows->Add(dou.ToString(), st, st);
						dou++;
					}
					for (int i = 0; i < doubleVal->Rows->Count; i++) {
						if (doubleVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							doubleVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(20, " + doubleVal->Rows[i]->Cells["20"]->Value->ToString() + ")");
						}
					}

					s1 = 0;
					st = "";
				}
				break;
			case 4:
				if ((str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
					str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')) {
					
					st = st + str[i];
					s1 = 6;
					i++;
				}
				else if (str[i] == '+' || str[i] == '-') {
					s1 = 5;
					st = st + str[i];
					i++;
				}
				else {
					s1 = 7;
					i++;
				}
				break;
			case 5:
				if ((str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
					str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')) {
					st = st + str[i];
					s1 = 6;
					i++;
				}
				else {
					s1 = 7;
					i++;
				}
				break;
			case 6:
				if ((str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' ||
					str[i] == '4' || str[i] == '5' || str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')) {
					st = st + str[i];
					i++;
					s1 = 6;
				}
				else {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < floatVal->Rows->Count; i++)
					{
						if (floatVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							floatVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						floatVal->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < floatVal->Rows->Count; i++) {
						if (floatVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							floatVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(30, " + floatVal->Rows[i]->Cells["30"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				break;
			case 7:
				MessageBox::Show("Ошибка, переменная типа float была введена неправильно", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				s1 = 0;
				st = "";
				break;
			case 8:
				if (str[i-1] == 's') {
					st = st + str[i-1];
					s1 = 9;
				}
				else if (str[i - 1] == 'c') {
					st = st + str[i - 1];
					s1 = 15;
				}
				else if (str[i - 1] == 'b') {
					st = st + str[i - 1];
					s1 = 19;
				}
				else if (str[i-1] == 'd') {
					st = st + str[i - 1];
					s1 = 24;
				}
				else if (str[i-1] == 'f') {
					st = st + str[i - 1];
					s1 = 31;
				}
				else if (str[i - 1] == 'i') {
					st = st + str[i - 1];
					s1 = 34;
				}
				else if (str[i - 1] == 'n') {
					st = st + str[i - 1];
					s1 = 36;
				}
				else if (str[i - 1] == 'u') {
					st = st + str[i - 1];
					s1 = 45;
				}
				else if (str[i - 1] == 'm') {
					st = st + str[i - 1];
					s1 = 65;
				}
				else {
					s1 = 0;
				}
				break;
			case 9:
				if (str[i] == 'w') {
					st = st + str[i];
					i++;
					s1 = 10;
				}
				else if (str[i] == 't') {
					st = st + str[i];
					i++;
					s1 = 63;
				}
				else {
					s1 = 0;
				}
				break;
			case 10:
				if (str[i] == 'i') {
					st = st + str[i];
					i++;
					s1 = 11;
				}
				else {
					s1 = 0;
				}
				break;
			case 11:
				if (str[i] == 't') {
					st = st + str[i];
					i++;
					s1 = 12;
				}
				else {
					s1 = 0;
				}
				break;
			case 12:
				if (str[i] == 'c') {
					st = st + str[i];
					i++;
					s1 = 13;
				}
				else {
					s1 = 0;
				}
			case 13:
				if (str[i] == 'h') {
					st = st + str[i];
					i++;
					s1 = 14;
				}
				else {
					s1 = 0;
				}
			case 14:
				if (Char::IsWhiteSpace(str[i]) || str[i] == '{') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 15:
				if (str[i] == 'a') {
					st = st + str[i];
					i++;
					s1 = 16;
				}
				else if (str[i] == 'o') {
					st = st + str[i];
					i++;
					s1 = 69;
				}
				else {
					s1 = 0;
				}
				break;
			case 16:
				if (str[i] == 's') {
					st = st + str[i];
					i++;
					s1 = 17;
				}
				else {
					s1 = 0;
				}
				break;
			case 17:
				if (str[i] == 'e') {
					st = st + str[i];
					i++;
					s1 = 18;
				}
				else {
					s1 = 0;
				}
				break;
			case 18:
				if (Char::IsWhiteSpace(str[i])) {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 19:
				if (str[i] == 'r') {
					st = st + str[i];
					i++;
					s1 = 20;
				}
				else {
					s1 = 0;
				}
				break;
			case 20:
				if (str[i] == 'e') {
					st = st + str[i];
					i++;
					s1 = 21;
				}
				else {
					s1 = 0;
				}
				break;
			case 21:
				if (str[i] == 'a') {
					st = st + str[i];
					i++;
					s1 = 22;
				}
				else {
					s1 = 0;
				}
				break;
			case 22:
				if (str[i] == 'k') {
					st = st + str[i];
					i++;
					s1 = 23;
				}
				else {
					s1 = 0;
				}
				break;
			case 23:
				if (Char::IsWhiteSpace(str[i]) || str[i] == ';') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 24:
				if (str[i] == 'e') {
					st = st + str[i];
					i++;
					s1 = 25;
				}
				else {
					s1 = 0;
				}
				break; 
			case 25:
				if (str[i] == 'f') {
					st = st + str[i];
					i++;
					s1 = 26;
				}
				else {
					s1 = 0;
				}
				break;
			case 26:
				if (str[i] == 'a') {
					st = st + str[i];
					i++;
					s1 = 27;
				}
				else {
					s1 = 0;
				}
				break;
			case 27:
				if (str[i] == 'u') {
					st = st + str[i];
					i++;
					s1 = 28;
				}
				else {
					s1 = 0;
				}
				break;
			case 28:
				if (str[i] == 'l') {
					st = st + str[i];
					i++;
					s1 = 29;
				}
				else {
					s1 = 0;
				}
				break;
			case 29:
				if (str[i] == 't') {
					st = st + str[i];
					i++;
					s1 = 30;
				}
				else {
					s1 = 0;
				}
				break;
			case 30:
				if (Char::IsWhiteSpace(str[i]) || str[i] == ';') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 31:
				if (str[i] == 'o') {
					st = st + str[i];
					i++;
					s1 = 32;
				}
				else {
					s1 = 0;
				}
				break;
			case 32:
				if (str[i] == 'r') {
					st = st + str[i];
					i++;
					s1 = 33;
				}
				else {
					s1 = 0;
				}
				break;
			case 33:
				if (Char::IsWhiteSpace(str[i]) || str[i] == '(') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 34:
				if (str[i] == 'f') {
					st = st + str[i];
					i++;
					s1 = 35;
				}
				else if (str[i] == 'n') {
					st = st + str[i];
					i++;
					s1 = 50;
				}
				else if (str[i] == 'o') {
					st = st + str[i];
					i++;
					s1 = 56;
				}
				else {
					s1 = 0;
				}
				break;
			case 35:
				if (Char::IsWhiteSpace(str[i]) || str[i] == '(') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 36:
				if (str[i] == 'a') {
					st = st + str[i];
					i++;
					s1 = 37;
				}
				else {
					s1 = 0;
				}
				break;
			case 37:
				if (str[i] == 'm') {
					st = st + str[i];
					i++;
					s1 = 38;
				}
				else {
					s1 = 0;
				}
				break;
			case 38:
				if (str[i] == 'e') {
					st = st + str[i];
					i++;
					s1 = 39;
				}
				else {
					s1 = 0;
				}
				break;
			case 39:
				if (str[i] == 's') {
					st = st + str[i];
					i++;
					s1 = 40;
				}
				else {
					s1 = 0;
				}
				break;
			case 40:
				if (str[i] == 'p') {
					st = st + str[i];
					i++;
					s1 = 41;
				}
				else {
					s1 = 0;
				}
				break;
			case 41:
				if (str[i] == 'a') {
					st = st + str[i];
					i++;
					s1 = 42;
				}
				else {
					s1 = 0;
				}
				break;
			case 42:
				if (str[i] == 'c') {
					st = st + str[i];
					i++;
					s1 = 43;
				}
				else {
					s1 = 0;
				}
				break;
			case 43:
				if (str[i] == 'e') {
					st = st + str[i];
					i++;
					s1 = 44;
				}
				else {
					s1 = 0;
				}
				break;
			case 44:
				if (Char::IsWhiteSpace(str[i]) || str[i] == '(') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 45:
				if (str[i] == 's') {
					st = st + str[i];
					i++;
					s1 = 46;
				}
				else {
					s1 = 0;
				}
				break;
			case 46:
				if (str[i] == 'i') {
					st = st + str[i];
					i++;
					s1 = 47;
				}
				else {
					s1 = 0;
				}
				break;
			case 47:
				if (str[i] == 'n') {
					st = st + str[i];
					i++;
					s1 = 48;
				}
				else {
					s1 = 0;
				}
				break;
			case 48:
				if (str[i] == 'g') {
					st = st + str[i];
					i++;
					s1 = 49;
				}
				else {
					s1 = 0;
				}
				break;
			case 49:
				if (Char::IsWhiteSpace(str[i])) {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < wordsTab->Rows->Count; i++)
					{
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText(st);
					if (!flag)
					{
						wordsTab->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 50:
				if (str[i] == 'c') {
					st = st + str[i];
					i++;
					s1 = 51;
				}
				else {
					s1 = 0;
				}
				break;
			case 51:
				if (str[i] == 'l') {
					st = st + str[i];
					i++;
					s1 = 52;
				}
				else {
					s1 = 0;
				}
				break;
			case 52:
				if (str[i] == 'u') {
					st = st + str[i];
					i++;
					s1 = 53;
				}
				else {
					s1 = 0;
				}
				break;
			case 53:
				if (str[i] == 'd') {
					st = st + str[i];
					i++;
					s1 = 54;
				}
				else {
					s1 = 0;
				}
				break;
			case 54:
				if (str[i] == 'e') {
					st = st + str[i];
					i++;
					s1 = 55;
				}
				else {
					s1 = 0;
				}
				break;
			case 55:
				if (Char::IsWhiteSpace(str[i])) {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < IdTab->Rows->Count; i++)
					{
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText("id");
					if (!flag)
					{
						IdTab->Rows->Add(fl.ToString(), st, "id");
						fl++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 56:
				if (str[i] == 's') {
					st = st + str[i];
					i++;
					s1 = 57;
				}
				else {
					s1 = 0;
				}
				break;
			case 57:
				if (str[i] == 't') {
					st = st + str[i];
					i++;
					s1 = 58;
				}
				else {
					s1 = 0;
				}
				break;
			case 58:
				if (str[i] == 'r') {
					st = st + str[i];
					i++;
					s1 = 59;
				}
				else {
					s1 = 0;
				}
				break;
			case 59:
				if (str[i] == 'e') {
					st = st + str[i];
					i++;
					s1 = 60;
				}
				else {
					s1 = 0;
				}
				break;
			case 60:
				if (str[i] == 'a') {
					st = st + str[i];
					i++;
					s1 = 61;
				}
				else {
					s1 = 0;
				}
				break;
			case 61:
				if (str[i] == 'm') {
					st = st + str[i];
					i++;
					s1 = 62;
				}
				else {
					s1 = 0;
				}
				break;
			case 62:
				if (Char::IsWhiteSpace(str[i]) || str[i]=='>') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < IdTab->Rows->Count; i++)
					{
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText("id");
					if (!flag)
					{
						IdTab->Rows->Add(fl.ToString(), st, "id");
						fl++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 63:
				if (str[i] == 'd') {
					st = st + str[i];
					i++;
					s1 = 64;
				}
				else {
					s1 = 0;
				}
				break;
			case 64:
				if (Char::IsWhiteSpace(str[i]) || str[i] == ';' || str[i] == ':') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < IdTab->Rows->Count; i++)
					{
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText("id");
					if (!flag)
					{
						IdTab->Rows->Add(fl.ToString(), st, "id");
						fl++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 65:
				if (str[i] == 'a') {
					st = st + str[i];
					i++;
					s1 = 66;
				}
				else {
					s1 = 0;
				}
				break;
			case 66:
				if (str[i] == 'i') {
					st = st + str[i];
					i++;
					s1 = 67;
				}
				else {
					s1 = 0;
				}
				break;
			case 67: 
				if (str[i] == 'n') {
					st = st + str[i];
					i++;
					s1 = 68;
				}
				else {
					s1 = 0;
				}
				break;
			case 68:
				if (Char::IsWhiteSpace(str[i]) || str[i] == '(') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < IdTab->Rows->Count; i++)
					{
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText("id");
					if (!flag)
					{
						IdTab->Rows->Add(fl.ToString(), st, "id");
						fl++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
				break;
			case 69:
				if (str[i] == 'u') {
					st = st + str[i];
					i++;
					s1 = 70;
				}
				else {
					s1 = 0;
				}
				break;
			case 70:
				if (str[i] == 't') {
					st = st + str[i];
					i++;
					s1 = 71;
				}
				else {
					s1 = 0;
				}
				break;
			case 71:
				if (Char::IsWhiteSpace(str[i]) || str[i] == '<') {
					bool flag = false;
					String^ searchValue = st->ToString();

					for (int i = 0; i < IdTab->Rows->Count; i++)
					{
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue))
						{
							flag = true;
							break;
						}
					}
					richTextBox1->AppendText("id");
					if (!flag)
					{
						IdTab->Rows->Add(fl.ToString(), st, "id");
						fl++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s1 = 0;
					st = "";
				}
				else {
					s1 = 0;
				}
			default:
				break;
			}
		}
	}
};
}
