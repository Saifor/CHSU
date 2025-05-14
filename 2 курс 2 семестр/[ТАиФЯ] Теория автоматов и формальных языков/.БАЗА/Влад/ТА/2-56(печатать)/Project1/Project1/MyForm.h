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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->IntVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->floatVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->doubleVal))->BeginInit();
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
			this->button1->Location = System::Drawing::Point(1294, 586);
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1463, 647);
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
		
		String^ str = input->Text + " ";
		int s1 = 0;
		int i = 0;
		int in = 1, dou = 1, fl = 1;
		int len = str->Length;
		String^ st = "";
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
					s1 = 0;
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

					if (!flag)
					{
						IntVal->Rows->Add(in.ToString(), st, st);
						in++;
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

					if (!flag)
					{
						IntVal->Rows->Add(in.ToString(), st, st);
						in++;
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
					if (prev != '.') {
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

						if (!flag)
						{
							doubleVal->Rows->Add(dou.ToString(), st, st);
							dou++;
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

					if (!flag)
					{
						floatVal->Rows->Add(fl.ToString(), st, st);
						fl++;
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
			default:
				break;
			}
		}
	}
};
}
