#include "RPN.hpp"

RPN::RPN()
{

}

RPN::~RPN()
{

}

void RPN::addNumber(int number)
{
	stack.push(number);
}

void RPN::makeOperation(std::string operate)
{
	if (stack.size() >= 2)
	{
		int number2 = stack.top();
		stack.pop(); 
		int number1 = stack.top(); 
		stack.pop();
		if (operate == "+")
			addNumber(number1 + number2);
		else if (operate == "*")
			addNumber(number1 * number2);
		else if (operate == "-")
			addNumber(number1 - number2);
		else if (operate == "/")
			addNumber(number1 / number2);
		//std::cout << number1 << " " << operate << " " << number2 << std::endl;
	}
}

std::stack<int> RPN::getStack()
{
	return stack;
}

int RPN::getResult() const
{ 
 return stack.top();
}

