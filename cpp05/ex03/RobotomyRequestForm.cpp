#include "RobotomyRequestForm.hpp"
#include <cstdlib>
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src): AForm(src.getName(), 72, 45)
{
	this->target = src.getTarget();
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return(this->target);
}

void RobotomyRequestForm::setTarget(std::string target)
{
	this->target = target;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & src)
{	
	this->target = src.getTarget();
	return(*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getGradeExec() >= executor.getGrade() && this->getIsSigned() == true)
	{
		std::cout << "Some Drilling noises..." << std::endl;
		srand((unsigned) time(NULL));
		if ((rand() % 2) + 1 ==  2)
			std::cout << this->getTarget() << "has been robotomized successfully." << std::endl;
		else
			std::cout << "The executor failed to robotomize <" << this->getTarget() << ">." << std::endl;
	}
	else if (this->getGradeExec() <= executor.getGrade())
		throw Bureaucrat::GradeTooLowException();

}