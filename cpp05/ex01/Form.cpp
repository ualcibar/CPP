#include "Form.hpp" 

Form::Form(void) : gradeSign(75), gradeExec(75)
{
	//std::cout << "Default const of Form" << std::endl;
	this->isSigned = false;
}

Form::Form (Form const &src) : name(src.getName()), gradeSign(src.getGradeExec()), gradeExec(src.getGradeExec())
{	
		this->isSigned = false;
}

Form::Form (std::string name, int gradeSign, int gradeExec) : name(name), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign > 150 || gradeSign > 150)
		throw Form::GradeTooLowException();
	else if (gradeSign <= 0 || gradeExec <= 0)
		throw Form::GradeTooHighException();
	this->isSigned = false;
	//std::cout << this->name << std::endl;
}

Form::~Form ()
{
	std::cout << "Destructor of Form" << std::endl;
}

void Form::beSigned(Bureaucrat &myBureaucrat)
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

std::string Form::getName(void) const
{
	return (this->name);
}

bool Form::getIsSigned(void) const
{
	return (this->isSigned);
}

int Form::getGradeSign(void) const
{
	return(this->gradeSign);
}

int Form::getGradeExec(void) const
{
	return (this->gradeExec);
}

Form & Form::operator=(Form const & src)
{	
	this->isSigned = src.getIsSigned();
	//this->gradeSign = *src.getGradeSign();
	return(*this);
}

std::ostream& operator<<(std::ostream& os, const Form& dt)
{
    std::cout << "Signe Grade: " << dt.getGradeSign() << " || Name: " << dt.getName()
	<< " || Exec Grade: " << dt.getGradeExec();
	if (dt.getIsSigned())
		std::cout << " || STATUS: Is signed" << std::endl;
	else
		std::cout << " || STATUS: Is not signed" << std::endl;
    return os;
}