#include <iostream>
#include <fstream>
#include "AForm.hpp"
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP



class ShrubberyCreationForm : public AForm {

	
private:
	std::string target;

public:
	ShrubberyCreationForm(void);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm(std::string target);

	void execute(Bureaucrat const & executor) const;

	std::string getTarget(void) const;
	void		setTarget(std::string target);
	//void 		beSigned(Bureaucrat &target);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

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