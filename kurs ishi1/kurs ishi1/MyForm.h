#pragma once
#include "MyForm1.h"

namespace kurs_ishi1 {

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
			int stolRaqami;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::Container^ components;

			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->label1->Location = System::Drawing::Point(65, 257);
				 this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(660, 76);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Stol raqamini tanlang";
				 this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
				 // 
				 // comboBox1
				 // 
				 this->comboBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 35.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->comboBox1->FormattingEnabled = true;
				 this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
					 L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
						 L"9", L"10"
				 });
				 this->comboBox1->Location = System::Drawing::Point(65, 362);
				 this->comboBox1->Margin = System::Windows::Forms::Padding(4);
				 this->comboBox1->Name = L"comboBox1";
				 this->comboBox1->Size = System::Drawing::Size(160, 75);
				 this->comboBox1->TabIndex = 1;
				 // 
				 // button1
				 // 
				 this->button1->BackColor = System::Drawing::Color::Blue;
				 this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->button1->Location = System::Drawing::Point(284, 362);
				 this->button1->Margin = System::Windows::Forms::Padding(4);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(441, 122);
				 this->button1->TabIndex = 2;
				 this->button1->Text = L"Davom etish";
				 this->button1->UseVisualStyleBackColor = false;
				 this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				 // 
				 // button2
				 // 
				 this->button2->BackColor = System::Drawing::Color::Navy;
				 this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(204)));
				 this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
				 this->button2->Location = System::Drawing::Point(739, 472);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(241, 54);
				 this->button2->TabIndex = 6;
				 this->button2->Text = L"Chiqish";
				 this->button2->UseVisualStyleBackColor = false;
				 this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
				 this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->pictureBox1->Location = System::Drawing::Point(364, 21);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(263, 216);
				 this->pictureBox1->TabIndex = 7;
				 this->pictureBox1->TabStop = false;
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
				 this->ClientSize = System::Drawing::Size(992, 567);
				 this->Controls->Add(this->pictureBox1);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->comboBox1);
				 this->Controls->Add(this->label1);
				 this->Margin = System::Windows::Forms::Padding(4);
				 this->Name = L"MyForm";
				 this->Text = L"Stol raqamini tanlang";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem == nullptr) {
			MessageBox::Show("Iltimos, stol raqamini tanlang!", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		int stolRaqami = Int32::Parse(comboBox1->SelectedItem->ToString());
		MyForm1^ form1 = gcnew MyForm1(stolRaqami);
		form1->Show();
		
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
