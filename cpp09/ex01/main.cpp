#include <iostream>
#include <vector>
#include <sstream>
#include <exception>
#include <fstream>
#include <string>
#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc > 2)
	{
		std::cout << "only one argument" << std::endl;
		return (0);
	}

	RPN myRPN; 
	std::stringstream f(argv[1]);
	std::string s;

    while (getline(f, s, ' ')) {
        
		if ((s[0] >= '0' && s[0] <= '9' && s.length() == 1))
		{
			myRPN.addNumber(stoi(s));
		}
		else if ((s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/') && s.length() == 1)
			myRPN.makeOperation(s);
		else
		{
			std::cout << "->" << s << std::endl;
			std::cout << "Bad input" << std::endl;
			return 0;
		}
	}
	std::stack<int> copyStack(myRPN.getStack());

	while (!copyStack.empty()) {
		std::cout << copyStack.top() << "\n";
		copyStack.pop();
	}
}