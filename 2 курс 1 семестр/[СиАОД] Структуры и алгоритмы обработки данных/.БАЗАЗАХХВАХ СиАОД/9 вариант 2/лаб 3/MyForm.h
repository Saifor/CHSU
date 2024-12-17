#pragma once

namespace archiver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ compress_button;
	private: System::Windows::Forms::Button^ decomress_button;
	private: System::Windows::Forms::Button^ select_file_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ input_file_textbox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ output_file_textbox;




	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
		String^ input_file_name;
		String^ output_file_name;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->compress_button = (gcnew System::Windows::Forms::Button());
			this->decomress_button = (gcnew System::Windows::Forms::Button());
			this->select_file_button = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->input_file_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->output_file_textbox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// compress_button
			// 
			this->compress_button->Enabled = false;
			this->compress_button->Location = System::Drawing::Point(13, 177);
			this->compress_button->Name = L"compress_button";
			this->compress_button->Size = System::Drawing::Size(159, 23);
			this->compress_button->TabIndex = 0;
			this->compress_button->Text = L"Compress";
			this->compress_button->UseVisualStyleBackColor = true;
			this->compress_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// decomress_button
			// 
			this->decomress_button->Enabled = false;
			this->decomress_button->Location = System::Drawing::Point(178, 177);
			this->decomress_button->Name = L"decomress_button";
			this->decomress_button->Size = System::Drawing::Size(151, 23);
			this->decomress_button->TabIndex = 1;
			this->decomress_button->Text = L"Decompress";
			this->decomress_button->UseVisualStyleBackColor = true;
			// 
			// select_file_button
			// 
			this->select_file_button->Location = System::Drawing::Point(13, 148);
			this->select_file_button->Name = L"select_file_button";
			this->select_file_button->Size = System::Drawing::Size(316, 23);
			this->select_file_button->TabIndex = 2;
			this->select_file_button->Text = L"Select file";
			this->select_file_button->UseVisualStyleBackColor = true;
			this->select_file_button->Click += gcnew System::EventHandler(this, &MyForm::select_file_button_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"File selected:";
			// 
			// input_file_textbox
			// 
			this->input_file_textbox->Location = System::Drawing::Point(13, 30);
			this->input_file_textbox->Name = L"input_file_textbox";
			this->input_file_textbox->ReadOnly = true;
			this->input_file_textbox->Size = System::Drawing::Size(316, 20);
			this->input_file_textbox->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 57);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Output file location:";
			// 
			// output_file_textbox
			// 
			this->output_file_textbox->Location = System::Drawing::Point(13, 74);
			this->output_file_textbox->Name = L"output_file_textbox";
			this->output_file_textbox->ReadOnly = true;
			this->output_file_textbox->Size = System::Drawing::Size(316, 20);
			this->output_file_textbox->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(347, 225);
			this->Controls->Add(this->output_file_textbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->input_file_textbox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->select_file_button);
			this->Controls->Add(this->decomress_button);
			this->Controls->Add(this->compress_button);
			this->Name = L"MyForm";
			this->Text = L"Archiver";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void select_file_button_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = ".\\";
		openFileDialog1->Filter = "All files (*.*)|*.*|compressed files (*.arc)|*.arc";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			input_file_name = openFileDialog1->FileName;
			input_file_textbox->Text = input_file_name;
			compress_button->Enabled = true;
			decomress_button->Enabled = true;
		}
	}
};
}
