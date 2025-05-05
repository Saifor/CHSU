#pragma once
#include <sstream>
#include <string>
#include <cstdlib>
#include <stdexcept>
namespace App {
#include "Vector.h"
#include "Laptop.h"
#include "Personal.h"
#include "Server.h"
#include "Smartphone.h"
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ Lap;
	private: System::Windows::Forms::Button^ Ser;
	private: System::Windows::Forms::Button^ pers;
	private: System::Windows::Forms::Button^ Smart;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ ok;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Lap = (gcnew System::Windows::Forms::Button());
			this->Ser = (gcnew System::Windows::Forms::Button());
			this->pers = (gcnew System::Windows::Forms::Button());
			this->Smart = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ok = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 642);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Запуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Lap
			// 
			this->Lap->Enabled = false;
			this->Lap->Location = System::Drawing::Point(451, 265);
			this->Lap->Name = L"Lap";
			this->Lap->Size = System::Drawing::Size(100, 50);
			this->Lap->TabIndex = 1;
			this->Lap->Text = L"Laptop";
			this->Lap->UseVisualStyleBackColor = true;
			this->Lap->Visible = false;
			// 
			// Ser
			// 
			this->Ser->Enabled = false;
			this->Ser->Location = System::Drawing::Point(557, 265);
			this->Ser->Name = L"Ser";
			this->Ser->Size = System::Drawing::Size(100, 50);
			this->Ser->TabIndex = 2;
			this->Ser->Text = L"Server";
			this->Ser->UseVisualStyleBackColor = true;
			this->Ser->Visible = false;
			// 
			// pers
			// 
			this->pers->Enabled = false;
			this->pers->Location = System::Drawing::Point(663, 265);
			this->pers->Name = L"pers";
			this->pers->Size = System::Drawing::Size(100, 50);
			this->pers->TabIndex = 3;
			this->pers->Text = L"Personal";
			this->pers->UseVisualStyleBackColor = true;
			this->pers->Visible = false;
			// 
			// Smart
			// 
			this->Smart->Enabled = false;
			this->Smart->Location = System::Drawing::Point(557, 321);
			this->Smart->Name = L"Smart";
			this->Smart->Size = System::Drawing::Size(100, 50);
			this->Smart->TabIndex = 4;
			this->Smart->Text = L"Smartphone";
			this->Smart->UseVisualStyleBackColor = true;
			this->Smart->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(410, 124);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(412, 31);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Выберете нужный вам тип ЭВМ";
			this->label1->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(557, 281);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Visible = false;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Enabled = false;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(306, 282);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Введите кол-во элементов вектора:";
			this->label2->Visible = false;
			// 
			// ok
			// 
			this->ok->Enabled = false;
			this->ok->Location = System::Drawing::Point(663, 278);
			this->ok->Name = L"ok";
			this->ok->Size = System::Drawing::Size(75, 23);
			this->ok->TabIndex = 8;
			this->ok->Text = L"ОК";
			this->ok->UseVisualStyleBackColor = true;
			this->ok->Visible = false;
			this->ok->Click += gcnew System::EventHandler(this, &MyForm::ok_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1166, 689);
			this->Controls->Add(this->ok);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Smart);
			this->Controls->Add(this->pers);
			this->Controls->Add(this->Ser);
			this->Controls->Add(this->Lap);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int size = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label2->Visible = true;
		label2->Enabled = true;
		textBox1->Visible = true;
		textBox1->Enabled = true;
		ok->Visible = true;
		ok->Enabled = true;
	}
	private: System::Void ok_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ str = textBox1->Text;
		if (textBox1->Text == "") {
			MessageBox::Show("Введите размер", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (textBox1->Text == "0") {
			MessageBox::Show("Размер не может быть равен нулю", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else  {
			size = Int32::Parse(textBox1->Text);
			Stack<int> st(2);
			label2->Visible = false;
			label2->Enabled = false;
			textBox1->Visible = false;
			textBox1->Enabled = false;
			ok->Visible = false;
			ok->Enabled = false;
			button1->Enabled = false;
			button1->Visible = false;
			label1->Visible = true;
			Lap->Enabled = true;
			Lap->Visible = true;
			pers->Enabled = true;
			pers->Visible = true;
			Ser->Enabled = true;
			Ser->Visible = true;
			Smart->Enabled = true;
			Smart->Visible = true;
		}
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (e->KeyChar != '0' && e->KeyChar != '1' && e->KeyChar != '2' && e->KeyChar != '3' && e->KeyChar != '4' && e->KeyChar != '5' && e->KeyChar != '6' && e->KeyChar != '7' && e->KeyChar != '8' && e->KeyChar != '9' && e->KeyChar != '\b') {
		e->Handled = true;
	}
}
};
}
