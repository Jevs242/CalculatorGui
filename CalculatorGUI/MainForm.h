#pragma once
#include <string>
#include <iostream>
#include <cstdlib>


namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
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
	private: 
		System::Windows::Forms::Label^ lResult;
		System::ComponentModel::BackgroundWorker^ backgroundWorker;
		System::Windows::Forms::Button^ bNine;
		System::Windows::Forms::Button^ bEight;
		System::Windows::Forms::Button^ bSeven;
		System::Windows::Forms::Button^ bSix;
		System::Windows::Forms::Button^ bFive;
		System::Windows::Forms::Button^ bFour;
		System::Windows::Forms::Button^ bOne;
		System::Windows::Forms::Button^ bTwo;
		System::Windows::Forms::Button^ bThree;
		System::Windows::Forms::Button^ bZero;
		System::Windows::Forms::Button^ bPoint;
		System::Windows::Forms::Button^ bEqual;
		System::Windows::Forms::Button^ bAddition;
		System::Windows::Forms::Button^ bSubtraction;
		System::Windows::Forms::Button^ bMultiplication;
		System::Windows::Forms::Button^ bDivide;
		System::Windows::Forms::Button^ bNegOrPos;
		System::Windows::Forms::Button^ bDelete;
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
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
		void InitializeComponent(void)
		{
			this->lResult = (gcnew System::Windows::Forms::Label());
			this->bNine = (gcnew System::Windows::Forms::Button());
			this->bEight = (gcnew System::Windows::Forms::Button());
			this->bSeven = (gcnew System::Windows::Forms::Button());
			this->bSix = (gcnew System::Windows::Forms::Button());
			this->bFive = (gcnew System::Windows::Forms::Button());
			this->bFour = (gcnew System::Windows::Forms::Button());
			this->bOne = (gcnew System::Windows::Forms::Button());
			this->bTwo = (gcnew System::Windows::Forms::Button());
			this->bThree = (gcnew System::Windows::Forms::Button());
			this->bZero = (gcnew System::Windows::Forms::Button());
			this->bPoint = (gcnew System::Windows::Forms::Button());
			this->bEqual = (gcnew System::Windows::Forms::Button());
			this->bAddition = (gcnew System::Windows::Forms::Button());
			this->bSubtraction = (gcnew System::Windows::Forms::Button());
			this->bMultiplication = (gcnew System::Windows::Forms::Button());
			this->bDivide = (gcnew System::Windows::Forms::Button());
			this->bNegOrPos = (gcnew System::Windows::Forms::Button());
			this->bDelete = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lResult
			// 
			this->lResult->AutoSize = true;
			this->lResult->Font = (gcnew System::Drawing::Font(L"Cooper Black", 20.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lResult->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->lResult->Location = System::Drawing::Point(12, 43);
			this->lResult->Name = L"lResult";
			this->lResult->Size = System::Drawing::Size(78, 31);
			this->lResult->TabIndex = 0;
			this->lResult->Text = L"0000";
			// 
			// bNine
			// 
			this->bNine->Location = System::Drawing::Point(159, 62);
			this->bNine->Name = L"bNine";
			this->bNine->Size = System::Drawing::Size(72, 53);
			this->bNine->TabIndex = 18;
			this->bNine->Text = L"9";
			this->bNine->UseVisualStyleBackColor = true;
			this->bNine->Click += gcnew System::EventHandler(this, &MainForm::bNine_Click);
			// 
			// bEight
			// 
			this->bEight->Location = System::Drawing::Point(81, 62);
			this->bEight->Name = L"bEight";
			this->bEight->Size = System::Drawing::Size(72, 53);
			this->bEight->TabIndex = 17;
			this->bEight->Text = L"8";
			this->bEight->UseVisualStyleBackColor = true;
			this->bEight->Click += gcnew System::EventHandler(this, &MainForm::bEight_Click);
			// 
			// bSeven
			// 
			this->bSeven->Location = System::Drawing::Point(3, 62);
			this->bSeven->Name = L"bSeven";
			this->bSeven->Size = System::Drawing::Size(72, 53);
			this->bSeven->TabIndex = 16;
			this->bSeven->Text = L"7";
			this->bSeven->UseVisualStyleBackColor = true;
			this->bSeven->Click += gcnew System::EventHandler(this, &MainForm::bSeven_Click);
			// 
			// bSix
			// 
			this->bSix->Location = System::Drawing::Point(159, 121);
			this->bSix->Name = L"bSix";
			this->bSix->Size = System::Drawing::Size(72, 53);
			this->bSix->TabIndex = 15;
			this->bSix->Text = L"6";
			this->bSix->UseVisualStyleBackColor = true;
			this->bSix->Click += gcnew System::EventHandler(this, &MainForm::bSix_Click);
			// 
			// bFive
			// 
			this->bFive->Location = System::Drawing::Point(81, 121);
			this->bFive->Name = L"bFive";
			this->bFive->Size = System::Drawing::Size(72, 53);
			this->bFive->TabIndex = 14;
			this->bFive->Text = L"5";
			this->bFive->UseVisualStyleBackColor = true;
			this->bFive->Click += gcnew System::EventHandler(this, &MainForm::bFive_Click);
			// 
			// bFour
			// 
			this->bFour->Location = System::Drawing::Point(3, 121);
			this->bFour->Name = L"bFour";
			this->bFour->Size = System::Drawing::Size(72, 53);
			this->bFour->TabIndex = 13;
			this->bFour->Text = L"4";
			this->bFour->UseVisualStyleBackColor = true;
			this->bFour->Click += gcnew System::EventHandler(this, &MainForm::bFour_Click);
			// 
			// bOne
			// 
			this->bOne->Location = System::Drawing::Point(3, 180);
			this->bOne->Name = L"bOne";
			this->bOne->Size = System::Drawing::Size(72, 53);
			this->bOne->TabIndex = 12;
			this->bOne->Text = L"1";
			this->bOne->UseVisualStyleBackColor = true;
			this->bOne->Click += gcnew System::EventHandler(this, &MainForm::bOne_Click);
			// 
			// bTwo
			// 
			this->bTwo->Location = System::Drawing::Point(81, 180);
			this->bTwo->Name = L"bTwo";
			this->bTwo->Size = System::Drawing::Size(72, 53);
			this->bTwo->TabIndex = 11;
			this->bTwo->Text = L"2";
			this->bTwo->UseVisualStyleBackColor = true;
			this->bTwo->Click += gcnew System::EventHandler(this, &MainForm::bTwo_Click);
			// 
			// bThree
			// 
			this->bThree->Location = System::Drawing::Point(159, 180);
			this->bThree->Name = L"bThree";
			this->bThree->Size = System::Drawing::Size(72, 53);
			this->bThree->TabIndex = 10;
			this->bThree->Text = L"3";
			this->bThree->UseVisualStyleBackColor = true;
			this->bThree->Click += gcnew System::EventHandler(this, &MainForm::bThree_Click);
			// 
			// bZero
			// 
			this->bZero->Location = System::Drawing::Point(81, 239);
			this->bZero->Name = L"bZero";
			this->bZero->Size = System::Drawing::Size(72, 56);
			this->bZero->TabIndex = 9;
			this->bZero->Text = L"0";
			this->bZero->UseVisualStyleBackColor = true;
			this->bZero->Click += gcnew System::EventHandler(this, &MainForm::bZero_Click);
			// 
			// bPoint
			// 
			this->bPoint->Location = System::Drawing::Point(237, 239);
			this->bPoint->Name = L"bPoint";
			this->bPoint->Size = System::Drawing::Size(72, 56);
			this->bPoint->TabIndex = 8;
			this->bPoint->Text = L".";
			this->bPoint->UseVisualStyleBackColor = true;
			this->bPoint->Click += gcnew System::EventHandler(this, &MainForm::bPoint_Click);
			// 
			// bEqual
			// 
			this->bEqual->Location = System::Drawing::Point(237, 180);
			this->bEqual->Name = L"bEqual";
			this->bEqual->Size = System::Drawing::Size(75, 53);
			this->bEqual->TabIndex = 7;
			this->bEqual->Text = L"=";
			this->bEqual->UseVisualStyleBackColor = true;
			this->bEqual->Click += gcnew System::EventHandler(this, &MainForm::bEqual_Click);
			// 
			// bAddition
			// 
			this->bAddition->Location = System::Drawing::Point(237, 121);
			this->bAddition->Name = L"bAddition";
			this->bAddition->Size = System::Drawing::Size(75, 53);
			this->bAddition->TabIndex = 6;
			this->bAddition->Text = L"+";
			this->bAddition->UseVisualStyleBackColor = true;
			this->bAddition->Click += gcnew System::EventHandler(this, &MainForm::bAddition_Click);
			// 
			// bSubtraction
			// 
			this->bSubtraction->Location = System::Drawing::Point(237, 62);
			this->bSubtraction->Name = L"bSubtraction";
			this->bSubtraction->Size = System::Drawing::Size(75, 53);
			this->bSubtraction->TabIndex = 5;
			this->bSubtraction->Text = L"-";
			this->bSubtraction->UseVisualStyleBackColor = true;
			this->bSubtraction->Click += gcnew System::EventHandler(this, &MainForm::bSubtraction_Click);
			// 
			// bMultiplication
			// 
			this->bMultiplication->Location = System::Drawing::Point(237, 3);
			this->bMultiplication->Name = L"bMultiplication";
			this->bMultiplication->Size = System::Drawing::Size(75, 53);
			this->bMultiplication->TabIndex = 4;
			this->bMultiplication->Text = L"x";
			this->bMultiplication->UseVisualStyleBackColor = true;
			this->bMultiplication->Click += gcnew System::EventHandler(this, &MainForm::bMultiplication_Click);
			// 
			// bDivide
			// 
			this->bDivide->Location = System::Drawing::Point(159, 3);
			this->bDivide->Name = L"bDivide";
			this->bDivide->Size = System::Drawing::Size(72, 53);
			this->bDivide->TabIndex = 3;
			this->bDivide->Text = L"÷";
			this->bDivide->UseVisualStyleBackColor = true;
			this->bDivide->Click += gcnew System::EventHandler(this, &MainForm::bDivide_Click);
			// 
			// bNegOrPos
			// 
			this->bNegOrPos->Location = System::Drawing::Point(81, 3);
			this->bNegOrPos->Name = L"bNegOrPos";
			this->bNegOrPos->Size = System::Drawing::Size(72, 53);
			this->bNegOrPos->TabIndex = 1;
			this->bNegOrPos->Text = L"+/-";
			this->bNegOrPos->UseVisualStyleBackColor = true;
			this->bNegOrPos->Click += gcnew System::EventHandler(this, &MainForm::bNegOrPos_Click);
			// 
			// bDelete
			// 
			this->bDelete->Location = System::Drawing::Point(3, 3);
			this->bDelete->Name = L"bDelete";
			this->bDelete->Size = System::Drawing::Size(72, 53);
			this->bDelete->TabIndex = 0;
			this->bDelete->Text = L"C";
			this->bDelete->UseVisualStyleBackColor = true;
			this->bDelete->Click += gcnew System::EventHandler(this, &MainForm::bDelete_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				25)));
			this->tableLayoutPanel1->Controls->Add(this->bDelete, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bNegOrPos, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->bZero, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->bThree, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->bTwo, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->bOne, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->bFour, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->bFive, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->bSix, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->bSeven, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->bEight, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->bNine, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->bDivide, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->bMultiplication, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bSubtraction, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->bAddition, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->bEqual, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->bPoint, 3, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 109);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(315, 298);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(349, 419);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lResult);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		String^ number1 = "";
		String^ number2 = "";

		bool secondNumber = false;
		bool point = false;
		bool result = false;

		int useSymbol = 0;

		void putsymbol(int symbol);
		void putCommas(String^ Number);

	private:
		System::Void bDelete_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bSubtraction_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bEqual_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bAddition_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bTwo_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bNegOrPos_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bMod_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bDivide_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bMultiplication_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bNine_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bSix_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bThree_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bZero_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bPoint_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bFive_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bEight_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bSeven_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bFour_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bOne_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void bUndo_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e);

};
}
