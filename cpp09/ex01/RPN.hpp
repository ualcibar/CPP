#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <vector>
#include <sstream>
#include <exception>
#include <fstream>
#include <string>

class RPN
{
	public:
		RPN & operator=(const RPN & rhs);
		RPN();
		~RPN();

		//void calculatValue();
		void addNumber(int number);
		void makeOperation(std::string operate);
		std::stack<int> getStack();
		int getResult() const;
	
	private:
		std::vector<std::string> strings;
		std::stack<int> stack;

		
};

#endif
