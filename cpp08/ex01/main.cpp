#include "Span.hpp"

#define MAX_VAL 10000
int main ()
{
	Span mySpan(5);
	Span mySpan1(MAX_VAL);
	//std::vector<int> numbers(MAX_VAL);
	std::vector<int> numbers;
	

	try{
		mySpan.addNumber(6);
		mySpan.addNumber(3);
		mySpan.addNumber(17);
		mySpan.addNumber(9);
		mySpan.addNumber(11);
		std::cout << mySpan.shortestSpan() << std::endl;
		std::cout << mySpan.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    for (int i = 0; i < MAX_VAL - 1; i++)
    {
        numbers.push_back(i);
    }
	
	numbers.push_back(10002);

	try{
		mySpan1.addNumber(numbers.begin(), numbers.end());
		std::cout << mySpan1.shortestSpan() << std::endl;
		std::cout << mySpan1.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}