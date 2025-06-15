#pragma once

namespace _4_topshiriq_vaqt_ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			this->timer1->Interval = 1000; // 1 soniya
			this->timer1->Start();
			this->DoubleBuffered = true;
		}

	protected:
		~MyForm() {
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
			 void InitializeComponent(void) {
				 this->components = (gcnew System::ComponentModel::Container());
				 this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));

				 this->SuspendLayout();
				 // 
				 // timer1
				 // 
				 this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
				 // 
				 // MyForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(700, 300);
				 this->BackColor = System::Drawing::Color::Black;
				 this->Name = L"MyForm";
				 this->Text = L"MyForm";
				 this->Paint += gcnew PaintEventHandler(this, &MyForm::OnPaint);
				 this->ResumeLayout(false);
			 }
#pragma endregion

	private:
		void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			this->Invalidate(); // Qayta chizish
		}

		void DrawSegment(Graphics^ g, int x, int y, int width, int height, bool on) {
			SolidBrush^ brush = gcnew SolidBrush(on ? Color::White : Color::DarkSlateGray);
			g->FillRectangle(brush, x, y, width, height);
			delete brush;
		}

		void DrawDigit(Graphics^ g, int digit, int x, int y) {
			bool segments[10][7] = {
				{ 1,1,1,0,1,1,1 }, // 0
				{ 0,0,1,0,0,1,0 }, // 1
				{ 1,0,1,1,1,0,1 }, // 2
				{ 1,0,1,1,0,1,1 }, // 3
				{ 0,1,1,1,0,1,0 }, // 4
				{ 1,1,0,1,0,1,1 }, // 5
				{ 1,1,0,1,1,1,1 }, // 6
				{ 1,0,1,0,0,1,0 }, // 7
				{ 1,1,1,1,1,1,1 }, // 8
				{ 1,1,1,1,0,1,1 }  // 9
			};

			int segWidth = 10, segLength = 40;

			// Segmentlarni chizish
			DrawSegment(g, x + 10, y, segLength, segWidth, segments[digit][0]);  // A
			DrawSegment(g, x, y + 10, segWidth, segLength, segments[digit][1]); // B
			DrawSegment(g, x + 50, y + 10, segWidth, segLength, segments[digit][2]); // C
			DrawSegment(g, x + 10, y + 50, segLength, segWidth, segments[digit][3]); // D
			DrawSegment(g, x, y + 60, segWidth, segLength, segments[digit][4]); // E
			DrawSegment(g, x + 50, y + 60, segWidth, segLength, segments[digit][5]); // F
			DrawSegment(g, x + 10, y + 100, segLength, segWidth, segments[digit][6]); // G
		}

		void DrawTime(Graphics^ g, String^ timeString, int x, int y) {
			for (int i = 0; i < timeString->Length; i++) {
				if (timeString[i] == ':') {
					g->FillEllipse(Brushes::Cyan, x + 15, y + 35, 10, 10);
					g->FillEllipse(Brushes::Cyan, x + 15, y + 65, 10, 10);
					x += 40;
				}
				else {
					DrawDigit(g, timeString[i] - '0', x, y);
					x += 70;
				}
			}
		}

		void OnPaint(Object^ sender, PaintEventArgs^ e) {
			Graphics^ g = e->Graphics;
			g->SmoothingMode = System::Drawing::Drawing2D::SmoothingMode::AntiAlias;
			DateTime now = DateTime::Now;
			String^ timeString = now.ToString("HH:mm:ss");
			DrawTime(g, timeString, 40, 40);
		}
	};
}
