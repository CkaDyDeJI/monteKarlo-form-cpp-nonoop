#pragma once
#include "ReturnedData.h"

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
		Generic::List <PointF>^ mainList_ = gcnew Generic::List<PointF> ();	//список с точками
		double k1_;	//коэффициенты дл€ трех уравнений
		double b1_;

		double k2_;
		double b2_;

		double k3_;
		double b3_;

		int functionsIsCalculated = 0;

		PointF^ leftPoint_;	//отдельно поинты
		PointF^ upPoint_;
		PointF^ rightPoint_;

		double minY_;
		double minX_;
		double maxY_;
		double maxX_;

		double square_;
	
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

		/////////////////////////////////////////////////////////////////////////////////
		//////////////////////////////автоматическа€ генераци€ дальше
	private:
		DataGridView^ dataGridView1;
	protected:
	private:
		DataGridViewTextBoxColumn^ nPoints;
	private:
		DataGridViewTextBoxColumn^ nPointsInside;
	private:
		DataGridViewTextBoxColumn^ square;
	private:
		DataGridViewTextBoxColumn^ mkSquare;
	private:
		DataGridViewTextBoxColumn^ accuracy;
	private:
		DataGridViewTextBoxColumn^ time;
	private:
		Button^ button1;
	private:
		TextBox^ textBox3;
	private:
		TextBox^ textBox2;
	private:
		TextBox^ textBox1;
	private:
		Label^ label3;
	private:
		Label^ label2;
	private:
		Label^ label1;
	private:
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
			this->textBox3 = (gcnew TextBox());
			this->textBox2 = (gcnew TextBox());
			this->textBox1 = (gcnew TextBox());
			this->label3 = (gcnew Label());
			this->label2 = (gcnew Label());
			this->label1 = (gcnew Label());
			this->pictureBox1 = (gcnew PictureBox());
			(cli::safe_cast <ISupportInitialize^> (this->dataGridView1))->BeginInit();
			(cli::safe_cast <ISupportInitialize^> (this->pictureBox1))->BeginInit();
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
			this->time->HeaderText = L"врем€";
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
			this->button1->Click += gcnew EventHandler ( this, &MyForm::button1_Click );
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
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = Point ( 40, 385 );
			this->label3->Name = L"label3";
			this->label3->Size = Drawing::Size ( 89, 13 );
			this->label3->TabIndex = 11;
			this->label3->Text = L"права€ точка (d)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = Point ( 40, 338 );
			this->label2->Name = L"label2";
			this->label2->Size = Drawing::Size ( 94, 13 );
			this->label2->TabIndex = 10;
			this->label2->Text = L"верхн€€ точка (c)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = Point ( 40, 291 );
			this->label1->Name = L"label1";
			this->label1->Size = Drawing::Size ( 83, 13 );
			this->label1->TabIndex = 9;
			this->label1->Text = L"лева€ точка (b)";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast <Image^> (resources->GetObject (L"pictureBox1.BackgroundImage")));
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
			this->Controls->Add ( this->textBox3 );
			this->Controls->Add ( this->textBox2 );
			this->Controls->Add ( this->textBox1 );
			this->Controls->Add ( this->label3 );
			this->Controls->Add ( this->label2 );
			this->Controls->Add ( this->label1 );
			this->Controls->Add ( this->pictureBox1 );
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast <ISupportInitialize^> (this->dataGridView1))->EndInit();
			(cli::safe_cast <ISupportInitialize^> (this->pictureBox1))->EndInit();
			this->ResumeLayout ( false );
			this->PerformLayout();
		}

		////////////////////////////////////////////////////////
		///////////////////////автоматическа€ генераци€ конец

#pragma endregion
	private:
		Void button1_Click ( Object^ sender, EventArgs^ e )	//при нажатии на кнопку начинать вычислени€
		{
			if (setPoints () == false) {	//проверка, нормально ли введены координаты точек
				return;
			}

			//NonOOP main2 = new NonOOP ();
			outputResult (doStuff (mainList_));	//начало вычислений и вывод в таблицу
		}


		void outputResult (ReturnedData^ dataForOutput)	//записывание в таблицу
		{
			auto squares = dataForOutput->getSquares();
			auto accs = dataForOutput->getAccs();
			auto numbOfPoints = dataForOutput->getNumber();
			auto numbOfPointsInside = dataForOutput->getInside();
			auto times = dataForOutput->getTimes();
			int currentRow = dataGridView1->RowCount - 1;
			for (int i = 0; i < squares->Count; i++)
			{
				dataGridView1->Rows->Add();
				dataGridView1->Rows[currentRow]->Cells[0]->Value = numbOfPoints[i];
				dataGridView1->Rows[currentRow]->Cells[1]->Value = numbOfPointsInside[i];
				dataGridView1->Rows[currentRow]->Cells[2]->Value = dataForOutput->getAcSquare();
				dataGridView1->Rows[currentRow]->Cells[3]->Value = squares[i];
				dataGridView1->Rows[currentRow]->Cells[4]->Value = accs[i];
				dataGridView1->Rows[currentRow]->Cells[5]->Value = times[i];
				currentRow++;
			}
			
			dataGridView1->Rows->Add();
		}


		bool setPoints ()	//проверка введены ли точки нормально
		{
			array <String^>^ temp;

			try
			{
				temp = textBox1->Text->Replace ( '.', ',' )->Split ( gcnew array <Char>{' '} );
				mainList_->Add ( PointF ( Convert::ToDouble ( temp[0] ), Convert::ToDouble ( temp[1] ) ) );
			}
			catch (...)
			{
				MessageBox::Show ( "лева€ точка задана неверна" );
				return false;
			}
			try
			{
				temp = textBox2->Text->Replace ( '.', ',' )->Split ( gcnew array <Char>{' '} );
				mainList_->Add ( PointF ( Convert::ToDouble ( temp[0] ), Convert::ToDouble ( temp[1] ) ) );
			}
			catch (...)
			{
				MessageBox::Show ( "верхн€€ точка задана неверна" );
				return false;
			}
			try
			{
				temp = textBox3->Text->Replace ( '.', ',' )->Split ( gcnew array <Char>{' '} );
				mainList_->Add ( PointF ( Convert::ToDouble ( temp[0] ), Convert::ToDouble ( temp[1] ) ) );
			}
			catch (...)
			{
				MessageBox::Show ( "права€ точка задана неверна" );
				return false;
			}
			return true;
		}


		ReturnedData^ doStuff ( Generic::List<PointF>^ withPoints)
		{
			setStuff (withPoints[0], withPoints[1], withPoints[2]);	//установка точек, минимальных значений и пр

			ReturnedData^ data = gcnew ReturnedData ();	//то же самое что и в ооп
			Diagnostics::Stopwatch^ watch = gcnew Diagnostics::Stopwatch ();

			auto actuallySquare = calculateActualSquare ();
			data->setAcSquare(actuallySquare);

			Random^ number = gcnew Random ();
			int insideCounter;
			double randomX;
			double randomY;
			for (int i = 0; i < 5; i++) {
				watch->Start ();

				double n = Math::Pow (10, i + 3);

				insideCounter = 0;
				for (int j = 0; j < n; j++) {
					randomX = minX_ + Convert::ToDouble (number->Next (0, 132767)) / 132767 * (maxX_ - minX_); //minX_ * number.Next (ToInt32 ( minX_ ), ToInt32(maxX_));
					randomY = minY_ + Convert::ToDouble (number->Next (0, 132767)) / 132767 * (maxY_ - minY_); //number.Next (ToInt32 ( minY_ ), ToInt32(maxY_));
					if (isInside (gcnew PointF (randomX, randomY)))
						insideCounter++;
				}

				auto square = square_ * insideCounter / n;

				watch->Stop ();

				data->addSquare (square);
				data->addAcc (System::Math::Abs (square - actuallySquare) / actuallySquare);
				data->addPoints (n);
				data->addPointsInside (insideCounter);
				data->addTime (watch->Elapsed);

				watch->Reset ();
			}

			return data;
		}


		void setStuff (PointF^ leftPoint, PointF^ upPoint, PointF^ rightPoint)
		{
			leftPoint_ = leftPoint;	//то же самое что и в ооп
			upPoint_ = upPoint;
			rightPoint_ = rightPoint;

			setMinsAndMaxs ();

			calculateSquare ();

			calculateLinearCoeffsFirst (leftPoint_, upPoint_);
			calculateLinearCoeffsSecond (upPoint_, rightPoint_);
			calculateLinearCoeffsThird (leftPoint_, rightPoint_);
		}


		void setMinsAndMaxs ()
		{
			minX_ = leftPoint_->X;
			minY_ = 0;
			maxX_ = rightPoint_->X;
			maxY_ = upPoint_->Y;
		}


		void calculateSquare ()	//площадь пр€моугольника
		{
			square_ = (maxX_ - minX_) * (maxY_ - minY_);
		}


		bool isInside (PointF^ newPoint)
		{
			if (functionsIsCalculated != 3) {	//проверка, вычислены ли коэффициенты дл€ лин уравнений
				MessageBox::Show ("stuff is not set!");

				return false;
			}

			if ((isLowerlinearFunctionFirst (newPoint->X, newPoint->Y) == true) &&	//то же самое, только последнее проверка находитс€ ли над
				(isLowerlinearFunctionSecond (newPoint->X, newPoint->Y) == true) &&
				(isUpperlinearFunction (newPoint->X, newPoint->Y) == true))
				return true;
			else
				return false;
		}


		void calculateLinearCoeffsFirst (PointF^ firstPoint, PointF^ secondPoint)	//дл€ первого уравнени€ коэфф
		{
			k1_ = (secondPoint->Y - firstPoint->Y) / (secondPoint->X - firstPoint->X);
			b1_ = firstPoint->Y - k1_ * firstPoint->X;

			functionsIsCalculated++;
		}


		void calculateLinearCoeffsSecond (PointF^ firstPoint, PointF^ secondPoint)	//дл€ второго уравнени€ коэфф
		{
			k2_ = (secondPoint->Y - firstPoint->Y) / (secondPoint->X - firstPoint->X);
			b2_ = firstPoint->Y - k2_ * firstPoint->X;

			functionsIsCalculated++;
		}


		void calculateLinearCoeffsThird (PointF^ firstPoint, PointF^ secondPoint)	//дл€ третьего уравнени€ коэфф
		{
			k3_ = (secondPoint->Y - firstPoint->Y) / (secondPoint->X - firstPoint->X);
			b3_ = firstPoint->Y - k3_ * firstPoint->X;

			functionsIsCalculated++;
		}


		bool isLowerlinearFunctionFirst (double x, double y)	//снизу ли дл€ первого первого уравнени€
		{
			return (y < (k1_* x + b1_)) ? true : false;
		}


		bool isLowerlinearFunctionSecond (double x, double y)	//снизу ли дл€ второго уравнени€
		{
			return (y < (k2_* x + b2_)) ? true : false;
		}


		bool isUpperlinearFunction (double x, double y)	//сверху ли дл€ третьего уравнени€
		{
			return (y > (k3_ * x + b3_)) ? true : false;
		}


		double calculateActualSquare ()	//насто€ща€ площадь
		{
			return (square_ - ((maxY_ - leftPoint_->Y) * (upPoint_->X - minX_) * 0.5) - ((maxX_ - upPoint_->X) * (maxY_ - rightPoint_->Y) * 0.5) - (0.5 * ((leftPoint_->Y - minY_) + (rightPoint_->Y - minY_)) * (maxX_ - minX_)));
		}
	};
}
