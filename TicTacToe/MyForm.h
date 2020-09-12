#pragma once

#include "Header.h"
#include<fstream>
#include<string>

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::Button^ button1;
	private:
	protected:

	private: System::Windows::Forms::PictureBox^ Box0;
	private: System::Windows::Forms::PictureBox^ Box1;
	private: System::Windows::Forms::PictureBox^ Box2;
	private: System::Windows::Forms::PictureBox^ Box3;
	private: System::Windows::Forms::PictureBox^ Box4;
	private: System::Windows::Forms::PictureBox^ Box5;
	private: System::Windows::Forms::PictureBox^ Box6;
	private: System::Windows::Forms::PictureBox^ Box7;
	private: System::Windows::Forms::PictureBox^ Box8;










	private: System::Windows::Forms::TextBox^ PointBox;

	private:





















	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Box0 = (gcnew System::Windows::Forms::PictureBox());
			this->Box1 = (gcnew System::Windows::Forms::PictureBox());
			this->Box2 = (gcnew System::Windows::Forms::PictureBox());
			this->Box3 = (gcnew System::Windows::Forms::PictureBox());
			this->Box4 = (gcnew System::Windows::Forms::PictureBox());
			this->Box5 = (gcnew System::Windows::Forms::PictureBox());
			this->Box6 = (gcnew System::Windows::Forms::PictureBox());
			this->Box7 = (gcnew System::Windows::Forms::PictureBox());
			this->Box8 = (gcnew System::Windows::Forms::PictureBox());
			this->PointBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box8))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Chartreuse;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(602, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 85);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Play!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Box0
			// 
			this->Box0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box0.Image")));
			this->Box0->Location = System::Drawing::Point(41, 23);
			this->Box0->Name = L"Box0";
			this->Box0->Size = System::Drawing::Size(134, 134);
			this->Box0->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box0->TabIndex = 2;
			this->Box0->TabStop = false;
			// 
			// Box1
			// 
			this->Box1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box1.Image")));
			this->Box1->Location = System::Drawing::Point(227, 23);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(134, 134);
			this->Box1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box1->TabIndex = 3;
			this->Box1->TabStop = false;
			// 
			// Box2
			// 
			this->Box2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box2.Image")));
			this->Box2->Location = System::Drawing::Point(416, 23);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(134, 134);
			this->Box2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box2->TabIndex = 4;
			this->Box2->TabStop = false;
			this->Box2->Click += gcnew System::EventHandler(this, &MyForm::Box2_Click);
			// 
			// Box3
			// 
			this->Box3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box3.Image")));
			this->Box3->Location = System::Drawing::Point(41, 193);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(134, 134);
			this->Box3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box3->TabIndex = 5;
			this->Box3->TabStop = false;
			// 
			// Box4
			// 
			this->Box4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box4.Image")));
			this->Box4->Location = System::Drawing::Point(227, 193);
			this->Box4->Name = L"Box4";
			this->Box4->Size = System::Drawing::Size(134, 134);
			this->Box4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box4->TabIndex = 6;
			this->Box4->TabStop = false;
			// 
			// Box5
			// 
			this->Box5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box5.Image")));
			this->Box5->Location = System::Drawing::Point(416, 193);
			this->Box5->Name = L"Box5";
			this->Box5->Size = System::Drawing::Size(134, 134);
			this->Box5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box5->TabIndex = 7;
			this->Box5->TabStop = false;
			this->Box5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox6_Click);
			// 
			// Box6
			// 
			this->Box6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box6.Image")));
			this->Box6->Location = System::Drawing::Point(41, 361);
			this->Box6->Name = L"Box6";
			this->Box6->Size = System::Drawing::Size(134, 134);
			this->Box6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box6->TabIndex = 8;
			this->Box6->TabStop = false;
			this->Box6->Click += gcnew System::EventHandler(this, &MyForm::pictureBox7_Click);
			// 
			// Box7
			// 
			this->Box7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box7.Image")));
			this->Box7->Location = System::Drawing::Point(227, 361);
			this->Box7->Name = L"Box7";
			this->Box7->Size = System::Drawing::Size(134, 134);
			this->Box7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box7->TabIndex = 9;
			this->Box7->TabStop = false;
			// 
			// Box8
			// 
			this->Box8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box8.Image")));
			this->Box8->Location = System::Drawing::Point(416, 361);
			this->Box8->Name = L"Box8";
			this->Box8->Size = System::Drawing::Size(134, 134);
			this->Box8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Box8->TabIndex = 10;
			this->Box8->TabStop = false;
			// 
			// PointBox
			// 
			this->PointBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PointBox->Location = System::Drawing::Point(625, 211);
			this->PointBox->Multiline = true;
			this->PointBox->Name = L"PointBox";
			this->PointBox->Size = System::Drawing::Size(100, 99);
			this->PointBox->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(804, 524);
			this->Controls->Add(this->PointBox);
			this->Controls->Add(this->Box8);
			this->Controls->Add(this->Box7);
			this->Controls->Add(this->Box6);
			this->Controls->Add(this->Box5);
			this->Controls->Add(this->Box4);
			this->Controls->Add(this->Box3);
			this->Controls->Add(this->Box2);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->Box0);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"GadykaGame";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void setImgByNumnber(int number,bool HorM)
		{
			if (HorM)
			{
				switch (number)
				{
				case 0:
				{
					Box0->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");

					Box0->Refresh();
					break;
				}
				case 1:
				{
					Box1->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box1->Refresh();
					break;
				}
				case 2:
				{
					Box2->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box2->Refresh();
					break;
				}
				case 3:
				{
					Box3->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box3->Refresh();
					break;
				}
				case 4:
				{
					Box4->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box4->Refresh();
					break;
				}
				case 5:
				{
					Box5->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box5->Refresh();
					break;
				}
				case 6:
				{
					Box6->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box6->Refresh();
					break;
				}
				case 7:
				{
					Box7->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box7->Refresh();
					break;
				}
				case 8:
				{
					Box8->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\ramshuty.PNG");
					Box8->Refresh();
					break;
				}
				}
			}
			else if (!HorM)
			{
				switch (number)
				{
				case 0:
				{
					Box0->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");

					Box0->Refresh();
					break;
				}
				case 1:
				{
					Box1->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box1->Refresh();
					break;
				}
				case 2:
				{
					Box2->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box2->Refresh();
					break;
				}
				case 3:
				{
					Box3->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box3->Refresh();
					break;
				}
				case 4:
				{
					Box4->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box4->Refresh();
					break;
				}
				case 5:
				{
					Box5->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box5->Refresh();
					break;
				}
				case 6:
				{
					Box6->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box6->Refresh();
					break;
				}
				case 7:
				{
					Box7->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box7->Refresh();
					break;
				}
				case 8:
				{
					Box8->Image = Image::FromFile("C:\\Users\\Acer\\source\\repos\\TicTacToe\\TicTacToe\\textures\\zero.PNG");
					Box8->Refresh();
					break;
				}
				}
			}
			
		}

		int SetStrotegy()
		{
			srand(time(NULL));
			return rand() % 9;
		}

		bool First = true;
		
		int strotegy = SetStrotegy();
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (First)
		{
			Field a(First);
			bot b(First, a, strotegy);
			First = false;
			int point = Convert::ToInt32(PointBox->Text);
			int pointBot = b.AttackTest(a, a);
			int HumSet = a.SetHuman(point);
			int CompSet = a.Set(pointBot);
			if (HumSet==0)
				System::Windows::Forms::MessageBox::Show("This cube is already occupied");
			else if(HumSet==1)
				setImgByNumnber(point, true);
			if(CompSet==0)
				System::Windows::Forms::MessageBox::Show("This cube is already occupied(it's for bot)");
			else if(CompSet==1)
				setImgByNumnber(pointBot, false);
		}
		  
		
			Field a(First);
			bot b(First,a,strotegy);
			
			int point = Convert::ToInt32(PointBox->Text);
			int HumanSetResult = a.SetHuman(point);
			if (HumanSetResult==1)
				setImgByNumnber(point, true);
			else if(HumanSetResult==0)
				System::Windows::Forms::MessageBox::Show("This cube is already occupied");
			int pointBot = b.AttackTest(a, a);
			int CompSetresult = a.Set(pointBot);
			if (CompSetresult==1)
				setImgByNumnber(pointBot, false);
			else if(pointBot==0)
				System::Windows::Forms::MessageBox::Show("This cube is already occupied(it's for bot)");
			int CheckResult = a.check();
			if (CheckResult != 0)
			{
				switch (CheckResult)
				{
				case -1:
				{
					System::Windows::Forms::MessageBox::Show("Draw");
					Application::Exit();
					break;
				}
				case 1:
				{
					System::Windows::Forms::MessageBox::Show("Bot win");
					Application::Exit();
					break;
				}
				case 2:
				{
					System::Windows::Forms::MessageBox::Show("You win");
					Application::Exit();
					break;
				}
				}

			}
		};
	
private: System::Void Box2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	
}


};
}
