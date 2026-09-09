#include "AForm.hpp" 

AForm::AForm(void) : gradeSign(0), gradeExec(0)
{
	//std::cout << "Default const of AForm" << std::endl;
	this->isSigned = false;
}

AForm::AForm (AForm const &src) : name(src.getName()), gradeSign(src.getGradeExec()), gradeExec(src.getGradeExec())
{	
		this->isSigned = false;
}

AForm::AForm (std::string name, int gradeSign, int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeSign > 150)
		throw AForm::GradeTooLowException();
	else if (gradeSign <= 0 || gradeExec <= 0)
		throw AForm::GradeTooHighException();
	this->isSigned = false;
	//this->name = name;
	std::cout << this->name << std::endl;
}

AForm::~AForm ()
{
	std::cout << "Destructor of AForm" << std::endl;
}

void AForm::beSigned(Bureaucrat &myBureaucrat)
{
	try {
		if (this->getGradeSign() < myBureaucrat.getGrade())
			throw Bureaucrat::GradeTooLowException();
	}
   catch (const Bureaucrat::GradeTooLowException & e) 
   {
	std::cout << e.what() << std::endl;
	return;
   }
   this->isSigned = true;
}

std::string AForm::getName(void) const
{
	return (this->name);
}

void AForm::setGradeSign(bool sign) 
{
	this->isSigned = sign;
}
bool AForm::getIsSigned(void) const
{
	return (this->isSigned);
}

int AForm::getGradeSign(void) const
{
	return(this->gradeSign);
}

int AForm::getGradeExec(void) const
{
	return (this->gradeExec);
}

AForm & AForm::operator=(AForm const & src)
{	
	this->isSigned = src.getIsSigned();
	//this->gradeSign = *src.getGradeSign();
	return(*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& dt)
{
    std::cout << "Signe Grade: " << dt.getGradeSign() << " || Name: " << dt.getName()
	<< " || Exec Grade: " << dt.getGradeExec();
	if (dt.getIsSigned())
		std::cout << " || STATUS: Is signed" << std::endl;
	else
		std::cout << " || STATUS: Is not signed" << std::endl;
    return os;
}