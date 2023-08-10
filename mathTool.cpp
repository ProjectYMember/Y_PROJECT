#include "mathTool.h"

MathTtool::MathTtool() {}
MathTtool::~MathTtool() {}


std::string MathTtool::Vsum(std::string strnum1, std::string strnum2)
{
	int size;
	if (strnum1.size() > strnum2.size())
		size = strnum1.size();
	else
		size = strnum2.size();

	for (int position = 0; position < size; position++)
	{
		int num1 = stoi(strnum1, position);
		int num2 = stoi(strnum2, position);

		updateNumVector(num1 + num2, position);
	}

	HandleCarry();
	return saveNum();
}

std::string MathTtool::Vmul(std::string strnum1, std::string strnum2)
{

	for (int i = 0; i < strnum1.size(); i++)
	{
		int num1 = stoi(strnum1, i);

		for (int j = 0; j < strnum2.size(); j++)
		{
			int num2 = stoi(strnum2, j);

			updateNumVector(num1 * num2, i + j);
		}
	}

	HandleCarry();
	return saveNum();
}

std::string MathTtool::Vsub(std::string strnum1, std::string strnum2)
{
	int size;
	if (strnum1.size() > strnum2.size())
		size = strnum1.size();
	else 
		size = strnum2.size(); 

	for (int position = 0; position < size; position++)
	{
		int num1 = stoi(strnum1, position);
		int num2 = stoi(strnum2, position);

		updateNumVector(num1 - num2, position);
	}

	HandleCarry();
	return saveNum();

}

std::string MathTtool::Vdiv(std::string strnum1, std::string strnum2)
{
	//Vsub와 비슷하게 구현?
	//소수점 처리?
	//약수 사용?
	//  X/2 == X*½  응용?
	//따로따로 나눠서 합치기?
	return "미구현";
}




std::string MathTtool::saveNum() 
{
	std::string num;

	for (int i = numVector.size() - 1; i >= 0; --i)
	{
		num.push_back(numVector[i] + '0');
	}

	return num;
}

void MathTtool::HandleCarry()
{
	int carry = 0;
	for (int i = 0; i < numVector.size(); ++i)
	{
		if (numVector[i] < 0)
		{
			numVector[i] += 10;
			numVector[i + 1]--;
		}
		else {
			numVector[i] += carry;
			carry = numVector[i] / 10;
			numVector[i] %= 10;
		}
	}

	if (carry > 0)
	{
		numVector.push_back(carry);
	}
}

void MathTtool::updateNumVector(int Vnum, int position)
{
	if (position >= numVector.size())
	{
		numVector.push_back(Vnum);
	}
	else
	{
		numVector[position] += Vnum;
	}
}

void MathTtool::test()
{
	std::cout << "numVector values: ";
	for (int num : numVector) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
}

int MathTtool::stoi(std::string str, int position) 
{ 
	if (position < str.size())
		return str[str.size() - position - 1] - '0';
	else
		return 0;
}
