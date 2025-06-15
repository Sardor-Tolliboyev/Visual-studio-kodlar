#pragma once

namespace _5_topshiriq_timer_ {

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
			sekund = 0;
			minut = 0;
			soat = 0;
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
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label2;
			 int sekund, minut, soat;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(231, 116);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 73);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(231, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Ro\'yxatga qo\'shish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(447, 279);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 69);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Restart";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(228, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 37);
			this->label1->TabIndex = 3;
			this->label1->Text = L"00:00:00";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 34);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(190, 264);
			this->listBox1->TabIndex = 4;
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Ro'yxat:";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 360);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (timer1->Enabled) {
			timer1->Stop();
			button1->Text = L"Start";
		}
		else {
			timer1->Start();
			button1->Text = L"Stop";
		}
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	timer1->Stop();
	sekund = 0;
	minut = 0;
	soat = 0;
	label1->Text = L"00:00:00";
	button1->Text = L"Start";
	listBox1->Items->Clear();
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	listBox1->Items->Add(label1->Text);
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	sekund++;
	if (sekund == 60) {
		sekund = 0;
		minut++;
		if (minut == 60) {
			minut = 0;
			soat++;
		}
	}
	label1->Text = String::Format(L"{0:D2}:{1:D2}:{2:D2}", soat, minut, sekund);
}
};
}
