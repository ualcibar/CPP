#include "Intern.hpp"

AForm* Intern::makeForm(std::string formName, std::string target)
{
	std::string orders[3];
	int i;
	
	i = 0;
	orders[2] = "PresidentialPardonForm";
	orders[1] = "RobotomyRequestForm";
	orders[0] = "ShrubberyCreationForm";

	while (orders[i] != formName && i < 3)
		i++;	
	if (i >= 0 && i <= 2)
		std::cout << "Intern creates " << formName << std::endl;
	switch ( i )
    {
        case 2:
        	return new PresidentialPardonForm(target);
	    case 1:
        	return new RobotomyRequestForm(target);
		case 0:
        	return new ShrubberyCreationForm(target);
       default:
        	throw Intern::ClassNotFound();
    }
}

Intern::Intern(void)
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern & Intern::operator=(Intern const & src)
{	
	if (this != &src)
	{
		Intern *newInter = new Intern();
		return (*newInter);
	}
	return(*this);
}