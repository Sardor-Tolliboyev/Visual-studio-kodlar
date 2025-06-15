	#pragma once

	namespace _6_topshiriq__proggresbar_ {

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
		private: System::Windows::Forms::ProgressBar^  progressBar1;
		protected:
		private: System::Windows::Forms::Timer^  timer1;
		private: System::Windows::Forms::DataGridView^  dataGridView1;


		private: System::Windows::Forms::Label^  label1;
		private: System::Windows::Forms::Button^  button1;
		private: System::Windows::Forms::Label^  label2;
		private: System::Windows::Forms::Label^  label3;
		private: System::Windows::Forms::TextBox^  textBox1;
		private: System::Windows::Forms::TextBox^  textBox2;
		private: System::Windows::Forms::Label^  label4;
		private: System::Windows::Forms::Label^  label5;
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
				this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
				this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
				this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				this->label1 = (gcnew System::Windows::Forms::Label());
				this->button1 = (gcnew System::Windows::Forms::Button());
				this->label2 = (gcnew System::Windows::Forms::Label());
				this->label3 = (gcnew System::Windows::Forms::Label());
				this->textBox1 = (gcnew System::Windows::Forms::TextBox());
				this->textBox2 = (gcnew System::Windows::Forms::TextBox());
				this->label4 = (gcnew System::Windows::Forms::Label());
				this->label5 = (gcnew System::Windows::Forms::Label());
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				this->SuspendLayout();
				// 
				// progressBar1
				// 
				this->progressBar1->Location = System::Drawing::Point(162, 252);
				this->progressBar1->Name = L"progressBar1";
				this->progressBar1->Size = System::Drawing::Size(343, 136);
				this->progressBar1->TabIndex = 5;
				// 
				// timer1
				// 
				this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
				// 
				// dataGridView1
				// 
				this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				this->dataGridView1->Location = System::Drawing::Point(162, 28);
				this->dataGridView1->Name = L"dataGridView1";
				this->dataGridView1->Size = System::Drawing::Size(252, 175);
				this->dataGridView1->TabIndex = 1;
				// 
				// label1
				// 
				this->label1->AutoSize = true;
				this->label1->Location = System::Drawing::Point(159, 224);
				this->label1->Name = L"label1";
				this->label1->Size = System::Drawing::Size(93, 13);
				this->label1->TabIndex = 4;
				this->label1->Text = L"O‘rtacha qiymat: 0";
				// 
				// button1
				// 
				this->button1->Location = System::Drawing::Point(430, 214);
				this->button1->Name = L"button1";
				this->button1->Size = System::Drawing::Size(75, 23);
				this->button1->TabIndex = 3;
				this->button1->Text = L"Hisobla";
				this->button1->UseVisualStyleBackColor = true;
				this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
				// 
				// label2
				// 
				this->label2->AutoSize = true;
				this->label2->Location = System::Drawing::Point(325, 315);
				this->label2->Name = L"label2";
				this->label2->Size = System::Drawing::Size(10, 13);
				this->label2->TabIndex = 6;
				this->label2->Text = L"-";
				// 
				// label3
				// 
				this->label3->AutoSize = true;
				this->label3->Location = System::Drawing::Point(309, 410);
				this->label3->Name = L"label3";
				this->label3->Size = System::Drawing::Size(146, 13);
				this->label3->TabIndex = 7;
				this->label3->Text = L"Hisoblash uchun ketgan vaqt";
				// 
				// textBox1
				// 
				this->textBox1->Location = System::Drawing::Point(86, 28);
				this->textBox1->Name = L"textBox1";
				this->textBox1->Size = System::Drawing::Size(40, 20);
				this->textBox1->TabIndex = 8;
				// 
				// textBox2
				// 
				this->textBox2->Location = System::Drawing::Point(86, 69);
				this->textBox2->Name = L"textBox2";
				this->textBox2->Size = System::Drawing::Size(40, 20);
				this->textBox2->TabIndex = 9;
				// 
				// label4
				// 
				this->label4->AutoSize = true;
				this->label4->Location = System::Drawing::Point(45, 31);
				this->label4->Name = L"label4";
				this->label4->Size = System::Drawing::Size(18, 13);
				this->label4->TabIndex = 10;
				this->label4->Text = L"N:";
				// 
				// label5
				// 
				this->label5->AutoSize = true;
				this->label5->Location = System::Drawing::Point(45, 69);
				this->label5->Name = L"label5";
				this->label5->Size = System::Drawing::Size(19, 13);
				this->label5->TabIndex = 11;
				this->label5->Text = L"M:";
				// 
				// MyForm
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->ClientSize = System::Drawing::Size(685, 451);
				this->Controls->Add(this->label5);
				this->Controls->Add(this->label4);
				this->Controls->Add(this->textBox2);
				this->Controls->Add(this->textBox1);
				this->Controls->Add(this->label3);
				this->Controls->Add(this->label2);
				this->Controls->Add(this->button1);
				this->Controls->Add(this->label1);
				this->Controls->Add(this->dataGridView1);
				this->Controls->Add(this->progressBar1);
				this->Name = L"MyForm";
				this->Text = L"MyForm";
				(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				this->ResumeLayout(false);
				this->PerformLayout();

			}
	#pragma endregion
			private: int elapsedTime;
				private: System::Void OnCalculate() {
					int N = Convert::ToInt32(textBox1->Text);
					int M = Convert::ToInt32(textBox2->Text);

					double sum = 0.0;
					int totalElements = N * M;

					Random^ rand = gcnew Random();
					progressBar1->Minimum = 0;
					progressBar1->Maximum = N * M; // ✅ Progress bar umumiy elementlar soniga mos
					progressBar1->Value = 0;

					elapsedTime = 0; // Vaqtni noldan boshlaymiz
					timer1->Interval = 1; // 1 ms da yangilanadi
					timer1->Start(); // Timer ishga tushadi

									 // DataGridView ustunlarini tozalash va yangi ustunlarni qo'shish
					dataGridView1->Columns->Clear();
					for (int j = 0; j < M; j++) {
						DataGridViewTextBoxColumn^ column = gcnew DataGridViewTextBoxColumn();
						column->HeaderText = "Col " + j;
						column->Name = "Col" + j;
						column->Width = 50;
						dataGridView1->Columns->Add(column);
					}

					// Matritsani yaratish va to'ldirish
					for (int i = 0; i < N; i++) {
						dataGridView1->Rows->Add();
						for (int j = 0; j < M; j++) {
							int val1 = rand->Next(1, 100);
							int val2 = rand->Next(1, 100);
							int result = val1 + val2;
							dataGridView1->Rows[i]->Cells[j]->Value = result;
							sum += result;

							progressBar1->Value++; // ✅ Progress bar 1 qadam oldinga
						}

						// % foizni label2 da chiqarish
						double percentage = ((progressBar1->Value) / (double)(N * M)) * 100;
						label2->Text = percentage.ToString("F0") + "%";

						Application::DoEvents();
					}

					double avgValue = sum / totalElements;
					label1->Text = "O‘rtacha qiymat: " + avgValue.ToString("F2");

					timer1->Stop();
				}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		OnCalculate();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		elapsedTime++; // Har 1 ms ortib boradi
		label3->Text = "Hisoblash vaqti: " + (elapsedTime / 1000.0).ToString("F3") + " s";
	}
	};
	}
