#include "Bureaucrat.hpp" 
#include "Form.hpp" 

Bureaucrat::Bureaucrat(void)
{
	//std::cout << "Default const of Bureaucrat" << std::endl;
	
}

Bureaucrat::Bureaucrat (Bureaucrat const &src)
{
	//std::cout << "Cpy const of Bureaucrat" << std::endl;
	*this = src;
}

Bureaucrat::Bureaucrat (int grade, std::string name) : name(name), grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& dt)
{
    os << "Grade: " << dt.getGrade() << " Name: " << dt.getName();
    return os;
}

Bureaucrat::~Bureaucrat ()
{
	std::cout << "Destructor of Bureaucrat" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & src)
{	
	this->grade = src.grade;
	return(*this);
}

int Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

std::string Bureaucrat::getName(void) const
{
	return (this->name);
}

void Bureaucrat::signForm(Form &myForm)
{
	if (!myForm.getIsSigned())
		std::cout << this->name << " signed " << myForm.getName();
	else
		std::cout << this->name << " couldnt sign " << myForm.getName() << " becouse is already signed" << std::endl;

}

void Bureaucrat::increment(int newGrade)
{
	try {
		if (this->grade - newGrade <= 0)
			throw Bureaucrat::GradeTooHighException();
	}
   catch (std::exception &e) 
   {
	std::cout << e.what() << std::endl;
	return;
   }
   this->grade = this->grade - newGrade;
}

void Bureaucrat::decrement(int newGrade)
{
	try {
		if (this->grade + newGrade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
   catch (const Bureaucrat::GradeTooLowException & e) 
   {
	std::cout << e.what() << std::endl;
	return;
   }
   this->grade = this->grade + newGrade;
}