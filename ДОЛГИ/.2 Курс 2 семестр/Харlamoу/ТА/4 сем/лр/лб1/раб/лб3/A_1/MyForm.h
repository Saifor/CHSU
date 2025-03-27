#pragma once

namespace A1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;


	public:
	String^ s;
	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(267, 71);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 29);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(267, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 29);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(8, 36);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(253, 554);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(428, 36);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(253, 554);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(475, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 21);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Правильные слова";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(46, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 21);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Неправильные слова";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(267, 103);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 21);
			this->label3->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(689, 598);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	public:
		int S = 0, a = 0;
		int tmp;
	void work() {
		String^ tmpcd = richTextBox1->Text;
		for (int i = 0; i < richTextBox1->Text->Length; i++) { 
			switch (S){
			case 0:
				switch (richTextBox1->Text[i]) {
				case '/':
					S = 2;
					break;
				case '*':
					S = 4;
					break;
				case ' ': // пробел
					S = 1;
					break;
				case '\t': // табуляция
					tmpcd = tmpcd->Remove(i - a, 1);
					a += 1;
					break;
				}
				break;
			case 1:
				switch (richTextBox1->Text[i]) {
				case ' ': // многократный пробел
					tmpcd = tmpcd->Remove(i - a, 1);
					a += 1;
					break;
				case '/':
					S = 2;
					break;
				default: // сброс
					S = 0;
					break;
				}
				break;
			case 2:
				switch (richTextBox1->Text[i]) {
				case '/': // однострочный
					tmp = i - 1;
					S = 3;
					break;
				case '*': // начало многострочный
					tmp = i - 1;
					S = 4;
					break;
				default: // сброс
					S = 0;
					break;
				}
				break;
			case 3:
				switch (richTextBox1->Text[i]) {
				case '\n': // конец однострочный
					tmpcd = tmpcd->Remove(tmp - a, i - tmp);
					a += i - tmp;
					S = 0;
					break;
				}
				break;
			case 4:
				switch (richTextBox1->Text[i]) {
				case '*':
					S = 5;
					break;
				}
				break;
			case 5:
				switch (richTextBox1->Text[i]) {
				case '/': // конец многострочный
					tmpcd = tmpcd->Remove(tmp - a, i - tmp + 2);
					a += i - tmp + 2;
					S = 0;
					break;
				default: // сброс
					S = 4;
					break;
				}
				break;
			}
		}
		if (S == 4) {
			tmpcd = tmpcd->Remove(tmp - a, richTextBox1->Text->Length - tmp);
		}
		for (int i = 1;;) {
			richTextBox2->Text = tmpcd;
		}
	}
	void cl()
		{
			richTextBox1->Clear();
			richTextBox2->Clear();
			S = 0;
			a = 0;
			label3->Text = "";
			button1->Enabled = true;
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		work();
		button1->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		cl();
	}
};
}
