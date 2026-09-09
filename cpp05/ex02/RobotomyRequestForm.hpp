#include <iostream>
#include <fstream>
#include "AForm.hpp"
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP



class RobotomyRequestForm : public AForm {

	
private:
	std::string target;

public:
	RobotomyRequestForm(void);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm(std::string target);

	void execute(Bureaucrat const & executor) const;

	std::string getTarget(void) const;
	void		setTarget(std::string target);
	//void 		beSigned(Bureaucrat &target);
	RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

	class GradeTooHighException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			return ("GradeTooHighException: Grade must not be bigger than 150 and and lower than 1.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			return ("GradeTooLowException: Grade must not be lower than 1 and and bigger than 150.");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& dt);

#endif