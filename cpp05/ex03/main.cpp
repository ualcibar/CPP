#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
	std::cout << "----------------" << std::endl;
	try{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat myBu(2, "unai");

		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		rrf->execute(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->beSigned(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->execute(myBu);

		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	try{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat myBu(2, "unai");

		rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
		rrf->execute(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->beSigned(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->execute(myBu);

		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
		try{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat myBu(2, "unai");

		rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
		rrf->execute(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->beSigned(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->execute(myBu);

		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	try{
		Intern someRandomIntern;
		AForm* rrf;
		Bureaucrat myBu(2, "unai");

		rrf = someRandomIntern.makeForm("XX", "Bender");
		rrf->execute(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->beSigned(myBu);
		std::cout << *(rrf) << std::endl;
		rrf->execute(myBu);

		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
}