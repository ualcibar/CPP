#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	std::cout << "----------------" << std::endl;
	try{
		Bureaucrat myBu(19, "unai");
		ShrubberyCreationForm myForm("hola");
		myForm.beSigned(myBu);
		myForm.execute(myBu);
		std::cout << myForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	try{
		Bureaucrat myBu(19, "unai");
		RobotomyRequestForm myForm("hola");
		//myForm.beSigned(myBu);
		myForm.execute(myBu);
		std::cout << myForm << std::endl;
		myForm.beSigned(myBu);
		myForm.execute(myBu);
		std::cout << myForm << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	try{
		Bureaucrat myBu(50, "unai");
		PresidentialPardonForm myForm("hola");
		std::cout << myBu << std::endl;
		//myForm.beSigned(myBu);
		myForm.execute(myBu);	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	try{
		Bureaucrat myBu(50, "unai");
		PresidentialPardonForm myForm("hola");
		std::cout << myBu << std::endl;
		myBu.increment(45);
		std::cout << myBu << std::endl;
		myForm.beSigned(myBu);
		myForm.execute(myBu);		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
	try{
		Bureaucrat myBu(4, "unai");
		PresidentialPardonForm myForm("hola");
		std::cout << myBu << std::endl;
		myForm.beSigned(myBu);
		myBu.executeForm(myForm);		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "----------------" << std::endl;
}