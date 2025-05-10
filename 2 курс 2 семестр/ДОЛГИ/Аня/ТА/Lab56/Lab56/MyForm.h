#pragma once
namespace Lab56 {

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
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridView^ dataGridView6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(219, 48);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(181, 270);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 48);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox2->Size = System::Drawing::Size(181, 270);
			this->textBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Load file";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(219, 1);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 41);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Go";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 481);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(388, 150);
			this->dataGridView1->TabIndex = 5;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"20";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Идентификаторы";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Псевдокод";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 80;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 325);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(388, 150);
			this->dataGridView2->TabIndex = 6;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"10";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 50;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Лексемы";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Псевдокод";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 80;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column7,
					this->Column8, this->Column9
			});
			this->dataGridView3->Location = System::Drawing::Point(433, 12);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(278, 150);
			this->dataGridView3->TabIndex = 7;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"30";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 50;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Константы";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 80;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Вид констант";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 80;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Location = System::Drawing::Point(433, 168);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->Size = System::Drawing::Size(278, 150);
			this->dataGridView4->TabIndex = 8;
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Location = System::Drawing::Point(433, 325);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->Size = System::Drawing::Size(278, 150);
			this->dataGridView5->TabIndex = 9;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Location = System::Drawing::Point(433, 481);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->Size = System::Drawing::Size(278, 150);
			this->dataGridView6->TabIndex = 10;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1205, 650);
			this->Controls->Add(this->dataGridView6);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void filtering(int S, String^ s, int Number, int len) {
		for (int i = 0; i < len; i++)
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
				else if (s[i] == '\t') S = 2;
				else if (s[i] == '*') S = 4;
				else {
					textBox1->Text += s[i];
					S = 0;
				}
				break;
			case 6:
				if (s[i] == '\n') {
					//i++;
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
					//i++;
					textBox1->Text += "\r\n" + ++Number + "\t";
					S = 0;
				}
				else S = 4;
				break;

			}

		}
	}
	/*private: void add_id(String^ word, )*/
	private:bool search_id(String^ variable, int row) {
			bool check = false;
			for (size_t i = 0; i <row; i++)
				if (Convert::ToString(dataGridView1->Rows[i]->Cells[1]->Value) == variable)
					check = true;
			return check;
	}
	private: bool search_lexeme(String^ variable, int row) {
			   bool check = false;
			   for (size_t i = 0; i < row; i++) {
				   if (Convert::ToString(dataGridView2->Rows[i]->Cells[1]->Value) == variable)
					   check = true;
			   }
			   return check;
	}

	private: bool search_const(String^ variable, int row) {
		bool check = false;
		for (size_t i = 0; i < row; i++) {
			if (Convert::ToString(dataGridView3->Rows[i]->Cells[1]->Value) == variable)
				check = true;
		}
		return check;
	}
	private: void add_const(String^ count, int row) {
		String^ text = "";
		if (count->Contains(".")||count->Contains(","))text = "Вещественная константа";
		if (count->Contains("e") || count->Contains("E")) text = "Вещественная константа с плавающей точкой";
		if(!(count->Contains(".") || count->Contains(",")|| count->Contains("e") || count->Contains("E"))) text = "Целая константа";
		dataGridView3->Rows[row - 1]->Cells[0]->Value = Convert::ToString(row);
		dataGridView3->Rows[row - 1]->Cells[1]->Value = count;
		dataGridView3->Rows[row - 1]->Cells[2]->Value = text;
		dataGridView3->RowCount = ++row + 1;
	}
	private:void add_id(String^ variable, int row) {
		dataGridView1->Rows[row - 1]->Cells[0]->Value = Convert::ToString(row);
		dataGridView1->Rows[row - 1]->Cells[1]->Value = variable;
		dataGridView1->Rows[row - 1]->Cells[2]->Value = "id" + Convert::ToString(row);
		dataGridView1->RowCount = ++  row + 1;
	}
	private: void add(String^ word, int row) {
		String^ text = "";
		if (word == "int") text = "Целочисленный тип данных";
		else if (word = "int*") text = "Переменная типа указатель на int";
		//else if (word == "string")text = "строка";
		//else if (word == "struct")text = "структура";
		//else if (word == "namespace")text = "пространство имён";
		//else if (word == "template")text = "шаблон";
		//else if (word == "true")text = "истина";
		//else if (word == "false")text = "ложь";
		//else if (word == "if")text = "если";
		//else if (word == "else")text = "иначе";
		//else if (word == "bool")text = "логическая";
		//else if (word == "using")text = "используй";
		else text = word;
		dataGridView2->Rows[row - 1]->Cells[0]->Value = Convert::ToString(row);
		dataGridView2->Rows[row - 1]->Cells[1]->Value = word;
		dataGridView2->Rows[row - 1]->Cells[2]->Value = text;
		dataGridView2->RowCount = ++  row + 1;
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

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int row_lexeme = 1, row_id = 1, row_const=1;
		dataGridView2->RowCount = row_lexeme + 1; dataGridView2->ColumnCount = 3;
		dataGridView2->Rows[0]->Cells[0]->Value = ""; dataGridView2->Rows[0]->Cells[1]->Value = ""; dataGridView2->Rows[0]->Cells[2]->Value = "";
		dataGridView1->RowCount = row_id + 1; dataGridView1->ColumnCount = 3;
		dataGridView1->Rows[0]->Cells[0]->Value = ""; dataGridView1->Rows[0]->Cells[1]->Value = ""; dataGridView1->Rows[0]->Cells[2]->Value = "";
		dataGridView3->RowCount = row_id + 1; dataGridView1->ColumnCount = 3;
		dataGridView3->Rows[0]->Cells[0]->Value = ""; dataGridView1->Rows[0]->Cells[1]->Value = ""; dataGridView1->Rows[0]->Cells[2]->Value = "";
		String^ s = textBox2->Text;
		textBox1->Text = "";

		int Number = 1;
		textBox1->Text += "1\t";
		int S = 0, i = 0, len = s->Length;
		bool perehod = 0;
		filtering(S, s, Number, len);
		
		S = 0;
		s = textBox1->Text;
		len = s->Length;
		String^ word = "";
		String^ count = "";
		for (int i = 0; i < len; i++) {
			switch (S) {
			case 0: {
				word = "";
				count = "";
				if (s[i] == 'i') {
					S = 2;
					word += s[i];
				}
				else if (s[i]>= '1' && s[i]<='9') {
					S = 1;
					count += s[i];
				}
				else if (s[i] == '0') {
					S = 187;
					count += s[i];
				}
				else if (s[i] == '.') {
					S = 9;
					count += s[i];
				}
				//else if (s[i] == '_') S = 190;
				else S = 0;
				break;
			}
			//БЛОК КОНСТАНТ
			case 1: 
				if (s[i] >= '0' && s[i] <= '9') {
					S = 1;
					count += s[i];
				}
				else if (s[i] == ',' || s[i] == '.') {
					S = 9;
					count += s[i];
				}
				else if (s[i] == 'E' || s[i] == 'e') {
					S = 184;
					count += s[i];
				}
				else if (s[i] == ';' || s[i] == ' ' || s[i] == ')') S = 191;
				else S = 0;
				break;
			case 9:
				if (s[i] >= '0' && s[i] <= '9') {
					S = 27;
					count += s[i];
				}
				else if (s[i] == ';' || s[i] == ' ' || s[i] == ')') S = 191;
				else S = 0;
				break;
			case 27:
				if (s[i] >= '0' && s[i] <= '9') {
					S = 27;
					count += s[i];
				}
				else if(s[i] == 'E' || s[i] == 'e') {
					S = 184;
					count += s[i];
				}
				else if (s[i] == ';' || s[i] == ' ' || s[i] == ')') S = 191;
				else S = 0;
				break;
			case 184:
				if (s[i] >= '0' && s[i] <= '9') {
					S = 184;
					count += s[i];
				}
				else if (s[i] == '+' || s[i] == '-') {
					S = 185;
					count += s[i];
				}
				else if (s[i] == ';' || s[i] == ' ' || s[i] == ')') S = 191;
				else S = 0;
				break;
			case 185:
				if (s[i] >= '0' && s[i] <= '9') {
					S = 186;
					count += s[i];
				}
				else S = 0;
				break;
			case 186:
				if (s[i] >= '0' && s[i] <= '9') {
					S = 186;
					count += s[i];
				}
				else if (s[i] == ';' || s[i] == ' ' || s[i] == ')') S = 191;
				else S = 0;
				break;
			case 187:
				if (s[i] == ',' || s[i] == '.') {
					S = 9;
					count += s[i];
				}
				else if (s[i] == 'E' || s[i] == 'e') {
					S = 184;
					count += s[i];
				}
				else if (s[i] == ';' || s[i] == ' ' || s[i] == ')') S = 191;
				else S = 0;
				break;
			case 191:
				if (!search_const(count, row_const)) {
					add_const(count, row_const);
					row_const++;
				}
				count = "";
				S = 0;
				break;
			//Ключевые слова
			case 2:
				if (s[i] == 'n') {
					S = 3;
					word += s[i];
				}
				else {
					S = 0;
				}
				break;
			case 3:
				if (s[i] == 't') {
					if (s[i + 1] == '*') {
						S = 183;
						word += s[i];
						word += s[i + 1];
						i++;
					}
					else {
						S = 183;
						word += s[i];
					}
				}
				else {
					S = 0;
				}
				break;
			case 183:
				if (!search_lexeme(word, row_lexeme)) {
					add(word, row_lexeme);
					row_lexeme++;
				}
				
				if (word == "int" || word == "int*" || word == "double" || word == "float" || word == "void") {
					S = 190;
				}
				else {
					word = "";
					S = 0;
				}
				break;
			case 190: {
				word = "";
				while ((Char::IsLetterOrDigit(s[i]) || s[i] == '_') && (s[i] != ' ' || s[i] != ';')) {
					word += s[i];
					i++;
					S = 190;
				}
				if (!search_id(word, row_id)) {
					add_id(word, row_id);
					row_id++;
				}
				word = "";
				S = 0;
				break; }
			}
			dataGridView2->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
			dataGridView2->AutoResizeColumns();
			dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
			dataGridView1->AutoResizeColumns();
			dataGridView3->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
			dataGridView3->AutoResizeColumns();
		}
		

	}
};
}
