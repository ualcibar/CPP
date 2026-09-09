#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src): AForm(src.getName(), 25, 5)
{
	this->target = src.getTarget();
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return(this->target);
}

void PresidentialPardonForm::setTarget(std::string target)
{
	this->target = target;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & src)
{	
	this->target = src.getTarget();
	return(*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getGradeExec() >= executor.getGrade() && this->getIsSigned() == true)
	{
		std::cout  << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else if (this->getGradeExec() <= executor.getGrade())
		throw Bureaucrat::GradeTooLowException();

}