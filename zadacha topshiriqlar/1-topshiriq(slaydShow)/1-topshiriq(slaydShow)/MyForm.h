#pragma once
#include <windows.h>
#include <filesystem>
#include <string>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace _1_topshiriq_slaydShow_ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: array<String^>^ imageFiles;
			int currentIndex = 0;
			bool isPlaying = false;
	private: System::Windows::Forms::ListBox^  listBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;





	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(10, 45);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(173, 251);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(205, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 250);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(579, 120);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(124, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Boshlash";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(576, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Timer:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(633, 47);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(53, 20);
			this->textBox1->TabIndex = 9;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Snap ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(225, 309);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 29);
			this->button2->TabIndex = 10;
			this->button2->Text = L"<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(366, 309);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 29);
			this->button3->TabIndex = 11;
			this->button3->Text = L">";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(579, 309);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 43);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Papka";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(200, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 13;
			this->label1->Text = L"SlaydShow";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(579, 220);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 17);
			this->radioButton1->TabIndex = 14;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Avto-Slayd";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(577, 243);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(99, 17);
			this->radioButton2->TabIndex = 15;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Qo\'lda o\'tkazish";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 384);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void ShowImage() {
			if (imageFiles != nullptr && imageFiles->Length > 0) {
				if (pictureBox1->Image != nullptr) {
					delete pictureBox1->Image;
					pictureBox1->Image = nullptr;
				}
				pictureBox1->Image = Image::FromFile(imageFiles[currentIndex]);
				pictureBox1->SizeMode = PictureBoxSizeMode::StretchImage;
			}
			else {
				MessageBox::Show(L"Rasmlar mavjud emas!", L"Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
#pragma endregion
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		int interval;
		if (Int32::TryParse(textBox1->Text, interval) && interval > 0) {
			timer1->Interval = interval * 1000;
		}
		else {
			MessageBox::Show(L"Intervalni to'g'ri kiriting!");
			return;
		}

		if (!isPlaying) {

			timer1->Start();
			button1->Text = L"Stop";
			isPlaying = true;
		}
		else {

			timer1->Stop();
			button1->Text = L"Start";
			isPlaying = false;
		}
	}

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	
	if (imageFiles != nullptr && imageFiles->Length > 0) {
		currentIndex++; 

		if (currentIndex >= imageFiles->Length) {
			currentIndex = 0;
		}

		pictureBox1->Image = Image::FromFile(imageFiles[currentIndex]);
	}
}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (imageFiles != nullptr && imageFiles->Length > 0) {
			currentIndex = (currentIndex - 1 + imageFiles->Length) % imageFiles->Length;
			ShowImage();
		}
		else {
			MessageBox::Show(L"Hech qanday rasm yuklanmagan!", L"Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		if (imageFiles != nullptr && imageFiles->Length > 0) {
			currentIndex = (currentIndex + 1) % imageFiles->Length;
			ShowImage();
		}
		else {
			MessageBox::Show(L"Hech qanday rasm yuklanmagan!", L"Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		FolderBrowserDialog^ folderDialog = gcnew FolderBrowserDialog();
		if (folderDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			imageFiles = Directory::GetFiles(folderDialog->SelectedPath, "*.jpg");
			listBox1->Items->Clear();
			listBox1->Items->AddRange(imageFiles);
			if (imageFiles->Length > 0) {
				currentIndex = 0;
				ShowImage();
			}
		}
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (imageFiles != nullptr && imageFiles->Length > 0 && listBox1->SelectedIndex >= 0) {
			currentIndex = listBox1->SelectedIndex;
			ShowImage();
		}
		else {
			MessageBox::Show(L"Yaroqli rasm tanlanmadi!", L"Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		int interval;
		if (Int32::TryParse(textBox1->Text, interval) && interval > 0) {
			timer1->Interval = interval * 1000;
			if (!isPlaying) {
				button1->Text = L"Start"; 
			}
		}
		else {
			button1->Text = L"Boshlash";
		}
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton1->Checked) {
			timer1->Start();
			isPlaying = true;
			button1->Text = L"Stop";
			button1->Enabled = true; 
			button2->Enabled = false; 
			button3->Enabled = false;
		}	
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (radioButton2->Checked) {
			timer1->Stop(); 
			button2->Enabled = true; 
			button3->Enabled = true;
			button1->Enabled = false;
		}
	}
};
}