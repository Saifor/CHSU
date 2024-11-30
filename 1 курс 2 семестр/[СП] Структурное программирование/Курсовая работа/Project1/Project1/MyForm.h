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
	private: Color ellipseColor = Color::FromArgb(133, 108, 94);
	private: Color arcColor = Color::FromArgb(133, 108, 94);
	private: Color backColor = Color::FromArgb(70, 82, 76);
	private: Color triangleColor = Color::FromArgb(252, 245, 232);

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TrackBar^ trackBar2;
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
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Location = System::Drawing::Point(9, 10);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->MaximumSize = System::Drawing::Size(1200, 1100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(393, 385);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(454, 284);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Нарисовать";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(471, 164);
			this->trackBar1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->trackBar1->Minimum = 1;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(136, 37);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Value = 1;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::IndianRed;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(454, 38);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Цвет 1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(550, 38);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(83, 38);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Цвет 2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::IndianRed;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(454, 91);
			this->button4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 38);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Цвет 3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::IndianRed;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(550, 91);
			this->button5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(83, 38);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Цвет 4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::IndianRed;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(454, 328);
			this->button6->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(179, 38);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Сохранить";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(468, 146);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(152, 16);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Количество итераций";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(479, 211);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(129, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Качетсво рендера";
			// 
			// trackBar2
			// 
			this->trackBar2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(471, 234);
			this->trackBar2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->trackBar2->Minimum = 1;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(136, 37);
			this->trackBar2->TabIndex = 9;
			this->trackBar2->Value = 1;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(670, 423);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MinimumSize = System::Drawing::Size(678, 407);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Орнамент";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void drawOrnament(Graphics^ gr, int x, int y, int width, int height) {
		array<array<Point>^>^ triangles = {
			{
				Point(x, y + height /3),
				Point(x, y),
				Point(x + width/3, y)
			},
			{
				Point(x, y + 2*height / 3),
				Point(x, y + height),
				Point(x + width / 3, y + height)
			},
			{
				Point(x + 2*width / 3, y + height),
				Point(x + width, y + height),
				Point(x + width, y + 2*height / 3)
			},
			{
				Point(x + width, y + height / 3),
				Point(x + width, y),
				Point(x + 2*width / 3, y)
			},
			{
				Point(x + width / 3, y + 2*height / 3),
				Point(x + width / 2, y + height / 3),
				Point(x + 2*width / 3, y + 2 * height / 3)
			},
			{
				Point(x + width / 3, y + height / 3),
				Point(x + width / 2, y + 2 * height / 3),
				Point(x + 2 * width / 3, y + height / 3)
			}
		};
		for (int i = 0; i < triangles->Length; i++) {
			gr->FillPolygon(gcnew SolidBrush(triangleColor), triangles[i]);
		};
		gr->DrawArc(gcnew Pen(arcColor, width / 14), x - 2 * width / 3 , y - 2 * height / 3, width, height, 17, 56);
		gr->DrawArc(gcnew Pen(arcColor, width / 14), x + 2 * width / 3, y - 2 * height / 3, width, height, 108, 55);
		gr->DrawArc(gcnew Pen(arcColor, width / 14), x + 2 * width / 3, y + 2 * height / 3, width, height, 198, 55);
		gr->DrawArc(gcnew Pen(arcColor, width / 14), x - 2 * width / 3, y + 2 * height / 3, width, height, 288, 54);
		gr->FillEllipse(gcnew SolidBrush(ellipseColor), x + width / 8 * 3, y + height / 8 * 3, width / 4, height / 4);

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ bitmap = gcnew Bitmap(500 * trackBar2->Value, 500 * trackBar2->Value);
		Graphics^ gr = Graphics::FromImage(bitmap);
		gr->FillRectangle(gcnew SolidBrush(backColor), 0, 0, bitmap->Width, bitmap->Height);
		for (int i = 0; i < trackBar1->Value; i++)
			for (int j = 0; j < trackBar1->Value; j++)
				drawOrnament(
					gr,
					bitmap->Width / trackBar1->Value * i,
					bitmap->Height / trackBar1->Value * j,
					bitmap->Width / trackBar1->Value,
					bitmap->Height / trackBar1->Value
				);
		pictureBox1->Image = bitmap;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		ellipseColor = colorDialog1->Color;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		triangleColor = colorDialog1->Color;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		arcColor = colorDialog1->Color;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		backColor = colorDialog1->Color;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (pictureBox1->Image) {
			String^ filename = "image.jpg";
			pictureBox1->Image->Save(filename, System::Drawing::Imaging::ImageFormat::Jpeg);
			MessageBox::Show("Орнамент сохранён под именем " + filename, "Файл сохранён");
		}
		else {
			MessageBox::Show("Орнамент отсутствует", "Ошибка!");
		}
	}

};
}
