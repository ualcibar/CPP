#include "Bureaucrat.hpp"

int main ()
{
	try {
		Bureaucrat myBu(-2, "unai");
		std::cout << myBu.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat myBu(19, "unai");
		std::cout << myBu.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat myBu(170, "unai");
		std::cout << myBu.getGrade() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat myBu(19, "unai");
	myBu.increment(19);
	std::cout << "After incrementing 19: " << myBu.getGrade() << std::endl;
	myBu.decrement(19);
	std::cout << "After decrementing 19: " << myBu.getGrade() << std::endl;
	myBu.increment(200);
	std::cout << "After incrementing 200: " << myBu.getGrade() << std::endl;
	std::cout << myBu << std::endl;
}