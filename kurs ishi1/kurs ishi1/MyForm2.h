#pragma once

namespace kurs_ishi1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm2 : public System::Windows::Forms::Form {
	public:
		MyForm2(ListView^ prevListView) {
			InitializeComponent();
			CopyListViewData(prevListView);
		}

	protected:
		~MyForm2() {
			if (components) {
				delete components;
			}
		}

	private:
		System::Windows::Forms::ListView^ listView1;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
		System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
			 System::ComponentModel::Container^ components;

		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::Color::White;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listView1->Location = System::Drawing::Point(12, 51);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(534, 183);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Nomi";
			this->columnHeader1->Width = 245;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Miqdor";
			this->columnHeader2->Width = 142;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Narx";
			this->columnHeader3->Width = 133;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(27, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 52);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Orqaga";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(288, 362);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(181, 97);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Chek chiqarish";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 257);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(223, 49);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Jami: 0 so\'m";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 39);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Ro\'yxat:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(568, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(263, 216);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm2
			// 
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(843, 519);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Name = L"MyForm2";
			this->RightToLeftLayout = true;
			this->Text = L"Buyurtmani tasdiqlash";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		void CopyListViewData(ListView^ prevListView) {
			int totalSum = 0;
			for each (ListViewItem ^ item in prevListView->Items) {
				ListViewItem^ newItem = gcnew ListViewItem(item->SubItems[0]->Text);
				newItem->SubItems->Add(item->SubItems[1]->Text);
				newItem->SubItems->Add(item->SubItems[2]->Text);
				listView1->Items->Add(newItem);

				// Jami summani hisoblash
				totalSum += Convert::ToInt32(item->SubItems[2]->Text);
			}
			label2->Text = "Jami: " + totalSum.ToString() + " so'm";
		}

		void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->Close();
		}

		void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ receipt = "Chek:\n";
			for each (ListViewItem^ item in listView1->Items) {
				receipt += item->SubItems[0]->Text + " - " + item->SubItems[1]->Text + " dona - " + item->SubItems[2]->Text + " so'm\n";
			}
			receipt += "\n" + label2->Text;

			MessageBox::Show(receipt, "Chek", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	};
}
