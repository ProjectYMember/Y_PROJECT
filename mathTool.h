#ifndef __MATH_TOOL_H_
#define __MATH_TOOL_H_

#include <iostream>
#include <string>
#include <vector>

class MathTtool
{
public:

	MathTtool();

	std::string Vsum(std::string strnum1, std::string strnum2);
	std::string Vmul(std::string strnum1, std::string strnum2);
	std::string Vsub(std::string strnum1, std::string strnum2);
	std::string Vdiv(std::string strnum1, std::string strnum2);

	int stoi(std::string str, int position);
	std::string saveNum();
	void HandleCarry();
	void updateNumVector(int Vnum, int position);
	void test();

	virtual ~MathTtool();

private:

	std::vector<int> numVector;
};

#endif
	
