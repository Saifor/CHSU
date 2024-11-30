#pragma once
#include <string>
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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;

	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::DataGridView^ dataGridView2;



	private: System::Windows::Forms::DataGridView^ dataGridView3;



	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView5;






	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::RichTextBox^ richTextBox6;
	private: System::Windows::Forms::RichTextBox^ richTextBox7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	protected:
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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox6 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox7 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->richTextBox1->Location = System::Drawing::Point(10, 28);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(190, 234);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->richTextBox2->Location = System::Drawing::Point(216, 28);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(232, 234);
			this->richTextBox2->TabIndex = 1;
			this->richTextBox2->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(238, 275);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(65, 28);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(11, 309);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Начать обработку текста";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(235, 321);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Кол-во строк кон";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(117, 310);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 35);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Очистить поля";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(117, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 35);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Запустить анализ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(10, 369);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(179, 174);
			this->dataGridView1->TabIndex = 8;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3
			});
			this->dataGridView2->Location = System::Drawing::Point(400, 369);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(187, 174);
			this->dataGridView2->TabIndex = 9;
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
			this->dataGridView3->AllowUserToDeleteRows = false;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6
			});
			this->dataGridView3->Location = System::Drawing::Point(195, 369);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(189, 174);
			this->dataGridView3->TabIndex = 10;
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
			this->dataGridView4->AllowUserToDeleteRows = false;
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn7,
					this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dataGridView4->Location = System::Drawing::Point(593, 369);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->Size = System::Drawing::Size(183, 174);
			this->dataGridView4->TabIndex = 11;
			this->dataGridView4->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellContentClick);
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
			this->dataGridView5->AllowUserToDeleteRows = false;
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12
			});
			this->dataGridView5->Location = System::Drawing::Point(806, 369);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->Size = System::Drawing::Size(183, 174);
			this->dataGridView5->TabIndex = 12;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(464, 28);
			this->richTextBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(235, 234);
			this->richTextBox4->TabIndex = 13;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox6
			// 
			this->richTextBox6->Location = System::Drawing::Point(345, 284);
			this->richTextBox6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox6->Name = L"richTextBox6";
			this->richTextBox6->Size = System::Drawing::Size(646, 67);
			this->richTextBox6->TabIndex = 14;
			this->richTextBox6->Text = L"";
			// 
			// richTextBox7
			// 
			this->richTextBox7->Location = System::Drawing::Point(732, 28);
			this->richTextBox7->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->richTextBox7->Name = L"richTextBox7";
			this->richTextBox7->Size = System::Drawing::Size(257, 234);
			this->richTextBox7->TabIndex = 15;
			this->richTextBox7->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(509, 9);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Дескрипторный код";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(778, 9);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Псевдокод";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(331, 269);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Вывод ошибок";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(61, 12);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Исходный код";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(268, 12);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Обработанный код";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(97, 353);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Ключевые слова";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(492, 353);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 13);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Идентификаторы";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(322, 353);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(62, 13);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Константы";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(675, 353);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(101, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Знаки препинания";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(925, 353);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Операторы";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(10, 268);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 35);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Загрузить текст";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"10";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 30;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Д.к";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 50;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"П.к";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 50;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"30";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 30;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Д.к";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 50;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"П.к";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"20";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 30;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Д.к";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 50;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"П.к";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"40";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 30;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Д.к";
			this->dataGridViewTextBoxColumn8->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->ReadOnly = true;
			this->dataGridViewTextBoxColumn8->Width = 50;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"П.к";
			this->dataGridViewTextBoxColumn9->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->ReadOnly = true;
			this->dataGridViewTextBoxColumn9->Width = 50;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"50";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 30;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"Д.к";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			this->dataGridViewTextBoxColumn11->Width = 50;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"П.к";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			this->dataGridViewTextBoxColumn12->Width = 50;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1016, 560);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->richTextBox7);
			this->Controls->Add(this->richTextBox6);
			this->Controls->Add(this->richTextBox4);
			this->Controls->Add(this->dataGridView5);
			this->Controls->Add(this->dataGridView4);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = richTextBox1->Text;
		int count = 1;
		int Number = 1;
		int S = 0, i = 0, len = s->Length;
		bool perehod = 0;
		while (i < len)
		{
			if (s[i] == '\n') {
				count++;
			}
			switch (S)
			{
			case 0:
				if (s[i] == ' ') {
					S = 2;
				}
				else if (s[i] == '\n') {
					i++;
					S = 0;
				}
				else if (s[i] == '\t');
				else if (s[i] == '/') S = 3;
				else {
					richTextBox2->Text += s[i];
					S = 1;
				}
				break;

			case 1:
				if (s[i] == ' ') {
					richTextBox2->Text += s[i];
					S = 2;
				}
				else if (s[i] == '\n') {
					richTextBox2->Text += "\r\n";
					++Number;
					S = 0;
				}
				else if (s[i] == '\t') S = 0;
				else if (s[i] == '/') S = 8;
				else {
					richTextBox2->Text += s[i];
					S = 1;
				}
				break;
			case 2:
				if (s[i] == ' ') S = 2;
				else if (s[i] == '\r') {
					i++;
					richTextBox2->Text += "\r\n";;
					++Number;
					S = 0;
				}
				else if (s[i] == '\t') S = 2;
				else if (s[i] == '/') S = 3;
				else {
					richTextBox2->Text += s[i];
					S = 1;
				}
				break;
			case 3:
				if (s[i] == '\r') {
					i++;
					richTextBox2->Text += "\r\n";
					++Number;
					S = 0;
				}
				else if (s[i] == '\t') {
					S = 1;
					richTextBox2->Text += "/";
				}
				else if (s[i] == '/') S = 4;
				else if (s[i] == '*') S = 5;
				else {
					richTextBox2->Text += "/" + s[i];
					S = 1;
				}
				break;
			case 4:
				if (s[i] == '\n') {
					i++;
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
					richTextBox2->Text += "\r\n";
					++Number;
					S = 0;
				}
				else if (s[i] == '\t') S = 1;
				else if (s[i] == '/') S = 9;
				else if (s[i] == '*') S = 5;
				else {
					richTextBox2->Text += "/" + s[i];
					S = 1;
				}
				break;
			case 9:
				if (s[i] == '\r') {
					i++;
					richTextBox2->Text += "\r\n";
					++Number;
					S = 0;
				}
				break;
			}
			i++;
		}
		richTextBox3->Text += Number;
		//richTextBox5->Text += count;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Clear();
		richTextBox2->Clear();
		richTextBox3->Clear();
		richTextBox4->Clear();
	//	richTextBox5->Clear();
		richTextBox6->Clear();
		richTextBox7->Clear();
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView4->Rows->Clear();
		dataGridView5->Rows->Clear();
	}
	private: System::Void dataGridView4_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ s = richTextBox2->Text;
		String^ st;
		int count = 2;
		dataGridView1->Rows->Clear();
		dataGridView2->Rows->Clear();
		dataGridView3->Rows->Clear();
		dataGridView4->Rows->Clear();
		dataGridView5->Rows->Clear();
		std::string tmp = "";
		int S = 10; //начальное состояние
		bool repeatEntry = true; //для проверки повторения лексемы в таблице
		bool truend = false;
		for (int i = 0; i <= s->Length; i++) {
			switch (S) {
			case 10:
			{
				if (i != s->Length) {
					if (s[i] == 'c') {
						S = 11;
						tmp += s[i];
					}
					else if (s[i] == 'i') {
						S = 12;
						tmp += s[i];
					}
					else if (s[i] == 'u') {
						S = 13;
						tmp += s[i];
					}
					else if (s[i] == 'n') {
						S = 14;
						tmp += s[i];
					}
					else if (s[i] == 's') {
						S = 15;
						tmp += s[i];
					}
					else if (s[i] == 'p') {
						S = 16;
						tmp += s[i];
					}
					else if (s[i] == 'v') {
						S = 17;
						tmp += s[i];
					}
					else if (s[i] == 'e') {
						S = 18;
						tmp += s[i];
					}
					else if (s[i] == 'm') {
						S = 19;
						tmp += s[i];
					}
					else if (s[i] == 'a') {
						S = 20;
						tmp += s[i];
					}
					else if (s[i] == 'b') {
						S = 21;
						tmp += s[i];
					}
					else if (s[i] == 'd') {
						S = 22;
						tmp += s[i];
					}
					else if (s[i] == 'f') {
						S = 23;
						tmp += s[i];
					}
					else if (s[i] == 'g') {
						S = 24;
						tmp += s[i];
					}
					else if (s[i] == 'l') {
						S = 25;
						tmp += s[i];
					}
					else if (s[i] == 'o') {
						S = 26;
						tmp += s[i];
					}
					else if (s[i] == 'r') {
						S = 27;
						tmp += s[i];
					}
					else if (s[i] == 't') {
						S = 28;
						tmp += s[i];
					}
					else if (s[i] == 'w') {
						S = 29;
						tmp += s[i];
					}
					else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || s[i] == 95)//айдишники
					{
						tmp += s[i];
						S = 301;
					}
					else if (s[i] > 47 && s[i] < 58)//константы(конечн)
					{
						tmp += s[i];
						S = 302;
					}
					else if (s[i] == '"')//для констант "слово"
					{
						tmp += s[i];
						S = 327;
					}
					else if (s[i] == 39)//для констант 'символ'
					{
						tmp += s[i];
						S = 328;
					}
					else if (s[i] == '?' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == ',' || s[i] == '.' || s[i] == ':' || s[i] == ';' || s[i] == ' ' || s[i] == '\n' || s[i] == '#')
					{//знаки препинания(конечн)
						S = 303;
						tmp += s[i];
					}
					else if (s[i] == '%')
					{
						tmp += s[i];
						S = 311;
					}
					else if (s[i] == '/')
					{
						tmp += s[i];
						S = 312;
					}
					else if (s[i] == '*')
					{
						tmp += s[i];
						S = 313;
					}
					else if (s[i] == '+')
					{
						tmp += s[i];
						S = 314;
					}
					else if (s[i] == '-')
					{
						tmp += s[i];
						S = 315;
					}
					else if (s[i] == '=')
					{
						tmp += s[i];
						S = 316;
					}
					else if (s[i] == '!')
					{
						tmp += s[i];
						S = 317;
					}
					else if (s[i] == '<')
					{
						tmp += s[i];
						S = 318;
					}
					else if (s[i] == '>')
					{
						tmp += s[i];
						S = 319;
					}
					else if (s[i] == '&')
					{
						tmp += s[i];
						S = 320;
					}
					else if (s[i] == '|')
					{
						tmp += s[i];
						S = 321;
					}
					break;
				}
			}
			case 11:
				if (i != s->Length) {
					if (s[i] == 'l') { //cl
						S = 71;
						tmp += s[i];
					}
					else if (s[i] == 'o') {//co
						S = 72;
						tmp += s[i];
					}
					else if (s[i] == 'h') {//ch
						S = 73;
						tmp += s[i];
					}
					else if (s[i] == 'a') {//ca
						S = 84;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 12:
				if (i != s->Length) {
					if (s[i] == 'n') {//in
						S = 74;
						tmp += s[i];
					}
					else if (s[i] == 'o') {//i0
						S = 75;
						tmp += s[i];
					}
					else if (s[i] == 'f') {//if
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 13:
				if (i != s->Length) {
					if (s[i] == 's') { //us
						S = 76;
						tmp += s[i];
					}
					else if (s[i] == 'n') { //un
						S = 86;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 14:
				if (i != s->Length) {
					if (s[i] == 'a') { //na
						S = 77;
						tmp += s[i];
					}
					else if (s[i] == 'e') { //ne
						S = 87;
						tmp += s[i];
					}
					else if (s[i] == 'o') { //no
						S = 88;
						tmp += s[i];
					}
					else if (s[i] == 'u') { //nu
						S = 89;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 15:
				if (i != s->Length) {
					if (s[i] == 't') {//st
						S = 78;
						tmp += s[i];
					}
					else if (s[i] == 'h') {//sh
						S = 90;
						tmp += s[i];
					}
					else if (s[i] == 'i') {//si
						S = 91;
						tmp += s[i];
					}
					else if (s[i] == 'w') {//sw
						S = 92;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 16:
				if (i != s->Length) {
					if (s[i] == 'u') { //pu
						S = 79;
						tmp += s[i];
					}
					else if (s[i] == 'r') { //pr
						S = 80;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 17:
				if (i != s->Length) {
					if (s[i] == 'o') { //vo
						S = 81;
						tmp += s[i];
					}
					else if (s[i] == 'i') { //vi
						S = 93;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 18:
				if (i != s->Length) {
					if (s[i] == 'n') { //en
						S = 82;
						tmp += s[i];
					}
					else if (s[i] == 'l') { //el
						S = 94;
						tmp += s[i];
					}
					else if (s[i] == 'x') { //ex
						S = 95;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 19:
				if (i != s->Length) {
					if (s[i] == 'a') { //ma
						S = 83;
						tmp += s[i];
					}
					else if (s[i] == 'u') { //mu
						S = 96;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 20:
				if (i != s->Length) {
					if (s[i] == 's') { //as
						S = 97;
						tmp += s[i];
					}
					else if (s[i] == 'u') { //au
						S = 98;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 21:
				if (i != s->Length) {
					if (s[i] == 'i') { //bi
						S = 99;
						tmp += s[i];
					}
					else if (s[i] == 'o') { //bo
						S = 100;
						tmp += s[i];
					}
					else if (s[i] == 'r') { //br
						S = 101;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 22:
				if (i != s->Length) {
					if (s[i] == 'e') { //de
						S = 102;
						tmp += s[i];
					}
					else if (s[i] == 'o') { //do
						S = 103;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 23:
				if (i != s->Length) {
					if (s[i] == 'a') { //fa
						S = 104;
						tmp += s[i];
					}
					else if (s[i] == 'l') { //fl
						S = 105;
						tmp += s[i];
					}
					else if (s[i] == 'o') { //fo
						S = 106;
						tmp += s[i];
					}
					else if (s[i] == 'r') { //fr
						S = 107;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 24:
				if (i != s->Length) {
					if (s[i] == 'o') { //go
						S = 108;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 25:
				if (i != s->Length) {
					if (s[i] == 'o') { //lo
						S = 109;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 26:
				if (i != s->Length) {
					if (s[i] == 'p') { //op
						S = 110;
						tmp += s[i];
					}
					else if (s[i] == 'r') { //or
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 27:
				if (i != s->Length) {
					if (s[i] == 'e') { //re
						S = 111;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 28:
				if (i != s->Length) {
					if (s[i] == 'e') { //te
						S = 112;
						tmp += s[i];
					}
					else if (s[i] == 'h') { //th
						S = 113;
						tmp += s[i];
					}
					else if (s[i] == 'r') { //tr
						S = 114;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 29:
				if (i != s->Length) {
					if (s[i] == 'h') { //wh
						S = 115;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 71:
				if (i != s->Length) {
					if (s[i] == 'a') { //cla
						S = 131;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 72:
				if (i != s->Length) {
					if (s[i] == 'u') { //cou
						S = 132;
						tmp += s[i];
					}
					else if (s[i] == 'm') { //com
						S = 150;
						tmp += s[i];
					}
					else if (s[i] == 'n') { //con
						S = 151;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 73:
				if (i != s->Length) {
					if (s[i] == 'a') { //cha
						S = 133;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 74:
				if (i != s->Length) {
					if (s[i] == 'c') { //inc
						S = 134;
						tmp += s[i];
					}
					else if (s[i] == 't') { //int
						S = 310; // ключевое слово
						tmp += s[i];
					}
					else if (s[i] == 'l') { //inl
						S = 164;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 75:
				if (i != s->Length) {
					if (s[i] == 's') { //ios
						S = 135;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 76:
				if (i != s->Length) {
					if (s[i] == 'i') { //usi
						S = 136;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 77:
				if (i != s->Length) {
					if (s[i] == 'm') { //nam
						S = 137;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 78:
				if (i != s->Length) {
					if (s[i] == 'd') { //std
						S = 310; // ключевое
						tmp += s[i];
					}
					else if (s[i] == 'r') {//str
						S = 138;
						tmp += s[i];
					}
					else if (s[i] == 'a') {//sta
						S = 174;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 79:
				if (i != s->Length) {
					if (s[i] == 'b') { //pub
						S = 139;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 80:
				if (i != s->Length) {
					if (s[i] == 'i') { //pri
						S = 140;
						tmp += s[i];
					}
					else if (s[i] == 'o') {//pro
						S = 169;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 81:
				if (i != s->Length) {
					if (s[i] == 'i') { //voi
						S = 141;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 82:
				if (i != s->Length) {
					if (s[i] == 'd') { //end
						S = 142;
						tmp += s[i];
					}
					else if (s[i] == 'u') { //enu
						S = 156;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 83:
				if (i != s->Length) {
					if (s[i] == 'i') { //mai
						S = 143;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 84:
				if (i != s->Length) {
					if (s[i] == 's') { //cas
						S = 148;
						tmp += s[i];
					}
					else if (s[i] == 't') { //cat
						S = 149;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 86:
				if (i != s->Length) {
					if (s[i] == 'i') { //uni
						S = 401;
						tmp += s[i];
					}
					else if (s[i] == 's') { //uns
						S = 402;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 87:
				if (i != s->Length) {
					if (s[i] == 'w') { //new
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 88:
				if (i != s->Length) {
					if (s[i] == 't') { //not
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 89:
				if (i != s->Length) {
					if (s[i] == 'l') { //nul
						S = 167;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 90:
				if (i != s->Length) {
					if (s[i] == 'o') { //sho
						S = 171;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 91:
				if (i != s->Length) {
					if (s[i] == 'g') { //sig
						S = 172;
						tmp += s[i];
					}
					else if (s[i] == 'z') { //siz
						S = 173;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 92:
				if (i != s->Length) {
					if (s[i] == 'i') { //swi
						S = 176;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 93:
				if (i != s->Length) {
					if (s[i] == 'r') { //vir
						S = 403;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 94:
				if (i != s->Length) {
					if (s[i] == 's') { //els
						S = 148;
						tmp += s[i];
					}

					else {
						i--;
						S = 301;
					}
				}
				break;
			case 95:
				if (i != s->Length) {
					if (s[i] == 'p') { //exp
						S = 157;
						tmp += s[i];
					}
					else if (s[i] == 't') { //ext
						S = 158;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 96:
				if (i != s->Length) {
					if (s[i] == 't') { //mut
						S = 166;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 97:
				if (i != s->Length) {
					if (s[i] == 'm') { //asm
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 98:
				if (i != s->Length) {
					if (s[i] == 't') { //aut
						S = 144;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 99:
				if (i != s->Length) {
					if (s[i] == 't') { //bit
						S = 145;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 100:
				if (i != s->Length) {
					if (s[i] == 'o') { //boo
						S = 146;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 101:
				if (i != s->Length) {
					if (s[i] == 'e') { //bre
						S = 147;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 102:
				if (i != s->Length) {
					if (s[i] == 'f') { //def
						S = 152;
						tmp += s[i];
					}
					else if (s[i] == 'l') { //del
						S = 153;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 103:
				if (i != s->Length) {
					if (s[i] == 'u') { //dou
						S = 154;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 104:
				if (i != s->Length) {
					if (s[i] == 'l') { //fal
						S = 159;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 105:
				if (i != s->Length) {
					if (s[i] == 'o') { //flo
						S = 160;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 106:
				if (i != s->Length) {
					if (s[i] == 'r') { //for
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 107:
				if (i != s->Length) {
					if (s[i] == 'i') { //fri
						S = 162;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 108:
				if (i != s->Length) {
					if (s[i] == 't') { //got
						S = 163;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 109:
				if (i != s->Length) {
					if (s[i] == 'n') { //lon
						S = 165;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 110:
				if (i != s->Length) {
					if (s[i] == 'e') { //ope
						S = 168;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 111:
				if (i != s->Length) {
					if (s[i] == 't') { //ret
						S = 170;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 112:
				if (i != s->Length) {
					if (s[i] == 'm') { //tem
						S = 177;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 113:
				if (i != s->Length) {
					if (s[i] == 'i') { //thi
						S = 178;
						tmp += s[i];
					}
					else if (s[i] == 'r') { //thr
						S = 179;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 114:
				if (i != s->Length) {
					if (s[i] == 'u') { //tru
						S = 180;
						tmp += s[i];
					}
					else if (s[i] == 'y') { //try
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 115:
				if (i != s->Length) {
					if (s[i] == 'i') { //whi
						S = 404;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 131:
				if (i != s->Length) {
					if (s[i] == 's') { //clas
						S = 181;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 132:
				if (i != s->Length) {
					if (s[i] == 't') { //cout
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 133:
				if (i != s->Length) {
					if (s[i] == 'r') { //char
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 134:
				if (i != s->Length) {
					if (s[i] == 'l') { //incl
						S = 182;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 135:
				if (i != s->Length) {
					if (s[i] == 't') { //iost
						S = 183;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 136:
				if (i != s->Length) {
					if (s[i] == 'n') { //usin
						S = 184;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 137:
				if (i != s->Length) {
					if (s[i] == 'e') { //name
						S = 185;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 138:
				if (i != s->Length) {
					if (s[i] == 'i') { //stri
						S = 186;
						tmp += s[i];
					}
					else if (s[i] == 'u') {//stru
						S = 213;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 139:
				if (i != s->Length) {
					if (s[i] == 'l') { //publ
						S = 187;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 140:
				if (i != s->Length) {
					if (s[i] == 'v') { //priv
						S = 188;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 141:
				if (i != s->Length) {
					if (s[i] == 'd') { //void
						S = 310; //ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 142:
				if (i != s->Length) {
					if (s[i] == 'l') { //endl
						S = 310;//ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 143:
				if (i != s->Length) {
					if (s[i] == 'n') { //main
						S = 310; //ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 144:
				if (i != s->Length) {
					if (s[i] == 'o') { //auto
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 145:
				if (i != s->Length) {
					if (s[i] == 'a') { //bita
						S = 189;
						tmp += s[i];
					}
					else if (s[i] == 'o') { //bito
						S = 190;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 146:
				if (i != s->Length) {
					if (s[i] == 'l') { //bool
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 147:
				if (i != s->Length) {
					if (s[i] == 'a') { //brea
						S = 191;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 148:
				if (i != s->Length) {
					if (s[i] == 'e') { //case
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 149:
				if (i != s->Length) {
					if (s[i] == 'c') { //catc
						S = 192;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 150:
				if (i != s->Length) {
					if (s[i] == 'p') { //comp
						S = 193;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 151:
				if (i != s->Length) {
					if (s[i] == 'c') { //conc
						S = 194;
						tmp += s[i];
					}
					else if (s[i] == 's') {//cons
						S = 195;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 152:
				if (i != s->Length) {
					if (s[i] == 'a') { //defa
						S = 196;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 153:
				if (i != s->Length) {
					if (s[i] == 'e') { //dele
						S = 197;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 154:
				if (i != s->Length) {
					if (s[i] == 'b') { //doub
						S = 198;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 155:
				if (i != s->Length) {
					if (s[i] == 'e') { //else
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 156:
				if (i != s->Length) {
					if (s[i] == 'm') { //enum
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 157:
				if (i != s->Length) {
					if (s[i] == 'o') { //expo
						S = 199;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 158:
				if (i != s->Length) {
					if (s[i] == 'e') { //exte
						S = 200;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 159:
				if (i != s->Length) {
					if (s[i] == 's') { //fals
						S = 201;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 160:
				if (i != s->Length) {
					if (s[i] == 'a') { //floa
						S = 202;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 162:
				if (i != s->Length) {
					if (s[i] == 'e') { //frie
						S = 203;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 163:
				if (i != s->Length) {
					if (s[i] == 'o') { //goto
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 164:
				if (i != s->Length) {
					if (s[i] == 'i') { //inli
						S = 204;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 165:
				if (i != s->Length) {
					if (s[i] == 'g') { //long
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 166:
				if (i != s->Length) {
					if (s[i] == 'a') { //muta
						S = 205;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 167:
				if (i != s->Length) {
					if (s[i] == 'l') { //null
						S = 410;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 168:
				if (i != s->Length) {
					if (s[i] == 'r') { //oper
						S = 206;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 169:
				if (i != s->Length) {
					if (s[i] == 't') { //prot
						S = 207;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 170:
				if (i != s->Length) {
					if (s[i] == 'u') { //retu
						S = 208;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 171:
				if (i != s->Length) {
					if (s[i] == 'r') { //shor
						S = 209;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 172:
				if (i != s->Length) {
					if (s[i] == 'n') { //sign
						S = 210;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 173:
				if (i != s->Length) {
					if (s[i] == 'e') { //size
						S = 211;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 174:
				if (i != s->Length) {
					if (s[i] == 't') { //stat
						S = 212;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 176:
				if (i != s->Length) {
					if (s[i] == 't') { //swit
						S = 214;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 177:
				if (i != s->Length) {
					if (s[i] == 'p') { //temp
						S = 215;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 178:
				if (i != s->Length) {
					if (s[i] == 's') { //this
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 179:
				if (i != s->Length) {
					if (s[i] == 'o') { //thro
						S = 405;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 180:
				if (i != s->Length) {
					if (s[i] == 'e') { //true
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 181:
				if (i != s->Length) {
					if (s[i] == 's') { //class
						S = 310; //ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 182:
				if (i != s->Length) {
					if (s[i] == 'u') { //inclu
						S = 216;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 183:
				if (i != s->Length) {
					if (s[i] == 'r') { //iostr
						S = 217;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 184:
				if (i != s->Length) {
					if (s[i] == 'g') { //using
						S = 310; //ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 185:
				if (i != s->Length) {
					if (s[i] == 's') { //names
						S = 218;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 186:
				if (i != s->Length) {
					if (s[i] == 'n') { //strin
						S = 219;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 187:
				if (i != s->Length) {
					if (s[i] == 'i') { //publi
						S = 220;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 188:
				if (i != s->Length) {
					if (s[i] == 'a') { //priva
						S = 221;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 189:
				if (i != s->Length) {
					if (s[i] == 'n') { //bitan
						S = 222;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 190:
				if (i != s->Length) {
					if (s[i] == 'r') { //bitor
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 191:
				if (i != s->Length) {
					if (s[i] == 'k') { //break
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 192:
				if (i != s->Length) {
					if (s[i] == 'h') { //catch
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 193:
				if (i != s->Length) {
					if (s[i] == 'l') { //compl
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 194:
				if (i != s->Length) {
					if (s[i] == 'e') { //conce
						S = 223;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 195:
				if (i != s->Length) {
					if (s[i] == 't') { //const
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 196:
				if (i != s->Length) {
					if (s[i] == 'u') { //defau
						S = 224;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 197:
				if (i != s->Length) {
					if (s[i] == 't') { //delet
						S = 225;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 198:
				if (i != s->Length) {
					if (s[i] == 'l') { //doubl
						S = 226;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 199:
				if (i != s->Length) {
					if (s[i] == 'r') { //expor
						S = 227;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 200:
				if (i != s->Length) {
					if (s[i] == 'r') { //exter
						S = 228;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 201:
				if (i != s->Length) {
					if (s[i] == 'e') { //false
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 202:
				if (i != s->Length) {
					if (s[i] == 't') { //float
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 203:
				if (i != s->Length) {
					if (s[i] == 'n') { //frien
						S = 229;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 204:
				if (i != s->Length) {
					if (s[i] == 'n') { //inlin
						S = 230;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 205:
				if (i != s->Length) {
					if (s[i] == 'b') { //mutab
						S = 231;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 206:
				if (i != s->Length) {
					if (s[i] == 'a') { //opera
						S = 233;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 207:
				if (i != s->Length) {
					if (s[i] == 'e') { //prote
						S = 234;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 208:
				if (i != s->Length) {
					if (s[i] == 'r') { //retur
						S = 235;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 209:
				if (i != s->Length) {
					if (s[i] == 't') { //short
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 210:
				if (i != s->Length) {
					if (s[i] == 'e') { //signe
						S = 236;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 211:
				if (i != s->Length) {
					if (s[i] == 'o') { //sizeo
						S = 237;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 212:
				if (i != s->Length) {
					if (s[i] == 'i') { //stati
						S = 238;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 213:
				if (i != s->Length) {
					if (s[i] == 'c') { //struc
						S = 239;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 214:
				if (i != s->Length) {
					if (s[i] == 'c') { //switc
						S = 240;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 215:
				if (i != s->Length) {
					if (s[i] == 'l') { //templ
						S = 241;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 216:
				if (i != s->Length) {
					if (s[i] == 'd') { //includ
						S = 251;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 217:
				if (i != s->Length) {
					if (s[i] == 'e') { //iostre
						S = 252;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 218:
				if (i != s->Length) {
					if (s[i] == 'p') { //namesp
						S = 253;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 219:
				if (i != s->Length) {
					if (s[i] == 'g') { //string
						S = 310; //ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 220:
				if (i != s->Length) {
					if (s[i] == 'c') { //public
						S = 310; //ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 221:
				if (i != s->Length) {
					if (s[i] == 't') { //privat
						S = 254;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 222:
				if (i != s->Length) {
					if (s[i] == 'd') { //bitand
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 223:
				if (i != s->Length) {
					if (s[i] == 'p') { //concep
						S = 255;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 224:
				if (i != s->Length) {
					if (s[i] == 'l') { //defaul
						S = 263;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 225:
				if (i != s->Length) {
					if (s[i] == 'e') { //delete
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 226:
				if (i != s->Length) {
					if (s[i] == 'e') { //double
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 227:
				if (i != s->Length) {
					if (s[i] == 't') { //export
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 228:
				if (i != s->Length) {
					if (s[i] == 'n') { //extern
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 229:
				if (i != s->Length) {
					if (s[i] == 'd') { //friend
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 230:
				if (i != s->Length) {
					if (s[i] == 'e') { //inline
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 231:
				if (i != s->Length) {
					if (s[i] == 'l') { //mutabl
						S = 256;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 232:
				if (i != s->Length) {
					if (s[i] == 't') { //nullpt
						S = 257;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 233:
				if (i != s->Length) {
					if (s[i] == 't') { //operat
						S = 258;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 234:
				if (i != s->Length) {
					if (s[i] == 'c') { //protec
						S = 259;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 235:
				if (i != s->Length) {
					if (s[i] == 'n') { //return
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 236:
				if (i != s->Length) {
					if (s[i] == 'd') { //signed
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 237:
				if (i != s->Length) {
					if (s[i] == 'f') { //sizeof
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 238:
				if (i != s->Length) {
					if (s[i] == 'c') { //static
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 239:
				if (i != s->Length) {
					if (s[i] == 't') { //struct
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 240:
				if (i != s->Length) {
					if (s[i] == 'h') { //switch
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 241:
				if (i != s->Length) {
					if (s[i] == 'a') { //templa
						S = 260;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 242:
				if (i != s->Length) {
					if (s[i] == 'n') { //unsign
						S = 261;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 243:
				if (i != s->Length) {
					if (s[i] == 'a') { //virtua
						S = 262;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 251:
				if (i != s->Length) {
					if (s[i] == 'e') { //include
						S = 310;//ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 252:
				if (i != s->Length) {
					if (s[i] == 'a') { //iostrea
						S = 265;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 253:
				if (i != s->Length) {
					if (s[i] == 'a') { //namespa
						S = 266;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 254:
				if (i != s->Length) {
					if (s[i] == 'e') { //private
						S = 310;//ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 255:
				if (i != s->Length) {
					if (s[i] == 't') { //concept
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 256:
				if (i != s->Length) {
					if (s[i] == 'e') { //mutable
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 257:
				if (i != s->Length) {
					if (s[i] == 'r') { //nullptr
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 258:
				if (i != s->Length) {
					if (s[i] == 'o') { //operato
						S = 267;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 259:
				if (i != s->Length) {
					if (s[i] == 't') { //protect
						S = 268;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 260:
				if (i != s->Length) {
					if (s[i] == 't') { //templat
						S = 269;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 261:
				if (i != s->Length) {
					if (s[i] == 'e') { //unsigne
						S = 270;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 262:
				if (i != s->Length) {
					if (s[i] == 'l') { //virtual
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 263:
				if (i != s->Length) {
					if (s[i] == 't') { //default
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 265:
				if (i != s->Length) {
					if (s[i] == 'm') { //iostream
						S = 310;//ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 266:
				if (i != s->Length) {
					if (s[i] == 'c') { //namespac
						S = 275;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 267:
				if (i != s->Length) {
					if (s[i] == 'r') { //operator
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 268:
				if (i != s->Length) {
					if (s[i] == 'e') { //protecte
						S = 276;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 269:
				if (i != s->Length) {
					if (s[i] == 'e') { //template
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 270:
				if (i != s->Length) {
					if (s[i] == 'd') { //unsigned
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 275:
				if (i != s->Length) {
					if (s[i] == 'e') { //namespace
						S = 310;//ключевое
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 276:
				if (i != s->Length) {
					if (s[i] == 'd') { //protected
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 301://id
			{
				if ((i < s->Length) && ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || s[i] == 95))
				{
					tmp += s[i];
				}
				else if ((i < s->Length) && ((s[i] > 33 && s[i] < 36) || s[i] == 39 || s[i] == 92 || s[i] == 94))
				{
					richTextBox6->Text += "Ошибка в написании идентификатора в строке " + (count - 1) + "\n";
				}

				else if (i <= s->Length) {
					S = 301;
					truend = true;
				}
				break;
			}
			case 302://const
			{
				if (i < s->Length && s[i] > 47 && s[i] < 58)
				{
					tmp += s[i]; // num
				}
				else if (i < s->Length && s[i] == '.')
				{
					tmp += s[i];
					S = 323;// num.
				}
				else if (i < s->Length && (s[i] == 'e' || s[i] == 'E'))
				{
					tmp += s[i];
					S = 325; // numE
				}
				else if (i < s->Length && ((s[i] >= 65 && s[i] <= 68) || (s[i] >= 70 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 100) || (s[i] >= 102 && s[i] <= 122))) {
					richTextBox6->Text += "Ошибка в написании константы (написание буквы в числовой константе) в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 302;
					truend = true;
				}
				break;
			}
			case 303: {
				if ((i < s->Length) && (s[i] != ' ' && s[i] != '\n'))
				{
					if (i < s->Length && ((tmp[0] == ',' || tmp[0] == '.', tmp[0] == '?') && (s[i] == ',' || s[i] == '.' || s[i] == '?'))) {
						st = gcnew String(tmp.c_str());
						richTextBox6->Text += "Ошибка в использовании " + st + " в строке " + (count - 1) + "\n";
					}
				}
				if (tmp == " ") {
					tmp = "пробел";
					S = 303;
					truend = true;
				}
				else if (tmp == "\n")
				{
					count++;
					tmp = "перевод строки";
					S = 303;
					truend = true;
				}
				else if (i <= s->Length) {
					S = 303;
					truend = true;
				}
				break;
			}
			case 310://c++ ключевые слова - конечное
			{
				if ((i < s->Length) && ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= 48 && s[i] <= 57) || s[i] == 95)) {
					S = 301;
					tmp += s[i];
				}
				else if (i <= s->Length) {
					S = 310;
					truend = true;
				}
				break;
			}
			case 311: {
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; //%=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 47) || (s[i] == 33) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 311;
					truend = true;
				}
				break;
			}
			case 312:// /
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; // /=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 46) || (s[i] == 33) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 312;
					truend = true;
				}
				break;
			}
			case 313:// *
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; //*=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 43 && s[i] <= 47) || (s[i] == 33) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124) || (s[i] == 41)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 313;
					truend = true;
				}
				break;
			}
			case 314:// +
			{
				if ((i < s->Length) && (s[i] == '+'))
				{
					S = 322; // ++
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] == '=')) {
					S = 322; // +=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 42) || (s[i] == 33) || (s[i] >= 44 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 314;
					truend = true;
				}
				break;
			}
			case 315:// -
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; // -=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] == '-')) {
					S = 322; // --
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 44) || (s[i] == 33) || (s[i] >= 46 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 315;
					truend = true;
				}
				break;
			}
			case 316:// =
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; // ==
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 34) && (s[i] != 39) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}

				else if (i <= s->Length) {
					S = 316;
					truend = true;
				}
				break;
			}
			case 317: // !
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; // !=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 33) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 317;
					truend = true;
				}
				break;
			}
			case 318: // <
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; // <=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] == '<')) {
					S = 322; // <<
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 318;
					truend = true;
				}
				break;
			}
			case 319: // >
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; // >=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] == '>')) {
					S = 322; // >>
					tmp += s[i];
					if (s[i + 1] == '>') {
						//error
						//richTextBox6.Text += ($"Ошибка в использовании оператора {temp} в строке {count - 1}");
						i = s->Length + 1;
					}
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i < s->Length) {
					S = 319;
					truend = true;
				}
				break;
			}
			case 320: // &
			{
				if ((i < s->Length) && (s[i] == '='))
				{
					S = 322; //220 &=
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] == '&')) {
					S = 322; // &&
					tmp += s[i];
				}
				else if (i <= s->Length) {
					S = 320;
					truend = true;
				}
				break;
			}
			case 321: // |
			{
				if ((i < s->Length) && (s[i] == '|')) {
					S = 322; // ||
					tmp += s[i];
				}
				else if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					S = 321;
					truend = true;
				}
				break;
			}
			case 322:// %= /= *= *= ++ += -- -= == != <= >= &= |=
			{
				if ((i < s->Length) && (s[i] != 95) && !(s[i] >= 48 && s[i] <= 57) && !(s[i] >= 65 && s[i] <= 90) && !(s[i] >= 97 && s[i] <= 122)
					&& ((s[i] >= 41 && s[i] <= 47) || ((s[i] >= 58 && s[i] <= 62)) || (s[i] >= 37 && s[i] <= 38) || (s[i] == 124)))
				{
					st = gcnew String(tmp.c_str());
					richTextBox6->Text += "Ошибка в использовании оператора " + st + " в строке " + (count - 1) + "\n";
				}
				else if (i <= s->Length) {
					truend = true;
				}
				break;
			}
			case 323: // const
			{
				if (i < s->Length && s[i] > 47 && s[i] < 58)
				{
					tmp += s[i];
					S = 324;
				}
				else if (i < s->Length)
				{
					//error
					richTextBox6->Text += "Ошибка в написании числовой константы в строке " + (count - 1) + " после . должна идти цифра\n";
				}
				break;
			}
			case 324: // const - конечное для констант с плавающей точкой
			{
				if (i < s->Length && s[i] > 47 && s[i] < 58)
				{
					tmp += s[i];
				}
				else if (i < s->Length && (s[i] == 'E' || s[i] == 'e'))
				{
					tmp += s[i];
					S = 325;
				}
				else if (i < s->Length && ((s[i] >= 65 && s[i] <= 68) || (s[i] >= 70 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 100) || (s[i] >= 102 && s[i] <= 122)))
				{
					richTextBox6->Text += "Ошибка в написании числовой константы в строке " + (count - 1) + " нельзя использовать буквы в числах, кроме E или e \n";
				}
				else if (i < s->Length && s[i] == '.')
				{
					richTextBox6->Text += "Ошибка в написании числовой константы в строке " + (count - 1) + " в дробной части числа не может быть двух .\n";
				}
				else if (i <= s->Length) {
					S = 324;
					truend = true;
				}
				break;
			}
			case 325: // const
			{
				if (i < s->Length && (s[i] == '-'))
				{
					tmp += s[i];
					S = 326;
				}
				else if (i < s->Length && s[i] > 47 && s[i] < 58)
				{
					tmp += s[i];
					S = 332;
				}
				else if (i <= s->Length)
				{
					richTextBox6->Text += "Ошибка в написании числовой константы в строке " + (count - 1) + " после Е или e в числовой константе должно идти число или - \n";
				}
				break;
			}
			case 326: // const
			{
				if (i < s->Length && s[i] > 47 && s[i] < 58)
				{
					tmp += s[i];
					S = 332;
				}
				else if (i <= s->Length)
				{
					richTextBox6->Text += "Ошибка в написании числовой константы в строке " + (count - 1) + " после - не указана степень\n";
				}
				break;
			}
			case 327: // const "
			{
				if (i < s->Length && s[i] == '"')
				{
					tmp += s[i];
					S = 332;
				}
				else if (i < s->Length)
				{
					tmp += s[i];
				}
				break;
			}
			case 328: // const ' /
			{

				if (i < s->Length && s[i] == 39)
				{
					richTextBox6->Text += "Ошибка в написании константы в строке " + (count - 1) + " '' - не может быть пустой\n";
				}
				if (i < s->Length && s[i] == 92)
				{
					tmp += s[i];
					S = 329;
				}
				else if (i < s->Length)
				{
					S = 331;
					tmp += s[i];
				}
				break;
			}
			case 329: // const - управляющие символы
			{
				if (i < s->Length && (s[i] == 'r' || s[i] == 'n' || s[i] == 't' || s[i] == 'v' || s[i] == '0' || s[i] == '?' || s[i] == 'a' || s[i] == 39 || s[i] == 92 || s[i] == 'b' || s[i] == 'f' || s[i] == 'e'))
				{
					tmp += s[i];
					S = 330;
				}
				else if (i < s->Length)
				{
					richTextBox6->Text += "Ошибка в написании константы в строке " + (count - 1) + " , вызван несуществующий управляющий символ\n";
				}
				break;
			}
			case 330: // const закрывающий ' для управл симв
			{
				if (i < s->Length && s[i] == 39)
				{
					tmp += s[i];
					S = 332;
				}
				else if (i < s->Length)
				{
					richTextBox6->Text += "Ошибка в написании константы в строке " + (count - 1) + " константа ' ', не может хранить больше 1 символа\n";
				}
				break;
			}
			case 331: // const закрывающий ' для обычн симв
			{
				if (i < s->Length && s[i] == 39)
				{
					tmp += s[i];
					S = 332;
				}
				else if (i < s->Length)
				{
					richTextBox6->Text += "Ошибка в написании константы в строке " + (count - 1) + " константа ' ', не может хранить больше 1 символа\n";
				}
				break;

			}
			case 332: // const float num, " ", ' ' - конечное
			{
				if (i < s->Length && tmp[0] > 47 && tmp[0] < 58)
				{
					if (s[i] > 47 && s[i] < 58) {
						tmp += s[i];
					}
				}
				else if ((i < s->Length) && (s[i] == '.' || s[i] == 'E' || s[i] == 'e'))
				{
					richTextBox6->Text += "Ошибка в написании константы в строке" + (count - 1) + " в числовой константе не допускается больше 1 повторения ., e, E/n";
				}
				else if (i < s->Length) {
					S = 332;
					truend = true;
				}
				break;
			}
			case 401:
				if (i != s->Length) {
					if (s[i] == 'o') { //unio
						S = 406;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 402:
				if (i != s->Length) {
					if (s[i] == 'i') { //unsi
						S = 407;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 403:
				if (i != s->Length) {
					if (s[i] == 't') { //virt
						S = 408;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 404:
				if (i != s->Length) {
					if (s[i] == 'l') { //whil
						S = 409;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 405:
				if (i != s->Length) {
					if (s[i] == 'w') { //throw
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 406:
				if (i != s->Length) {
					if (s[i] == 'n') { //union
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 407:
				if (i != s->Length) {
					if (s[i] == 'g') { //unsig
						S = 242;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 408:
				if (i != s->Length) {
					if (s[i] == 'u') { //virtu
						S = 243;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 409:
				if (i != s->Length) {
					if (s[i] == 'e') { //while
						S = 310;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			case 410:
				if (i != s->Length) {
					if (s[i] == 'p') { //nullp
						S = 232;
						tmp += s[i];
					}
					else {
						i--;
						S = 301;
					}
				}
				break;
			}
			if (S == 322 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;
						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;
						tmp = "";
						st = "";
					}
				}
			}
			else if (S == 301 && truend == 1) {
				if ((i < s->Length) && (tmp != "")) {
					i--;
					st = gcnew String(tmp.c_str());
					for (int j = 0; j < dataGridView2->Rows->Count; j++)
					{
						if (dataGridView2->Rows[j]->Cells[1]->Value->ToString() == st)
						{
							repeatEntry = false;
							break;
						}
					}
					if (repeatEntry)
					{
						dataGridView2->Rows->Add();
						dataGridView2->Rows[dataGridView2->Rows->Count - 1]->Cells[0]->Value = dataGridView2->RowCount;
						dataGridView2->Rows[dataGridView2->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView2->Rows[dataGridView2->Rows->Count - 1]->Cells[2]->Value = "id" + (dataGridView2->RowCount);
					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView2->Rows->Count; j++) {
						if (dataGridView2->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(20," + dataGridView2->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView2->Rows[j]->Cells[2]->Value->ToString();
						}
					}
					truend = false;
					S = 10;
					tmp = "";
					st = "";
				}
				else if ((i == s->Length) && (tmp != "")) {
					st = gcnew String(tmp.c_str());
					for (int j = 0; j < dataGridView2->Rows->Count; j++)
					{
						if (dataGridView2->Rows[j]->Cells[1]->Value->ToString() == st)
						{
							repeatEntry = false;
							break;
						}
					}
					if (repeatEntry)
					{
						dataGridView2->Rows->Add();
						dataGridView2->Rows[dataGridView2->Rows->Count - 1]->Cells[0]->Value = dataGridView2->RowCount;
						dataGridView2->Rows[dataGridView2->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView2->Rows[dataGridView2->Rows->Count - 1]->Cells[2]->Value = "id" + (dataGridView2->RowCount);
					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView2->Rows->Count; j++) {
						if (dataGridView2->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(20," + dataGridView2->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView2->Rows[j]->Cells[2]->Value->ToString();
						}
					}
					S = 10;
					truend = false;
					tmp = "";
					st = "";
				}
			}
			else if (S == 302 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					for (int j = 0; j < dataGridView3->Rows->Count; j++)
						if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st)
						{
							repeatEntry = false;
							break;
						}
					if (repeatEntry)
					{
						dataGridView3->Rows->Add();
						dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[0]->Value = dataGridView3->RowCount;
						dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[2]->Value = "const";
					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView3->Rows->Count; j++) {
						if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(30," + dataGridView3->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView3->Rows[j]->Cells[2]->Value->ToString() + " ";
						}
					}
					truend = false;
					S = 10;
					tmp = "";
					st = "";
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					for (int j = 0; j < dataGridView3->Rows->Count; j++)
						if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st)
						{
							repeatEntry = false;
							break;
						}
					if (repeatEntry)
					{
						dataGridView3->Rows->Add();
						dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[0]->Value = dataGridView3->RowCount;
						dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[2]->Value = "const";
					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView3->Rows->Count; j++) {
						if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(30," + dataGridView3->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView3->Rows[j]->Cells[2]->Value->ToString() + " ";
						}
					}
					truend = false;

					S = 10;
					tmp = "";
					st = "";
				}
			}
			else if (S == 303 && truend == 1) {
				i--;
				st = gcnew String(tmp.c_str());
				for (int j = 0; j < dataGridView4->Rows->Count; j++)
					if (dataGridView4->Rows[j]->Cells[1]->Value->ToString() == st)
					{
						repeatEntry = false;
						break;
					}
				if (repeatEntry)
				{
					dataGridView4->Rows->Add();
					dataGridView4->Rows[dataGridView4->Rows->Count - 1]->Cells[0]->Value = dataGridView4->RowCount;
					dataGridView4->Rows[dataGridView4->Rows->Count - 1]->Cells[1]->Value = st;
					dataGridView4->Rows[dataGridView4->Rows->Count - 1]->Cells[2]->Value = st;
				}
				repeatEntry = true;
				for (int j = 0; j < dataGridView4->Rows->Count; j++) {
					if (dataGridView4->Rows[j]->Cells[1]->Value->ToString() == st) {
						richTextBox4->Text += "(40," + dataGridView4->Rows[j]->Cells[0]->Value->ToString() + ")";
						richTextBox7->Text += dataGridView4->Rows[j]->Cells[2]->Value->ToString() + " ";
					}
				}
				S = 10;
				truend = false;

				tmp = "";
				st = "";
			}
			else if (S == 310 && truend == 1) {
				if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					for (int j = 0; j < dataGridView1->Rows->Count; j++) {
						if (dataGridView1->Rows[j]->Cells[1]->Value->ToString() == st) {
							repeatEntry = false;
							break;
						}
					}
					if (repeatEntry) {
						dataGridView1->Rows->Add();
						dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[0]->Value = dataGridView1->RowCount;
						dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[2]->Value = st;
					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView1->Rows->Count; j++) {
						if (dataGridView1->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(10," + dataGridView1->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView1->Rows[j]->Cells[2]->Value->ToString() + " ";
						}
					}
					S = 10;
					tmp = "";
					st = "";
					truend = false;

				}
				else if (i < s->Length) {
					i--;
					st = gcnew String(tmp.c_str());
					for (int j = 0; j < dataGridView1->Rows->Count; j++) {
						if (dataGridView1->Rows[j]->Cells[1]->Value->ToString() == st) {
							repeatEntry = false;
							break;
						}
					}
					if (repeatEntry) {
						dataGridView1->Rows->Add();
						dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[0]->Value = dataGridView1->RowCount;
						dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView1->Rows[dataGridView1->Rows->Count - 1]->Cells[2]->Value = st;
					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView1->Rows->Count; j++) {
						if (dataGridView1->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(10," + dataGridView1->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView1->Rows[j]->Cells[2]->Value->ToString() + " ";
						}
					}
					S = 10;
					tmp = "";
					st = "";
					truend = false;

				}
			}
			else if (S == 311 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					for (int j = 0; j < dataGridView5->Rows->Count; j++)
						if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
						{
							repeatEntry = false;
							break;
						}
					if (repeatEntry)
					{
						dataGridView5->Rows->Add();
						dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
						dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView5->Rows->Count; j++) {
						if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
						}
					}
					S = 10;
					tmp = "";
					truend = false;

					st = "";
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					for (int j = 0; j < dataGridView5->Rows->Count; j++)
						if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
						{
							repeatEntry = false;
							break;
						}
					if (repeatEntry)
					{
						dataGridView5->Rows->Add();
						dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
						dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
						dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

					}
					repeatEntry = true;
					for (int j = 0; j < dataGridView5->Rows->Count; j++) {
						if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
							richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
							richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
						}
					}
					S = 10;
					tmp = "";
					st = "";
					truend = false;

				}
			}
			else if (S == 312 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						st = "";
						truend = false;

					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						st = "";
						truend = false;

					}
				}
			}
			else if (S == 313 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						st = "";
						truend = false;

					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						st = "";
						truend = false;

					}
				}
			}
			else if (S == 314 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;

						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());

					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count - 1; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						truend = false;

						st = "";
					}
				}
			}
			else if (S == 315 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						st = "";
						truend = false;

					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						st = "";
						truend = false;

					}
				}
			}
			else if (S == 316 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;

						tmp = "";
						st = "";
					}
				}
			}
			else if (S == 317 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;

						tmp = "";
						st = "";
					}
				}
			}
			else if (S == 318 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}

						}
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
			}
			else if (S == 319 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						tmp = "";
						truend = false;

						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;

						tmp = "";
						st = "";
					}
				}
			}
			else if (S == 320 && truend == 1) {
				{
					if (i < s->Length) {
						st = gcnew String(tmp.c_str());
						i--;
						if (i != s->Length + 1)
						{
							for (int j = 0; j < dataGridView5->Rows->Count; j++)
								if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
								{
									repeatEntry = false;
									break;
								}
							if (repeatEntry)
							{
								dataGridView5->Rows->Add();
								dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
								dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
								dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

							}
							repeatEntry = true;
							for (int j = 0; j < dataGridView5->Rows->Count; j++) {
								if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
									richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
									richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
								}
							}
							S = 10;
							tmp = "";
							st = "";
							truend = false;

						}
					}
					else if (i == s->Length) {
						st = gcnew String(tmp.c_str());
						if (i != s->Length + 1)
						{
							for (int j = 0; j < dataGridView5->Rows->Count; j++)
								if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
								{
									repeatEntry = false;
									break;
								}
							if (repeatEntry)
							{
								dataGridView5->Rows->Add();
								dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
								dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
								dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

							}
							repeatEntry = true;
							for (int j = 0; j < dataGridView5->Rows->Count; j++) {
								if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
									richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
									richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
								}
							}
							S = 10;
							tmp = "";
							truend = false;

							st = "";
						}
					}
				}
			}
			else if (S == 321 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView5->Rows->Count; j++) {
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(50," + dataGridView5->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView5->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;

						tmp = "";
						st = "";
					}
				}
			}
			else if (S == 324 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView5->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView5->Rows->Add();
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[0]->Value = dataGridView5->RowCount;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView5->Rows[dataGridView5->Rows->Count - 1]->Cells[2]->Value = st;

						}
						repeatEntry = true;
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
			}
			else if (S == 332 && truend == 1) {
				if (i < s->Length) {
					st = gcnew String(tmp.c_str());
					i--;
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView3->Rows->Count; j++)
							if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView3->Rows->Add();
							dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[0]->Value = dataGridView3->RowCount;
							dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[2]->Value = "const";

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView3->Rows->Count; j++) {
							if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(30," + dataGridView3->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView3->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						S = 10;
						truend = false;

						tmp = "";
						st = "";
					}
				}
				else if (i == s->Length) {
					st = gcnew String(tmp.c_str());
					if (i != s->Length + 1)
					{
						for (int j = 0; j < dataGridView5->Rows->Count; j++)
							if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st)
							{
								repeatEntry = false;
								break;
							}
						if (repeatEntry)
						{
							dataGridView3->Rows->Add();
							dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[0]->Value = dataGridView3->RowCount;
							dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[1]->Value = st;
							dataGridView3->Rows[dataGridView3->Rows->Count - 1]->Cells[2]->Value = "const";

						}
						repeatEntry = true;
						for (int j = 0; j < dataGridView3->Rows->Count; j++) {
							if (dataGridView3->Rows[j]->Cells[1]->Value->ToString() == st) {
								richTextBox4->Text += "(30," + dataGridView3->Rows[j]->Cells[0]->Value->ToString() + ")";
								richTextBox7->Text += dataGridView3->Rows[j]->Cells[2]->Value->ToString() + " ";
							}
						}
						truend = false;

						S = 10;
						tmp = "";
						st = "";
					}
				}
			}
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ FileName = "";
		if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK) {
			FileName = openFileDialog1->FileName;
		}
		try
		{
			StreamReader^ file = File::OpenText(FileName);
			richTextBox1->Text = file->ReadToEnd();
		}
		catch (Exception^ e)
		{
			richTextBox1->Text = "Файл не был открыт";
		}
	}
	};
}



