#pragma once
#include "MyForm2.h"

namespace kurs_ishi1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm1 : public System::Windows::Forms::Form {
	public:
		MyForm1(int stolRaqami) {
			InitializeComponent();
			label1->Text = "Tanlangan stol: " + stolRaqami;
		}

	protected:
		~MyForm1() {
			if (components) {
				delete components;
			}
		}

	private:
		System::Windows::Forms::Label^ label1;
		System::Windows::Forms::ListBox^ listBox1;
		System::Windows::Forms::NumericUpDown^ numericUpDown1;
		System::Windows::Forms::ListView^ listView1;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label3;
			 System::ComponentModel::Container^ components;

		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 31);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Tanlangan stol: ";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->ItemHeight = 19;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(39) {
				L"🍽 Ovqatlar", L"🍕 Pitsa - 40000", L"🍛 Osh - 35000",
					L"🥟 Manti - 25000", L"🍜 Lag\'mon - 30000", L"🥣 Shurbo - 30000", L"🍢 Shashlik - 25000", L"🍗 Tovuqli steyk - 45000", L"🍟 Kartoshka fri - 15000",
					L"🍔 Burger - 28000", L"🌯 Lavash - 27000", L"🌭 Hot-dog - 20000", L"🐟 Baliq taomi - 50000", L" ", L"🥗 Salatlar", L"🥬 Sezar salati - 25000",
					L"🥗 Grekcha salat - 22000", L"🥔 Olivye - 18000", L"🥕 Vinaigret - 15000", L"🍗 Tovuqli salat - 20000", L"🌶 Koreyscha sabzi - 12000",
					L"🦐 Qisqichbaqasimon salat - 23000", L"🥒 Sabzavotli salat - 14000", L" ", L"🥤 Ichimliklar", L"🍵 Choy - 5000", L"☕ Kofe - 10000",
					L"🥤 Pepsi - 8000", L"🧃 Sharbat - 12000", L"🍋 Limonad - 15000", L"🥛 Milkshake - 18000", L"🍓 Smoothie - 20000", L"💧 Mineral suv - 7000",
					L"☕ Espresso - 11000", L"☕ Cappuccino - 13000", L"☕ Americano - 12000", L"☕ Mocha - 14000", L"🍫 Kakao - 10000", L"🍫 Issiq shokolad - 15000"
			});
			this->listBox1->Location = System::Drawing::Point(20, 90);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(276, 289);
			this->listBox1->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDown1->Location = System::Drawing::Point(117, 390);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(50, 26);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listView1->Location = System::Drawing::Point(334, 31);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(362, 327);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Nomi";
			this->columnHeader1->Width = 150;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Miqdor";
			this->columnHeader2->Width = 85;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Narxi";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Magenta;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(45, 434);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Qo\'shish";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Navy;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(359, 364);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 43);
			this->button2->TabIndex = 5;
			this->button2->Text = L"To‘lovga o‘tish";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(21, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 39);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ro\'yxat:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(22, 389);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 27);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Soni:";
			// 
			// MyForm1
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(801, 490);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm1";
			this->Text = L"Buyurtma";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			try {
				if (listBox1->SelectedIndex != -1) {
					String^ tanlanganMahsulot = listBox1->SelectedItem->ToString();
					array<String^>^ parts = tanlanganMahsulot->Split('-');

					if (parts->Length < 2) {
						throw gcnew Exception("Noto'g'ri formatdagi mahsulot ma'lumoti!");
					}

					String^ mahsulotNomi = parts[0]->Trim();
					int narx = Convert::ToInt32(parts[1]->Trim());
					int miqdor = Convert::ToInt32(numericUpDown1->Value);

					ListViewItem^ item = gcnew ListViewItem(mahsulotNomi);
					item->SubItems->Add(miqdor.ToString());
					item->SubItems->Add((narx * miqdor).ToString());
					listView1->Items->Add(item);
				}
				else {
					MessageBox::Show("Iltimos, mahsulotni tanlang!", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			catch (FormatException^ ex) {
				MessageBox::Show("Narx yoki miqdor noto‘g‘ri formatda! Iltimos, to‘g‘ri qiymat kiriting.", "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Xatolik yuz berdi: " + ex->Message, "Xatolik", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

		void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			MyForm2^ form2 = gcnew MyForm2(listView1);
			form2->Show();
			this->Hide();
		}
};
}
