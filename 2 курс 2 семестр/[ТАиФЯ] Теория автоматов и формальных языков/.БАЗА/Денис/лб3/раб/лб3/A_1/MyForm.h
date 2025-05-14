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

	public:

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	public:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;

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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;



	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(334, 501);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 29);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 475);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(472, 20);
			this->textBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(173, 501);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 29);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Шаг";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 501);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 29);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Заполнить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(473, 353);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(490, 36);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(253, 624);
			this->richTextBox1->TabIndex = 8;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(749, 36);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(253, 624);
			this->richTextBox2->TabIndex = 9;
			this->richTextBox2->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(536, 12);
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
			this->label2->Location = System::Drawing::Point(789, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(177, 21);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Неправильные слова";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(474, 104);
			this->label3->TabIndex = 12;
			this->label3->Text = resources->GetString(L"label3.Text");
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(15, 536);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(469, 116);
			this->richTextBox3->TabIndex = 13;
			this->richTextBox3->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 664);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		int S = 0;
		int a1 = 0, a2 = 0;
		int i = 0;
	void work(wchar_t x) {
		switch (S)
		{
		case 0:
			switch (x) {
			case 'a':
				S = 1;
				richTextBox3->AppendText("(S0,a)->S1");
				break;
			case 'b':
				S = 3;
				richTextBox3->AppendText("(S0,b)->S3");
				break;
			case 'c':
				S = 3;
				richTextBox3->AppendText("(S0,c)->S3");
				break;
			default:
				MessageBox::Show(L"Ошибка", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				button1->Enabled = false;
				button2->Enabled = false;
				return;
				break;
			}
			break;
		case 1:
			switch (x)
			{
			case 'a':
				S = 2;
				richTextBox3->AppendText("(S1,a)->S2");
				break;
			case 'b':
				S = 3;
				richTextBox3->AppendText("(S1,b)->S3");
				break;
			case 'c':
				S = 3;
				richTextBox3->AppendText("(S1,c)->S3");
				break;
			default:
				MessageBox::Show(L"Ошибка", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				button1->Enabled = false;
				button2->Enabled = false;
				return;
				break;
			}
			break;
		case 2:
			switch (x)
			{
			case 'a':
				S = 2;
				richTextBox3->AppendText("(S2,a)->S2");
				break;
			case 'b':
				S = 2;
				richTextBox3->AppendText("(S2,b)->S2");
				break;
			case 'c':
				S = 2;
				richTextBox3->AppendText("(S2,c)->S2");
				break;
			default:
				MessageBox::Show(L"Ошибка", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				button1->Enabled = false;
				button2->Enabled = false;
				return;
				break;
			}
			break;
		case 3:
			switch (x)
			{
			case 'a':
				S = 1;
				richTextBox3->AppendText("(S3,a)->S1");
				break;
			case 'b':
				S = 3;
				richTextBox3->AppendText("(S2,b)->S3");
				break;
			case 'c':
				S = 3;
				richTextBox3->AppendText("(S2,b)->S3");
				break;
			default:
				MessageBox::Show(L"Ошибка", L"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
				button1->Enabled = false;
				button2->Enabled = false;
				return;
				break;
			}
			break;
		}
	}
	void cl()
		{
			richTextBox1->Clear();
			richTextBox2->Clear();
			richTextBox3->Clear();
			textBox1->ReadOnly = false;
			button1->Enabled = true;
			button2->Enabled = true;
			S = 0;
			a1 = 0;
			s = "";
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		cl();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->ReadOnly = true;
	String^ text = textBox1->Text;
	array <String^>^ strw = text->Split(' ');
	for (int i = 0; i < strw->Length; i++) {
		array <wchar_t>^ word = strw[i]->ToCharArray();
		S = 0;
		for (int j = 0; j < word->Length; j++) {
			if (button1->Enabled == true) {
				work(word[j]);
			}
			else {
				S = 0;
				break;
			}
		}
		if (S == 3 || S == 1) {
			richTextBox1->AppendText(strw[i] + "\n");
		}
		else if (button1->Enabled == true){
			richTextBox2->AppendText(strw[i] + "\n");
		}
		if (i + 1 != strw->Length) {
			richTextBox3->AppendText("\n");
		}
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->ReadOnly = true;
	String^ text = textBox1->Text;
	array <String^>^ strw = text->Split(' ');
	if(a1 < strw->Length){
		array <wchar_t>^ word = strw[a1]->ToCharArray();
		if (a2 < word->Length) {
			work(word[a2]);
			a2++;
		}
		else {
			if (S == 3 || S == 1) {
				richTextBox1->AppendText(strw[a1] + "\n");
				MessageBox::Show(L"Правильное слово", L"Правильно", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else {
				richTextBox2->AppendText(strw[a1] + "\n");
				MessageBox::Show(L"Неправльное слово", L"Непрвильно", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			if (a1 + 1 != strw->Length) {
				richTextBox3->AppendText("\n");
			}
			a1++;
			a2 = 0;
			S = 0;
		}
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	cl();
}
};
}
