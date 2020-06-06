#pragma once

namespace monteCarloNonOOPForms
{
	using namespace System;
	using namespace ComponentModel;
	using namespace Collections;
	using namespace Windows::Forms;
	using namespace Data;
	using namespace Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public Form
	{
	private:
		double k1_;	//коэффициенты для лин уравнений, описывающих отрезок bc
		double b1_;

		double k2_;	//отрезок cd
		double b2_;

		double k3_;	//отрезок da
		double b3_;

		PointF^ aPoint_;	//поинты для точек
		PointF^ bPoint_;
		PointF^ cPoint_;
		PointF^ dPoint_;

		double minY_;	//координаты минимальных и максимальных значений прямоугольника, в который вписана фигура
		double minX_;
		double maxY_;
		double maxX_;

		double square_;	//площадь прямоугольника
	
	public:
		MyForm ( void )
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
		~MyForm ()
		{
			if (components)
			{
				delete components;
			}
		}

		/////////////////////////////////////////
		///автоматические сгенеренная фигня
		
		DataGridView^ dataGridView1;
		DataGridViewTextBoxColumn^ nPoints;
		DataGridViewTextBoxColumn^ nPointsInside;
		DataGridViewTextBoxColumn^ square;
		DataGridViewTextBoxColumn^ mkSquare;
		DataGridViewTextBoxColumn^ accuracy;
		DataGridViewTextBoxColumn^ time;
		Button^ button1;
		TextBox^ textBox4;
		TextBox^ textBox3;
		TextBox^ textBox2;
		TextBox^ textBox1;
		Label^ label4;
		Label^ label3;
		Label^ label2;
		Label^ label1;
		PictureBox^ pictureBox1;
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent ( void )
		{
			ComponentResourceManager^ resources = (gcnew ComponentResourceManager ( MyForm::typeid ));
			this->dataGridView1 = (gcnew DataGridView());
			this->nPoints = (gcnew DataGridViewTextBoxColumn());
			this->nPointsInside = (gcnew DataGridViewTextBoxColumn());
			this->square = (gcnew DataGridViewTextBoxColumn());
			this->mkSquare = (gcnew DataGridViewTextBoxColumn());
			this->accuracy = (gcnew DataGridViewTextBoxColumn());
			this->time = (gcnew DataGridViewTextBoxColumn());
			this->button1 = (gcnew Button());
			this->textBox4 = (gcnew TextBox());
			this->textBox3 = (gcnew TextBox());
			this->textBox2 = (gcnew TextBox());
			this->textBox1 = (gcnew TextBox());
			this->label4 = (gcnew Label());
			this->label3 = (gcnew Label());
			this->label2 = (gcnew Label());
			this->label1 = (gcnew Label());
			this->pictureBox1 = (gcnew PictureBox());
			(safe_cast <ISupportInitialize^> (this->dataGridView1))->BeginInit();
			(safe_cast <ISupportInitialize^> (this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast <AnchorStyles> (((AnchorStyles::Top | AnchorStyles::Left) | AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange ( gcnew array <DataGridViewColumn^> ( 6 ){this->nPoints, this->nPointsInside, this->square, this->mkSquare, this->accuracy, this->time} );
			this->dataGridView1->Location = Point ( 1, 1 );
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = Drawing::Size ( 1019, 264 );
			//this->dataGridView1->BackColor = Color::White;
			this->dataGridView1->TabIndex = 16;
			// 
			// nPoints
			// 
			this->nPoints->HeaderText = L"точки";
			this->nPoints->Name = L"nPoints";
			// 
			// nPointsInside
			// 
			this->nPointsInside->HeaderText = L"внутри точке";
			this->nPointsInside->Name = L"nPointsInside";
			// 
			// square
			// 
			this->square->HeaderText = L"площадь";
			this->square->Name = L"square";
			// 
			// mkSquare
			// 
			this->mkSquare->HeaderText = L"площадь монте-карло";
			this->mkSquare->Name = L"mkSquare";
			// 
			// accuracy
			// 
			this->accuracy->HeaderText = L"погрешность";
			this->accuracy->Name = L"accuracy";
			// 
			// time
			// 
			this->time->HeaderText = L"время";
			this->time->Name = L"time";
			// 
			// button1
			// 
			this->button1->Location = Point ( 264, 307 );
			this->button1->Name = L"button1";
			this->button1->Size = Drawing::Size ( 75, 23 );
			this->button1->TabIndex = 15;
			this->button1->Text = L"вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->FlatStyle = FlatStyle::Flat;
			this->button1->Click += gcnew EventHandler ( this, &MyForm::button1_Click );
			// 
			// textBox4
			// 
			this->textBox4->Location = Point (135, 429);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = Drawing::Size (100, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = Point ( 135, 382 );
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = Drawing::Size ( 100, 20 );
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = Point ( 135, 335 );
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = Drawing::Size ( 100, 20 );
			this->textBox2->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = Point ( 135, 288 );
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = Drawing::Size ( 100, 20 );
			this->textBox1->TabIndex = 12;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = Point (40, 432);
			this->label4->Name = L"label4";
			this->label4->Size = Drawing::Size (89, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"точка d";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = Point ( 40, 385 );
			this->label3->Name = L"label3";
			this->label3->Size = Drawing::Size ( 89, 13 );
			this->label3->TabIndex = 11;
			this->label3->Text = L"точка c";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = Point ( 40, 338 );
			this->label2->Name = L"label2";
			this->label2->Size = Drawing::Size ( 94, 13 );
			this->label2->TabIndex = 10;
			this->label2->Text = L"точка b";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = Point ( 40, 291 );
			this->label1->Name = L"label1";
			this->label1->Size = Drawing::Size ( 83, 13 );
			this->label1->TabIndex = 9;
			this->label1->Text = L"точка a";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (safe_cast <Image^> (resources->GetObject (L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = ImageLayout::None;
			this->pictureBox1->Location = Point ( 695, 271 );
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = Drawing::Size ( 312, 169 );
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = SizeF ( 6, 13 );
			this->AutoScaleMode = Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = Drawing::Size ( 1019, 520 );
			this->Controls->Add ( this->dataGridView1 );
			this->Controls->Add ( this->button1 );
			this->Controls->Add (this->textBox4);
			this->Controls->Add ( this->textBox3 );
			this->Controls->Add ( this->textBox2 );
			this->Controls->Add ( this->textBox1 );
			this->Controls->Add ( this->label4 );
			this->Controls->Add ( this->label3 );
			this->Controls->Add ( this->label2 );
			this->Controls->Add ( this->label1 );
			this->Controls->Add ( this->pictureBox1 );
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(safe_cast <ISupportInitialize^> (this->dataGridView1))->EndInit();
			(safe_cast <ISupportInitialize^> (this->pictureBox1))->EndInit();
			this->ResumeLayout ( false );
			this->PerformLayout();
		}


		
#pragma endregion
		Void button1_Click ( Object^ sender, EventArgs^ e )	//нажатие на кнопку
		{
			if (setPoints () == false) {	//проверка, правильно ли введены точки
				return;
			}

			doStuff ();	//выполнение вычислений
		}


		bool setPoints ()
		{
			array <String^>^ temp;

			//попытки парсинга текстбоксов в значений (значения вводить для точек через пробел)
			try
			{
				temp = textBox1->Text->Replace ( '.', ',' )->Split ( gcnew array <Char>{' '} );
				aPoint_ = gcnew PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1]));
			}
			catch (...)
			{
				MessageBox::Show ( "точка a задана неверна" );
				return false;
			}
			try
			{
				temp = textBox2->Text->Replace ( '.', ',' )->Split ( gcnew array <Char>{' '} );
				bPoint_ = gcnew PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1]));
			}
			catch (...)
			{
				MessageBox::Show ( "точка b задана неверна" );
				return false;
			}
			try
			{
				temp = textBox3->Text->Replace ( '.', ',' )->Split ( gcnew array <Char>{' '} );
				cPoint_ = gcnew PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1]));
			}
			catch (...)
			{
				MessageBox::Show ( "точка c задана неверна" );
				return false;
			}
			try {
				temp = textBox4->Text->Replace ('.', ',')->Split (gcnew array <Char>{' '});
				dPoint_ = gcnew PointF (Convert::ToDouble (temp[0]), Convert::ToDouble (temp[1]));
			} catch (...) {
				MessageBox::Show ("точка d задана неверна");
				return false;
			}
			
			return true;
		}


		void doStuff ()
		{
			setStuff ();	//установка минимальных значений и прочего

			Diagnostics::Stopwatch^ watch = gcnew Diagnostics::Stopwatch ();

			auto actuallySquare = calculateActualSquare ();	//вычисление настоящей площади

			Random^ number = gcnew Random ();
			int insideCounter;
			double randomX;
			double randomY;
			for (int i = 0; i < 5; i++) {	//пять итераций для 10^3, 10^4 и тд
				watch->Start ();	//запуск таймера

				double n = Math::Pow (10, i + 3);	//10^n

				insideCounter = 0;
				for (int j = 0; j < n; j++) {
					randomX = minX_ + Convert::ToDouble (number->Next (0, 132767)) / 132767 * (maxX_ - minX_);	//генерация координаты x равномерно распределенной
					randomY = minY_ + Convert::ToDouble (number->Next (0, 132767)) / 132767 * (maxY_ - minY_);	//генерация координаты x равномерно распределенной
					if (isInside (randomX, randomY))	//проверка внутри ли точка
						insideCounter++;
				}

				auto square = square_ * insideCounter / n;	//вычисление площади методом монте карло

				watch->Stop ();	//остановка таймера

				dataGridView1->Rows->Add (n, insideCounter, actuallySquare, square, System::Math::Abs (square - actuallySquare) / actuallySquare * 100, watch->Elapsed);	//внесение данных в таблицу

				watch->Reset ();
			}
		}


		void setStuff ()
		{
			setMinsAndMaxs ();

			calculateSquare ();

			calculateLinearCoeffsFirst (bPoint_, cPoint_);
			calculateLinearCoeffsSecond (cPoint_, dPoint_);
			calculateLinearCoeffsThird (dPoint_, aPoint_);
		}


		void setMinsAndMaxs ()	//координаты угловых точек прямоугольника
		{
			minX_ = aPoint_->X;
			minY_ = aPoint_->Y;
			maxX_ = dPoint_->X;
			maxY_ = cPoint_->Y;
		}


		void calculateSquare ()	//площадь прямоугольника
		{
			square_ = (maxX_ - minX_) * (maxY_ - minY_);
		}


		bool isInside (double x, double y)	//проверка внутри ли
		{
			if ((isLowerlinearFunctionFirst (x, y) == true) &&	//внутри если ниже отрезков bc и cd но выше da
				(isLowerlinearFunctionSecond (x, y) == true) &&
				(isUpperlinearFunction (x, y) == true))
				return true;
			else
				return false;
		}


		void calculateLinearCoeffsFirst (PointF^ firstPoint, PointF^ secondPoint)	//вычисление коэфф для bc
		{
			k1_ = (secondPoint->Y - firstPoint->Y) / (secondPoint->X - firstPoint->X);
			b1_ = firstPoint->Y - k1_ * firstPoint->X;
		}


		void calculateLinearCoeffsSecond (PointF^ firstPoint, PointF^ secondPoint)	//вычисление коэфф для cd
		{
			k2_ = (secondPoint->Y - firstPoint->Y) / (secondPoint->X - firstPoint->X);
			b2_ = firstPoint->Y - k2_ * firstPoint->X;
		}


		void calculateLinearCoeffsThird (PointF^ firstPoint, PointF^ secondPoint)	//вычисление коэфф для da
		{
			k3_ = (secondPoint->Y - firstPoint->Y) / (secondPoint->X - firstPoint->X);
			b3_ = firstPoint->Y - k3_ * firstPoint->X;
		}


		bool isLowerlinearFunctionFirst (double x, double y)	//ниже ли отрезка bc
		{
			return (y < (k1_* x + b1_)) ? true : false;
		}


		bool isLowerlinearFunctionSecond (double x, double y)	//ниже ли отрезка cd
		{
			return (y < (k2_* x + b2_)) ? true : false;
		}


		bool isUpperlinearFunction (double x, double y)	//выше ли отрезка da
		{
			return (y > (k3_ * x + b3_)) ? true : false;
		}


		double calculateActualSquare ()	//вычисление настоящей площади, вычитая из площади прямоугольника площади треугольников, которые отсекаются от прямоугольника отрезками bc, cd, da
		{
			return (square_ - ((maxY_ - bPoint_->Y) * (cPoint_->X - minX_) * 0.5) - ((maxX_ - cPoint_->X) * (maxY_ - dPoint_->Y) * 0.5) - ((dPoint_->Y - minY_) * (maxX_ - aPoint_->X) * 0.5));
		}
	};
}
