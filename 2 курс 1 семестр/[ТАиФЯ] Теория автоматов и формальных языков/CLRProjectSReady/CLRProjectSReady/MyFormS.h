#pragma once

namespace CLRProjectSReady {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyFormS
	/// </summary>
	public ref class MyFormS : public System::Windows::Forms::Form
	{
	public:
		MyFormS(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

		String^ mr = "";

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyFormS()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	protected:

	protected:

	protected:

	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnDel;
	private: System::Windows::Forms::Button^ btnMulty;
	private: System::Windows::Forms::Button^ btnMinus;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ buttonEqually;
	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ btnMR;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ btnClear2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnDel = (gcnew System::Windows::Forms::Button());
			this->btnMulty = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->buttonEqually = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->btnMR = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->btnClear2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(19, 12);
			this->textBox1->MaxLength = 300;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(19, 176);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(44, 38);
			this->btn1->TabIndex = 2;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(69, 176);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(44, 38);
			this->btn2->TabIndex = 3;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(119, 176);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(44, 38);
			this->btn3->TabIndex = 4;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(119, 133);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(44, 38);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(69, 133);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(44, 38);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(19, 133);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(44, 38);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(119, 90);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(44, 38);
			this->btn9->TabIndex = 10;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(69, 90);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(44, 38);
			this->btn8->TabIndex = 9;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(19, 90);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(44, 38);
			this->btn7->TabIndex = 8;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// btnDel
			// 
			this->btnDel->Location = System::Drawing::Point(169, 45);
			this->btnDel->Name = L"btnDel";
			this->btnDel->Size = System::Drawing::Size(44, 38);
			this->btnDel->TabIndex = 11;
			this->btnDel->Text = L"/";
			this->btnDel->UseVisualStyleBackColor = true;
			this->btnDel->Click += gcnew System::EventHandler(this, &MyFormS::btnA_Click);
			// 
			// btnMulty
			// 
			this->btnMulty->Location = System::Drawing::Point(169, 89);
			this->btnMulty->Name = L"btnMulty";
			this->btnMulty->Size = System::Drawing::Size(44, 38);
			this->btnMulty->TabIndex = 12;
			this->btnMulty->Text = L"*";
			this->btnMulty->UseVisualStyleBackColor = true;
			this->btnMulty->Click += gcnew System::EventHandler(this, &MyFormS::btnA_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(169, 133);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(44, 38);
			this->btnMinus->TabIndex = 13;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyFormS::btnA_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(169, 176);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(44, 38);
			this->btnPlus->TabIndex = 14;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyFormS::btnA_Click);
			// 
			// buttonEqually
			// 
			this->buttonEqually->Location = System::Drawing::Point(169, 220);
			this->buttonEqually->Name = L"buttonEqually";
			this->buttonEqually->Size = System::Drawing::Size(44, 38);
			this->buttonEqually->TabIndex = 15;
			this->buttonEqually->Text = L"=";
			this->buttonEqually->UseVisualStyleBackColor = true;
			this->buttonEqually->Click += gcnew System::EventHandler(this, &MyFormS::btnE_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(19, 45);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(44, 38);
			this->buttonClear->TabIndex = 16;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyFormS::buttonClear_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(231, 143);
			this->textBox2->MaxLength = 300;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 20);
			this->textBox2->TabIndex = 17;
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(19, 220);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(44, 38);
			this->btn0->TabIndex = 18;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyFormS::btn_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(231, 12);
			this->textBox3->MaxLength = 300;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(194, 20);
			this->textBox3->TabIndex = 19;
			// 
			// btnMR
			// 
			this->btnMR->Location = System::Drawing::Point(69, 45);
			this->btnMR->Name = L"btnMR";
			this->btnMR->Size = System::Drawing::Size(44, 38);
			this->btnMR->TabIndex = 20;
			this->btnMR->Text = L"MR";
			this->btnMR->UseVisualStyleBackColor = true;
			this->btnMR->Click += gcnew System::EventHandler(this, &MyFormS::btnMR_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(345, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 38);
			this->button1->TabIndex = 21;
			this->button1->Text = L"AUTO";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(231, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 38);
			this->button2->TabIndex = 22;
			this->button2->Text = L"STEP";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(231, 63);
			this->textBox4->MaxLength = 300;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(194, 20);
			this->textBox4->TabIndex = 23;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(231, 37);
			this->textBox5->MaxLength = 300;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(194, 20);
			this->textBox5->TabIndex = 24;
			// 
			// btnClear2
			// 
			this->btnClear2->Location = System::Drawing::Point(231, 169);
			this->btnClear2->Name = L"btnClear2";
			this->btnClear2->Size = System::Drawing::Size(194, 38);
			this->btnClear2->TabIndex = 25;
			this->btnClear2->Text = L"Clear";
			this->btnClear2->UseVisualStyleBackColor = true;
			this->btnClear2->Click += gcnew System::EventHandler(this, &MyFormS::btnClear2_Click);
			// 
			// MyFormS
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(443, 270);
			this->Controls->Add(this->btnClear2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnMR);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonEqually);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btnMulty);
			this->Controls->Add(this->btnDel);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyFormS";
			this->ShowIcon = false;
			this->Text = L"CalculatorS4";
			this->Load += gcnew System::EventHandler(this, &MyFormS::MyFormS_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		#pragma endregion

		private: System::Void MyFormS_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
			int bText = Convert::ToInt32(((Button^)sender)->Text);
			if (textBox1->Text == "0")
				textBox1->Clear();
			textBox1->Text += bText;
		}

		private: System::Void btnA_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ bText = (((Button^)sender)->Text);
			String^ s = textBox1->Text;
			String^ ops = "+-/*";
			String^ a = s->Substring(s->Length - 1);
			bool isEqual = ops->Contains(a);
			if (!isEqual)
				textBox1->Text += bText;
			else
				textBox1->Text = s->Substring(0, s->Length - 1) + bText;
		}

		private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox2->Text = textBox2->Text + "CLEAR";
			textBox1->Text = "0";
		}
		private: System::Void btnE_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ bText = (((Button^)sender)->Text);
			String^ s = textBox1->Text;
			String^ ops = "+-/*";
			String^ a = s->Substring(s->Length - 1);
			bool isEqual = ops->Contains(a);
			if (!isEqual) {
				textBox2->Text = textBox2->Text + textBox1->Text + "=";
				textBox1->Text = "0";
			}
		}
		private: System::Void btnMR_Click(System::Object^ sender, System::EventArgs^ e) {
			mr = textBox1->Text;
			textBox2->Text = textBox2->Text + "MR";
		}
		private: System::Void btnClear2_Click(System::Object^ sender, System::EventArgs^ e) {
			textBox2->Text = "";
		}
	};
}