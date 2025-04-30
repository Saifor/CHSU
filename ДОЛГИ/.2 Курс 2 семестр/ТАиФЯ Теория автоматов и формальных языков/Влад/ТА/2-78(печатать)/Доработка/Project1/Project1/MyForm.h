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
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridView^ IdTab;
	private: System::Windows::Forms::DataGridView^ wordsTab;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;

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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->IdTab = (gcnew System::Windows::Forms::DataGridView());
			this->wordsTab = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doubleVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IdTab))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wordsTab))->BeginInit();
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
			this->label2->Size = System::Drawing::Size(253, 31);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Обработанный код";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1294, 902);
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(891, 348);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(181, 25);
			this->label9->TabIndex = 23;
			this->label9->Text = L"Идентификаторы";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(646, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(68, 25);
			this->label8->TabIndex = 22;
			this->label8->Text = L"Слова";
			// 
			// IdTab
			// 
			this->IdTab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->IdTab->Location = System::Drawing::Point(895, 376);
			this->IdTab->Name = L"IdTab";
			this->IdTab->Size = System::Drawing::Size(240, 196);
			this->IdTab->TabIndex = 21;
			// 
			// wordsTab
			// 
			this->wordsTab->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->wordsTab->Location = System::Drawing::Point(651, 376);
			this->wordsTab->Name = L"wordsTab";
			this->wordsTab->Size = System::Drawing::Size(240, 196);
			this->wordsTab->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(417, 695);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(163, 25);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Дескрипторный";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(19, 695);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 25);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Псевдокод";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(417, 723);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(393, 204);
			this->richTextBox2->TabIndex = 25;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(18, 723);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(393, 204);
			this->richTextBox1->TabIndex = 24;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1463, 963);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->IdTab);
			this->Controls->Add(this->wordsTab);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IdTab))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->wordsTab))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Очистим поле для обратного кода
		output->Clear();
		// Получим текст из поля записи
		String^ text = input->Text;
		text = text + " ";
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
		s = 0;
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
		richTextBox1->Clear();
		richTextBox2->Clear();
		prev = NULL;
		int code = 0;
		counter = 1;
		int in = 1, dou = 1, fl = 1;
		int w = 1, id = 1;
		String^ st = "";
		for each (Char c in text) {
			switch (s)
			{
			case 0:// проверка на число
				if (c == '-') {
					s = 1;
					st = st + c;
					prev = c;
				}
				else if ((c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
					|| c == '7' || c == '8' || c == '9') && (Char::IsWhiteSpace(prev) || prev == NULL)) {
					s = 1;
					prev = c;
					st = st + c;
				}
				else if (c == '/') {
					prev = c;
					s = 8;
				}
				else if (c == 's') {
					s = 2;
					st = st + c;
					prev = c;
				}
				else if (c == 'c') {
					s = 18;
					st = st + c;
					prev = c;
				}
				else if (c == 'b') {
					s = 22;
					st = st + c;
					prev = c;
				}
				else if (c == 'i') {
					s = 27;
					st = st + c;
					prev = c;
				}
				else if (c == 'f') {
					s = 29;
					st = st + c;
					prev = c;
				}
				else if (c == 'd') {
					s = 32;
					st = st + c;
					prev = c;
				}
				else if (c == 'e') {
					s = 39;
					st = st + c;
					prev = c;
				}
				else if (c == 'r') {
					s = 43;
					st = st + c;
					prev = c;
				}
				else if (c == 'u') {
					s = 49;
					st = st + c;
					prev = c;
				}
				else if (c == 'n') {
					s = 54;
					st = st + c;
					prev = c;
				}
				else if (c == 'v') {
					s = 63;
					st = st + c;
					prev = c;
				}
				else if (c == 'm') {
					s = 97;
					st = st + c;
					prev = c;
				}
				else if (c == '"') {
					s = 109;
					prev = c;
				}
				else if (c == '\'') {
					s = 113;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter += 1;
					}
					s = 0;
					prev = c;
				}
				break;
			case 1:
				if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
					|| c == '7' || c == '8' || c == '9') {
					st = st + c;
					prev = c; 
					s = 1;
				}
				else if (c == '.') {
					st = st + c;
					s = 3;
					prev = c;
				}
				else if (Char::IsWhiteSpace(c) || c == ',' || c == ';' || c == ':') {
					if (c == '\n') {
						counter += 1;
					}
					bool flag = false;
					String^ searchValue = st;
					for (int i = 0; i < IntVal->Rows->Count; i++) {
						if (IntVal->Rows[i]->Cells["Number"]->Value != nullptr && IntVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							flag = true;
							break;
						}
					}
					if (!flag) {
						IntVal->Rows->Add(in.ToString(), st, st);
						in++;
					}
					richTextBox1->AppendText(st + " ");
					for (int i = 0; i < IntVal->Rows->Count; i++) {
						if (IntVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							IntVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(10, " + IntVal->Rows[i]->Cells["10"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					st = "";
					code = 0;
					s = 7;
					prev = c;
				}
				break;
			case 2:
				if (c == 'w') {
					prev = c;
					s = 13;
					st = st + c;
				}
				else if (c == 't') {
					prev = c;
					s = 79;
					st = st + c;
				}
				else if (c == 'y') {
					prev = c;
					s = 115;
					st = st + c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 3:
				if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
					|| c == '7' || c == '8' || c == '9') {
					st = st + c;
					s = 3;
					prev = c;
				}
				else if (Char::IsWhiteSpace(c) || c == ',' || c == ';') {
					if (prev != '.') {
						bool flag = false;
						String^ searchValue = st;
						for (int i = 0; i < doubleVal->Rows->Count; i++) {
							if (doubleVal->Rows[i]->Cells["Number"]->Value != nullptr && doubleVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
								flag = true;
								break;
							}
						}
						if (!flag) {
							doubleVal->Rows->Add(dou.ToString(), st, st);
							dou++;
						}
						richTextBox1->AppendText(st + " ");
						for (int i = 0; i < doubleVal->Rows->Count; i++) {
							if (doubleVal->Rows[i]->Cells["Number"]->Value != nullptr &&
								doubleVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
								richTextBox2->AppendText("(20, " + doubleVal->Rows[i]->Cells["20"]->Value->ToString() + ")");
							}
						}
					}
					if (c == '\n') {
						counter += 1;
					}
					prev = c;
					s = 0;
					st = "";
				}
				else if ((c == 'e' || c == 'E') && (prev == '0' || prev == '1' || prev == '2' || prev == '3' || prev == '4' || prev == '5' || prev == '6'
					|| prev == '7' || prev == '8' || prev == '9')) {
					st = st + c;
					s = 4;
					prev = c;
				}
				else {
					st = "";
					code = 1;
					s = 7;
					prev = c;
				}
				break;
			case 4:
				if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
					|| c == '7' || c == '8' || c == '9') {
					prev = c;
					s = 6;
					st = st + c;
				}
				else if (c == '+' || c == '-') {
					s = 5;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter += 1;
					}
					st = "";
					code = 1;
					s = 7;
					prev = c;
				}
				break;
			case 5:
				if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
					|| c == '7' || c == '8' || c == '9') {
					s = 6;
					prev = c;
					st = st + c;
				}
				else {
					if (c == '\n') {
						counter += 1;
					}
					st = "";
					code = 2;
					prev = c;
					s = 7;
				}
				break;
			case 6:
				if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6'
					|| c == '7' || c == '8' || c == '9') {
					st = st + c;
					s = 6;
					prev = c;
				}
				else if (Char::IsWhiteSpace(c) || c == ',' || c == ';') {
					if (c == '\n') {
						counter += 1;
					}
					bool flag = false;
					String^ searchValue = st;
					for (int i = 0; i < floatVal->Rows->Count; i++) {
						if (floatVal->Rows[i]->Cells["Number"]->Value != nullptr && floatVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							flag = true;
							break;
						}
					}
					if (!flag) {
						floatVal->Rows->Add(fl.ToString(), st, st);
						fl++;
					}
					richTextBox1->AppendText(st + " ");
					for (int i = 0; i < floatVal->Rows->Count; i++) {
						if (floatVal->Rows[i]->Cells["Number"]->Value != nullptr &&
							floatVal->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(30, " + floatVal->Rows[i]->Cells["30"]->Value->ToString() + ")");
						}
					}

					prev = c;
					s = 0;
					st = "";
				}
				else {
					st = "";
					code = 2;
					prev = c;
					s = 7;
				}
				break;
			case 7:
				if (code == 0) {
					MessageBox::Show("Проверьте строку " + counter + " возможно там ошибка связанная с типом int", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					s = 0;
					if (c == '\n') {
						counter += 1;
					}
					prev = c;
				}
				if (code == 1) {
					MessageBox::Show("Проверьте строку " + counter + " возможно там ошибка связанная с типом double/float", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					s = 0;
					if (c == '\n') {
						counter += 1;
					}
					prev = c;
				}
				if (code == 2) {
					MessageBox::Show("Проверьте строку " + counter + " возможно там ошибка связанная с типом float", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
					s = 0;
					if (c == '\n') {
						counter += 1;
					}
					prev = c;
				}
				break;
			case 8:
				if (c == '/') {
					s = 9;
				}
				else if (c == '*') {
					s = 10;
				}
				break;
			case 9:
				if (c == '\n') {
					prev = c;
					s = 0;
				}
				else {
					s = 9;
				}
				break;
			case 10:
				if (c == '*') {
					s = 11;
				}
				else {
					s = 10;
				}
				break;
			case 11:
				if (c == '/') {
					//prev = ' ';
					s = 12;
				}
				else {
					s = 10;
				}
				break;
			case 12:
				if (Char::IsWhiteSpace(c)) {
					s = 0;
					prev = c;
				}
				else {
					s = 0;
					prev = c;
				}
				break;
			case 13:
				if (c == 'i') {
					s = 14;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 14:
				if (c == 't') {
					s = 15;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 15:
				if (c == 'c') {
					s = 16;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 16:
				if (c == 'h') {
					s = 17;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 17:
				if (Char::IsWhiteSpace(c) || c == '(') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
					st = "";
				}
				break;
			case 18:
				if (c == 'a') {
					s = 19;
					st = st + c;
					prev = c;
				}
				else if (c == 'o') {
					s = 101;
					st = st + c;
					prev = c;
				}
				else if (c == 'i') {
					s = 104;
					st = st + c;
					prev = c;
				}
				else if (c == 'h') {
					s = 110;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 19:
				if (c == 's') {
					s = 20;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 20:
				if (c == 'e') {
					s = 21;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 21:
				if (Char::IsWhiteSpace(c) || c == ':') {
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					prev = c;
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 22:
				if (c == 'r') {
					s = 23;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 23:
				if (c == 'e') {
					s = 24;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 24:
				if (c == 'a') {
					s = 25;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 25:
				if (c == 'k') {
					s = 26;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 26:
				if (Char::IsWhiteSpace(c) || c == ';') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";	
				}
				else {
					s = 0;
				}
				break;
			case 27:
				if (c == 'f') {
					s = 28;
					st = st + c;
					prev = c;
				}
				else if (c == 'n') {
					s = 67;
					st = st + c;
					prev = c;
				}
				else if (c == 'o') {
					s = 89;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 28:
				if (Char::IsWhiteSpace(c) || c == '(') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 29:
				if (c == 'o') {
					s = 30;
					st = st + c;
					prev = c;
				}
				else if (c == 'l') {
					s = 69;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 30:
				if (c == 'r') {
					s = 31;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 31:
				if (Char::IsWhiteSpace(c) || c == '(') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 32:
				if (c == 'e') {
					s = 33;
					st = st + c;
					prev = c;
				}
				else if (c == 'o') {
					s = 74;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 33:
				if (c == 'f') {
					s = 34;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 34:
				if (c == 'a') {
					s = 35;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 35:
				if (c == 'u') {
					s = 36;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 36:
				if (c == 'l') {
					s = 37;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 37:
				if (c == 't') {
					s = 38;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 38:
				if (Char::IsWhiteSpace(c) || c == ':') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 39:
				if (c == 'l') {
					s = 40;
					st = st + c;
					prev = c;
				}
				else if (c == 'n') {
					s = 106;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 40:
				if (c == 's') {
					s = 41;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 41:
				if (c == 'e') {
					s = 42;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 42:
				if (Char::IsWhiteSpace(c) || c == '{') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 43:
				if (c == 'e') {
					s = 44;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 44:
				if (c == 't') {
					s = 45;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";	
					prev = c;
				}
				break;
			case 45:
				if (c == 'u') {
					s = 46;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 46:
				if (c == 'r') {
					s = 47;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 47:
				if (c == 'n') {
					s = 48;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 48:
				if (Char::IsWhiteSpace(c) || c == ';') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 49:
				if (c == 's') {
					s = 50;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 50:
				if (c == 'i') {
					s = 51;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 51:
				if (c == 'n') {
					s = 52;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 52:
				if (c == 'g') {
					s = 53;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 53:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 54:
				if (c == 'a') {
					s = 55;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 55:
				if (c == 'm') {
					s = 56;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 56:
				if (c == 'e') {
					s = 57;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 57:
				if (c == 's') {
					s = 58;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 58:
				if (c == 'p') {
					s = 59;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 59:
				if (c == 'a') {
					s = 60;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 60:
				if (c == 'c') {
					s = 61;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 61:
				if (c == 'e') {
					s = 62;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 62:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 63:
				if (c == 'o') {
					s = 64;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 64:
				if (c == 'i') {
					s = 65;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 65:
				if (c == 'd') {
					s = 66;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 66:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 67:
				if (c == 't') {
					s = 68;
					st = st + c;
					prev = c;
				}
				else if (c == 'c') {
					s = 84;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 68:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 73;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 69:
				if (c == 'o') {
					s = 70;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 70:
				if (c == 'a') {
					s = 71;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 71:
				if (c == 't') {
					s = 72;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 72:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 73;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 73:
				if (!Char::IsWhiteSpace(c) && c != ';' && c != '=') {
					st = st + c;
					s = 73;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 74:
				if (c == 'u') {
					s = 75;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 75:
				if (c == 'b') {
					s = 76;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 76:
				if (c == 'l') {
					s = 77;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 77:
				if (c == 'e') {
					s = 78;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 78:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 73;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 79:
				if (c == 'r') {
					s = 80;
					st = st + c;
					prev = c;
				}
				else if (c == 'd') {
					s = 96;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 80:
				if (c == 'i') {
					s = 81;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 81:
				if (c == 'n') {
					s = 82;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 82:
				if (c == 'g') {
					s = 83;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 83:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 73;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 84:
				if (c == 'l') {
					s = 85;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 85:
				if (c == 'u') {
					s = 86;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 86:
				if (c == 'd') {
					s = 87;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 87:
				if (c == 'e') {
					s = 88;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 88:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 89:
				if (c == 's') {
					s = 90;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 90:
				if (c == 't') {
					s = 91;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 91:
				if (c == 'r') {
					s = 92;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 92:
				if (c == 'e') {
					s = 93;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 93:
				if (c == 'a') {
					s = 94;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 94:
				if (c == 'm') {
					s = 95;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 95:
				if (Char::IsWhiteSpace(c) || c == '>') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 96:
				if (Char::IsWhiteSpace(c) || c == ';') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 97:
				if (c == 'a') {
					s = 98;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 98:
				if (c == 'i') {
					s = 99;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 99:
				if (c == 'n') {
					s = 100;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 100:
				if (Char::IsWhiteSpace(c) || c == '(') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 101:
				if (c == 'u') {
					s = 102;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 102:
				if (c == 't') {
					s = 103;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 103:
				if (Char::IsWhiteSpace(c) || c == '<') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 104:
				if (c == 'n') {
					s = 105;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 105:
				if (Char::IsWhiteSpace(c) || c == '>') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 106:
				if (c == 'd') {
					s = 107;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 107:
				if (c == 'l') {
					s = 108;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 108:
				if (Char::IsWhiteSpace(c) || c == ';') {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 109:
				if (c != '"') {
					st = st + c;
					prev = c;
					s = 109;
				}
				else {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 110:
				if (c == 'a') {
					s = 111;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 111:
				if (c == 'r') {
					s = 112;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 112:
				if (Char::IsWhiteSpace(c)) {
					if (c == '\n') {
						counter += 1;
					}
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
					richTextBox1->AppendText(st + " ");
					if (!flag)
					{
						wordsTab->Rows->Add(w.ToString(), st, st);
						w++;
					}
					for (int i = 0; i < wordsTab->Rows->Count; i++) {
						if (wordsTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							wordsTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(40, " + wordsTab->Rows[i]->Cells["40"]->Value->ToString() + ")");
						}
					}
					s = 73;
					st = "";
				}
				else {
					s = 0;
				}
				break;
			case 113:
				if (c != '\'') {
					s = 114;
					st = st + c;
					prev = c;
				}
				else {
					s = 114;
					st = "";
					prev = c;
				}
				break;
			case 114:
				if (c == '\'') {
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 115:
				if (c == 's') {
					s = 116;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 116:
				if (c == 't') {
					s = 117;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 117:
				if (c == 'e') {
					s = 118;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 118:
				if (c == 'm') {
					s = 119;
					st = st + c;
					prev = c;
				}
				else {
					if (c == '\n') {
						counter++;
					}
					s = 0;
					st = "";
					prev = c;
				}
				break;
			case 119:
				if (Char::IsWhiteSpace(c) || c == '(') {
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
					richTextBox1->AppendText("id ");
					if (!flag)
					{
						IdTab->Rows->Add(id.ToString(), st, "id");
						id++;
					}
					for (int i = 0; i < IdTab->Rows->Count; i++) {
						if (IdTab->Rows[i]->Cells["Number"]->Value != nullptr &&
							IdTab->Rows[i]->Cells["Number"]->Value->ToString()->Equals(searchValue)) {
							richTextBox2->AppendText("(50, " + IdTab->Rows[i]->Cells["50"]->Value->ToString() + ")");
						}
					}
					s = 0;
					st = "";
					prev = c;
				}
				else {
					s = 0;
					st = "";
					prev = c;
				}
				break;
			default:
				break;
			}
		}
	}
};
}
