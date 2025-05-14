#pragma once
//#include "C:/Program Files (x86)/Reference Assemblies/Microsoft/Framework/.NETFramework/v4.7.2/mscorlib.dll"

namespace Lab31 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button2;
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(243, 237);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(261, 12);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(243, 237);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(160, 255);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Load file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(616, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(240, 150);
			this->dataGridView1->TabIndex = 3;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(261, 255);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(95, 40);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Go";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(963, 511);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
		   private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			   String^ s = textBox2->Text;
			   textBox1->Text = "";

			   int Number = 1;
			   textBox1->Text += "1\t";
			   int S = 0, i = 0, len = s->Length;
			   bool perehod = 0;

			   while (i < len)
			   {
				   switch (S)
				   {
				   case 0:
					   if (s[i] == ' ') {
						   textBox1->Text += s[i];
						   S = 1;
					   }
					   else if (s[i] == '\n') {
						   if (s[i + 1] == '\n') {
							   i++;
							   S = 6;
						   }
						   else {
							   i++;
							   textBox1->Text += "\r\n" + ++Number + "\t";
							   S = 6;
						   }

					   }
					   else if (s[i] == '\t')S = 6;
					   else if (s[i] == '/') S = 2;
					   else {
						   textBox1->Text += s[i];
						   S = 0;
					   }
					   break;

				   case 1:
					   if (s[i] == ' ') {
						   textBox1->Text += s[i];
						   S = 1;
					   }
					   else if (s[i] == '\n') {
						   i++;
						   textBox1->Text += "\r\n" + ++Number + "\t";
						   S = 6;
					   }
					   else if (s[i] == '/') S = 2;
					   else {
						   textBox1->Text += s[i];
						   S = 0;
					   }
					   break;
				   case 2:
					   if (s[i] == '/') S = 3;
					   else if (s[i] == '\n') {
						   i++;
						   textBox1->Text += "\r\n" + ++Number + "\t";;
						   S = 0;
					   }
					   //else if (s[i] == '\t') S = 2;
					   else if (s[i] == '*') S = 4;
					   else {
						   textBox1->Text += s[i];
						   S = 0;
					   }
					   break;
				   case 6:
					   if (s[i] == '\n') {
						   i++;
						   S = 0;
					   }
					   else if (s[i] == '\t') S = 0;
					   else if (s[i] == '/') S = 2;
					   else if (s[i] == ' ') S = 1;
					   else {
						   textBox1->Text += s[i];
						   S = 0;
					   }
					   break;
				   case 3:
					   if (s[i] == '\n') {
						   i++;
						   textBox1->Text += "\r\n" + ++Number + "\t";
						   S = 0;
					   }
					   else {
						   i++;
						   //textBox1->Text += "\r\n" + ++Number + "\t";
						   S = 3;
					   }
					   break;
				   case 4:
					   if (s[i] == '*') S = 5;

					   break;
				   case 5:
					   if (s[i - 1] == '*' && s[i] == '/') {
						   i++;
						   textBox1->Text += "\r\n" + ++Number + "\t";
						   S = 0;
					   }
					   else S = 4;
					   break;

				   }

				   i++;

			   }
		   };
	};



};

