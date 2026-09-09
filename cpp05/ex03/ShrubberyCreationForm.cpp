#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src): AForm(src.getName(), 145, 137)
{
	this->target = src.getTarget();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return(this->target);
}

void ShrubberyCreationForm::setTarget(std::string target)
{
	this->target = target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & src)
{	
	this->target = src.getTarget();
	return(*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getGradeExec() >= executor.getGrade() && this->getIsSigned() == true)
	{
		std::ofstream MyFile(this->target + "_shrubbery");
		MyFile << "  $   \n $$$ \n$$$$$\n  $   \n";  
		MyFile.close();
		std::cout << "  $   \n $$$ \n$$$$$\n  $   \n";
	}
	else if (this->getGradeExec() <= executor.getGrade())
		throw Bureaucrat::GradeTooLowException();
}