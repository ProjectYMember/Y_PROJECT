#include "Calculator.h"

Calculator::Calculator() : strNum("") {}
Calculator::~Calculator() {}

void Calculator::CalcStart() 
{

	std::string strInputNum1, strInputNum2;
	char oper;

	while (1) {
		std::cout << "inputNum1 1: ";
		std::cin >> strInputNum1;
		std::cout << "Operator : ";
		std::cin >> oper;
		std::cout << "inputnum2 2: ";
		std::cin >> strInputNum2;

		Operator(strInputNum1, strInputNum2, oper);

		printNum();

		int gostop;
		std::cout << "go.0 stop.1 ";
		std::cin >> gostop;
		if (gostop)
			break;
		else 
		{
			strInputNum1 = strInputNum2 = "";
		}
	}
}

void Calculator::Operator(std::string strInputNum1, std::string strInputNum2, char Oper)
{

	switch (Oper)
	{
	case '*':
		strNum = Vmul(strInputNum1, strInputNum2);
		break;
	case '+':
		strNum = Vsum(strInputNum1, strInputNum2);
		break;
	case '-':
		strNum = Vsub(strInputNum1, strInputNum2);
		break;
	case '/':
		strNum = Vdiv(strInputNum1, strInputNum2);
		break;
	default:
		std::cout << " +, *, -, / 입력" << std::endl;
		break;
	}


}

void Calculator::printNum()
{
	std::cout << "result : " << strNum << std::endl;
}
