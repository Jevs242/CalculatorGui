#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculator::MainForm form;
	Application::Run(% form);
}

System::Void Calculator::MainForm::MainForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->lResult->Text = "";
}

System::Void Calculator::MainForm::bDelete_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->lResult->Text = "";
	this->number1 = "";
	this->number2 = "";
	secondNumber = false;
	useSymbol = 0;
}

System::Void Calculator::MainForm::bSubtraction_Click(System::Object^ sender, System::EventArgs^ e)
{
	putsymbol(2);
}

System::Void Calculator::MainForm::bEqual_Click(System::Object^ sender, System::EventArgs^ e)
{
	putsymbol(6);
}

System::Void Calculator::MainForm::bAddition_Click(System::Object^ sender, System::EventArgs^ e)
{
	putsymbol(1);
}

System::Void Calculator::MainForm::bNegOrPos_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Calculator::MainForm::bMod_Click(System::Object^ sender, System::EventArgs^ e)
{
	putsymbol(5);
}

System::Void Calculator::MainForm::bDivide_Click(System::Object^ sender, System::EventArgs^ e)
{
	putsymbol(3);
}

System::Void Calculator::MainForm::bMultiplication_Click(System::Object^ sender, System::EventArgs^ e)
{
	putsymbol(4);
}

System::Void Calculator::MainForm::bTwo_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("2");
}

System::Void Calculator::MainForm::bNine_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("9");
}

System::Void Calculator::MainForm::bSix_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("6");
}

System::Void Calculator::MainForm::bThree_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("3");
}

System::Void Calculator::MainForm::bZero_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("0");
}

System::Void Calculator::MainForm::bPoint_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!point)
	{
		this->lResult->Text += ".";
		point = true;
	}
}

System::Void Calculator::MainForm::bFive_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("5");
}

System::Void Calculator::MainForm::bEight_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("8");
}

System::Void Calculator::MainForm::bSeven_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("7");
}

System::Void Calculator::MainForm::bFour_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("4");
}

System::Void Calculator::MainForm::bOne_Click(System::Object^ sender, System::EventArgs^ e)
{
	putCommas("1");
}

System::Void Calculator::MainForm::bUndo_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

void Calculator::MainForm::putsymbol(int symbol)
{
	int nowSymbol = symbol;
	if (secondNumber && number1 != "" && number2 != "")
	{
		symbol = useSymbol;

		Double inumber1 = System::Convert::ToDouble(number1);
		Double inumber2 = System::Convert::ToDouble(number2);

		switch (symbol)
		{
		case 1:
			this->lResult->Text = System::Convert::ToString(inumber1 + inumber2);
			break;
		case 2:
			this->lResult->Text = System::Convert::ToString(inumber1 - inumber2);
			break;
		case 3:
			this->lResult->Text = System::Convert::ToString(inumber1 / inumber2);
			break;
		case 4:
			this->lResult->Text = System::Convert::ToString(inumber1 * inumber2);
			break;
		default:
			break;
		}
		number1 = this->lResult->Text;
		useSymbol = nowSymbol;
		result = true;
	}
	else
	{
		this->lResult->Text = "";
		secondNumber = true;
		useSymbol = symbol;
	}
}

void Calculator::MainForm::putCommas(String^ Number)
{
	if (!secondNumber)
	{
		this->lResult->Text += Number;
		this->number1 = this->lResult->Text;
	}
	else
	{
		if (result)
		{
			this->lResult->Text = "";
			result = false;
		}
		this->lResult->Text += Number;
		this->number2 = this->lResult->Text;
	}
}
