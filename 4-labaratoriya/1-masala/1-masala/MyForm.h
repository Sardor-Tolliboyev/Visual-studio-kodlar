#pragma once

namespace _1_masala {

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
	private: System::Windows::Forms::Label^  label1;
	protected:


	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bayram kuniga to‘g‘ri kelishini aniqlash";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(227, 169);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 41);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Natija";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(54, 104);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(423, 263);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			DateTime hozir = DateTime::Now.Date;     	
			DateTime tanlanganSana = dateTimePicker1->Value.Date;

			if ((tanlanganSana.Month == 1 && tanlanganSana.Day == 1) ||
				(tanlanganSana.Month == 3 && tanlanganSana.Day == 8) ||
				(tanlanganSana.Month == 3 && tanlanganSana.Day == 21) ||
				(tanlanganSana.Month == 5 && tanlanganSana.Day == 9) ||
				(tanlanganSana.Month == 9 && tanlanganSana.Day == 1) ||
				(tanlanganSana.Month == 10 && tanlanganSana.Day == 1) ||
				(tanlanganSana.Month == 12 && tanlanganSana.Day == 8)) {
				MessageBox::Show("Bu sana bayram kuniga to‘g‘ri keladi!");
			}
			else {
				MessageBox::Show("Bu sana bayram kuniga to‘g‘ri kelmaydi!");
			}
		}
		catch (Exception^ ex) {
			
			MessageBox::Show("Xato: " + ex->Message);
		}
	}
	};
}
