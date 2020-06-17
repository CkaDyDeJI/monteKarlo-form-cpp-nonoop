#pragma once

namespace monteCarloNonOOPForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private:
		double k1_;	//коэффициенты дл€ лин уравнений, описывающих отрезок bc
		double b1_;

		double centerX_;
		double centerY_;
		double radius_;
		//поинты дл€ точек
		PointF^ bPoint_;
		PointF^ fPoint_;

		double minY_;	//координаты минимальных и максимальных значений пр€моугольника, в который вписана фигура
		double minX_;
		double maxY_;
		double maxX_;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

		double square_;	//площадь пр€моугольника

		
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager (MainForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView ());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox ());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton ());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton ());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton ());
			this->button2 = (gcnew System::Windows::Forms::Button ());
			this->button1 = (gcnew System::Windows::Forms::Button ());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox ());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox ());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox ());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn ());
			this->label1 = (gcnew System::Windows::Forms::Label ());
			this->label2 = (gcnew System::Windows::Forms::Label ());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit ();
			this->groupBox1->SuspendLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit ();
			this->SuspendLayout ();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange (gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  > (6)
			{
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point (1, 272);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size (777, 229);
			this->dataGridView1->TabIndex = 0;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add (this->label2);
			this->groupBox1->Controls->Add (this->label1);
			this->groupBox1->Controls->Add (this->radioButton3);
			this->groupBox1->Controls->Add (this->radioButton2);
			this->groupBox1->Controls->Add (this->radioButton1);
			this->groupBox1->Controls->Add (this->button2);
			this->groupBox1->Controls->Add (this->button1);
			this->groupBox1->Controls->Add (this->textBox2);
			this->groupBox1->Controls->Add (this->textBox1);
			this->groupBox1->Location = System::Drawing::Point (12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size (299, 172);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"“очки";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point (6, 147);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size (134, 17);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"–андомные значени€";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler (this, &MainForm::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point (6, 124);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size (134, 17);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L" онтрольный пример";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler (this, &MainForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point (6, 101);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size (87, 17);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"–учной ввод";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler (this, &MainForm::radioButton1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point (164, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size (75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ќчистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler (this, &MainForm::button2_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point (164, 98);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size (75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"¬ычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler (this, &MainForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point (102, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size (137, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point (102, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size (137, 20);
			this->textBox1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject (L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point (476, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size (291, 225);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"точки";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"точки внутри";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"площадь";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"площадь монте-карло";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"погрешность, %";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"врем€";
			this->Column6->Name = L"Column6";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point (7, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size (47, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"“очка B";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point (10, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size (46, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"“очка F";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF (6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size (779, 500);
			this->Controls->Add (this->pictureBox1);
			this->Controls->Add (this->groupBox1);
			this->Controls->Add (this->dataGridView1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit ();
			this->groupBox1->ResumeLayout (false);
			this->groupBox1->PerformLayout ();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit ();
			this->ResumeLayout (false);

		}
#pragma endregion
		Void button1_Click (System::Object^ sender, System::EventArgs^ e)
		{
			if (radioButton1->Checked == true)
				if (setPoints () == false)	//проверка, правильно ли введены точки
					return;

			MonteCarlo ();	//выполнение вычислений
		}


		bool setPoints ()
		{
			array <String^>^ temp;

			//попытки парсинга текстбоксов в значений (значени€ вводить дл€ точек через пробел)

			try {
				temp = textBox1->Text->Replace ('.', ',')->Split (gcnew array <Char>{' '});
				bPoint_ = gcnew PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1]));
			} catch (...) {
				MessageBox::Show ("точка b задана неверна");
				return false;
			}

			try {
				temp = textBox2->Text->Replace ('.', ',')->Split (gcnew array <Char>{' '});
				fPoint_ = gcnew PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1]));
			} catch (...) {
				MessageBox::Show ("точка d задана неверна");
				return false;
			}

			if (bPoint_->X != fPoint_->X) {
				MessageBox::Show ("“очка B и F по оси x должны совпадать");

				return false;
			}

			if (fPoint_->Y >= bPoint_->Y) {
				MessageBox::Show ("“очка F должна быть ниже точки B");

				return false;
			}

			return true;
		}


		void MonteCarlo ()
		{
			setVariables ();	//установка минимальных значений и прочего

			Diagnostics::Stopwatch^ watch = gcnew Diagnostics::Stopwatch ();

			auto actuallySquare = calculateActualSquare ();	//вычисление насто€щей площади

			Random^ number = gcnew Random ();
			int insideCounter;
			double randomX;
			double randomY;
			for (int i = 0; i < 5; i++) {	//п€ть итераций дл€ 10^3, 10^4 и тд
				watch->Start ();	//запуск таймера

				double n = Math::Pow (10, i + 3);	//10^n

				insideCounter = 0;
				for (int j = 0; j < n; j++) {
					randomX = minX_ + Convert::ToDouble (number->Next (0, 132767)) / 132767 * (maxX_ - minX_);	//генераци€ координаты x равномерно распределенной
					randomY = minY_ + Convert::ToDouble (number->Next (0, 132767)) / 132767 * (maxY_ - minY_);	//генераци€ координаты x равномерно распределенной
					if (isInside (randomX, randomY))	//проверка внутри ли точка
						insideCounter++;
				}

				auto square = square_ * insideCounter / n;	//вычисление площади методом монте карло

				watch->Stop ();	//остановка таймера

				dataGridView1->Rows->Add (n, insideCounter, actuallySquare, square, Math::Round (System::Math::Abs (square - actuallySquare) / actuallySquare * 100, 2), watch->Elapsed);	//внесение данных в таблицу
			}
		}


		void setVariables ()
		{
			calculateCircleAttribs (bPoint_, fPoint_);
			calculateLinearCoeffsFirst (gcnew PointF (bPoint_->X + radius_, (bPoint_->Y + fPoint_->Y) / 2), fPoint_);

			minX_ = bPoint_->X;
			maxX_ = bPoint_->X + radius_;
			minY_ = fPoint_->Y;
			maxY_ = bPoint_->Y;

			square_ = (maxX_ - minX_) * (maxY_ - minY_);
		}


		bool isInside (double x, double y)	//проверка внутри ли
		{
			if (y >= centerY_) {
				if (isInsideCircle (x, y) == true)
					return true;
			} else {
				if (isUpperlinearFunction (x, y) == true)
					return true;
			}

			return false;
		}


		void calculateCircleAttribs (PointF^ firstPoint, PointF^ secondPoint)
		{
			centerX_ = firstPoint->X;
			centerY_ = (firstPoint->Y + secondPoint->Y) / 2;
			radius_ = (firstPoint->Y - secondPoint->Y) / 2;
		}


		void calculateLinearCoeffsFirst (PointF^ firstPoint, PointF^ secondPoint)	//вычисление коэфф дл€ bc
		{
			k1_ = (secondPoint->Y - firstPoint->Y) / (secondPoint->X - firstPoint->X);
			b1_ = firstPoint->Y - k1_ * firstPoint->X;
		}


		bool isInsideCircle (double x, double y)
		{
			return ((x - centerX_) * (x - centerX_) + (y - centerY_) * (y - centerY_)) <= (radius_ * radius_);
		}


		bool isUpperlinearFunction (double x, double y)	//выше ли отрезка da
		{
			return (y > (k1_ * x + b1_)) ? true : false;
		}


		double calculateActualSquare ()	//вычисление насто€щей площади, вычита€ из площади пр€моугольника площади треугольников, которые отсекаютс€ от пр€моугольника отрезками bc, cd, da
		{
			return Math::PI * radius_ * radius_ / 4 + (square_ / 2 - (centerY_ - minY_) * (maxX_ - minX_) * 0.5);
		}

		
		Void radioButton1_CheckedChanged (System::Object^ sender, System::EventArgs^ e)
		{
			textBox1->Clear ();
			textBox2->Clear ();
		}

		
		Void radioButton2_CheckedChanged (System::Object^ sender, System::EventArgs^ e)
		{
			textBox1->Text = "3 20";
			textBox2->Text = "3 10";
			bPoint_ = gcnew PointF (3, 20);
			fPoint_ = gcnew PointF (3, 10);
		}

		
		Void radioButton3_CheckedChanged (System::Object^ sender, System::EventArgs^ e)
		{
			Random^ random = gcnew Random ();
			auto x = random->Next (0, 100);
			auto y1 = random->Next (0, 50);
			auto y2 = random->Next (51, 100);
			textBox1->Text = x.ToString () + " " + y2.ToString ();
			textBox2->Text = x.ToString () + " " + y1.ToString ();
			bPoint_ = gcnew PointF (x, y2);
			fPoint_ = gcnew PointF (x, y1);
		}

		
		Void button2_Click (System::Object^ sender, System::EventArgs^ e)
		{
			dataGridView1->Rows->Clear ();
		}
	};
}
