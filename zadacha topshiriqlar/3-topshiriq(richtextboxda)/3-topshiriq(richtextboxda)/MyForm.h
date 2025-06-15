#pragma once

namespace _3_topshiriq_richtextboxda_ {

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
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 78);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(635, 282);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"Bu RichTextBox komponentasi";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(40, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 64);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(118, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 64);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(150, 384);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(102, 20);
			this->textBox1->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(271, 383);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 21);
			this->button3->TabIndex = 4;
			this->button3->Text = L"QIDIRISH";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(98, 391);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"So\'z:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 455);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		SaveFileDialog^ saveFile1 = gcnew SaveFileDialog;
		saveFile1->DefaultExt = "*.rtf";
		saveFile1->Filter = "RTF Files|*.rtf";
		if (saveFile1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
			saveFile1->FileName->Length > 0)
		{
			richTextBox1->SaveFile(saveFile1->FileName, RichTextBoxStreamType::PlainText);
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			OpenFileDialog^ openFile1 = gcnew OpenFileDialog;
			openFile1->DefaultExt = "*.rtf";
			openFile1->Filter = "RTF Files|*.rtf";

			if (openFile1->ShowDialog() == System::Windows::Forms::DialogResult::OK &&
				openFile1->FileName->Length > 0)
			{
				try
				{
					richTextBox1->LoadFile(openFile1->FileName);
				}
				catch (System::IO::IOException^ ex)
				{
					MessageBox::Show("Fayl yuklashda xatolik yuz berdi: " + ex->Message,
						"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				catch (System::UnauthorizedAccessException^ ex)
				{
					MessageBox::Show("Faylga ruxsat yo‘q: " + ex->Message,
						"Ruxsat xatosi", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
				catch (System::Exception^ ex)
				{
					MessageBox::Show("Noma'lum xatolik yuz berdi: " + ex->Message,
						"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}
		catch (System::Exception^ ex)
		{
			MessageBox::Show("Fayl tanlashda xatolik yuz berdi: " + ex->Message,
				"Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ x = textBox1->Text;
		if (x->Length == 0) {
			MessageBox::Show("Iltimos, qidiriladigan so‘z kiriting!", "Ogohlantirish", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int uzunligi = richTextBox1->Text->Length;
		richTextBox1->Select(0, uzunligi);
		richTextBox1->SelectionColor = System::Drawing::Color::Black;

		for (int i = 0; i < uzunligi; ) {
			int belgilash = richTextBox1->Find(x, i, RichTextBoxFinds::None);
			if (belgilash == -1) break;

			richTextBox1->Select(belgilash, x->Length);
			richTextBox1->SelectionColor = System::Drawing::Color::Blue;

			i = belgilash + x->Length;
		}
	}
	};
}
