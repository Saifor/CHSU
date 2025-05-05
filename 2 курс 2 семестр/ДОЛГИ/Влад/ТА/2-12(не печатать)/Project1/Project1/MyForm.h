#pragma once

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
			this->button1->Location = System::Drawing::Point(1044, 586);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 49);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Обработать код";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1213, 647);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->output);
			this->Controls->Add(this->input);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
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
	}
};
}
