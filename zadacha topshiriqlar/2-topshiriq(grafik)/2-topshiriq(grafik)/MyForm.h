#pragma once

#include <cmath>
#include <Windows.h>
#include <gdiplus.h>

#pragma comment (lib,"Gdiplus.lib")

namespace _2_topshiriq_grafik_ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			int graphMode = 0;
			InitializeComponent();
			graphMode = 0;
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Panel^ panel1;
		int graphMode;
	private: System::Windows::Forms::Label^  label1;

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(198, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Sinus grafigi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Tangens grafigi";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(51, 74);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(598, 300);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Wide Latin", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(268, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 26);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Grafik";
			// 
			// MyForm
			// 
			this->ClientSize = System::Drawing::Size(692, 450);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			int w = panel1->Width, h = panel1->Height;
			int cx = w / 2, cy = h / 2;

			// O‘qlar
			g->DrawLine(Pens::Black, 0, cy, w, cy); // Gorizontal chiziq
			g->DrawLine(Pens::Black, cx, 0, cx, h); // Vertikal chiziq

													// Agar grafik tanlanmagan bo‘lsa, chizmaymiz
			if (graphMode == 0) return;

			// Grafikni nuqtalar bilan chizamiz
			for (int i = -250; i < 250; i++) {
				float x = i * 0.05f;
				float y = (graphMode == 1) ? sin(x * 3) * 50 : tan(x) * 10;
				if (graphMode == 2 && abs(y) > h / 2) continue; // Tangens limit

				int px = cx + i, py = cy - (int)y;
				g->FillRectangle(Brushes::Red, px, py, 2, 2); // Grafik nuqtasi
			}
		}

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { graphMode = 1; panel1->Invalidate(); }
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { graphMode = 2; panel1->Invalidate(); }


	};
}
