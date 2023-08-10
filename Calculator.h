#ifndef __CALCULATOR_H_
#define __CALCULATOR_H_

#include "mathTool.h"

class Calculator : public MathTtool {

public:

	Calculator();

	void CalcStart();
	void Operator(std::string inputnum1, std::string inputnum2, char Oper);
	void printNum();

	~Calculator();

private:
	std::string strNum;
};

#endif