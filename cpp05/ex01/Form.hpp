#include <iostream>
#include "Bureaucrat.hpp"
#ifndef FORM_HPP
# define FORM_HPP



class Form {

	
private:
	const		std::string name;
	bool 		isSigned;
	const int 	gradeSign;
	const int 	gradeExec;

public:
	Form(void);
	~Form();
	Form(Form const &src);
	Form(std::string name, int gradeSign, int gradeExec);

	std::string getName(void) const;
	bool 		getIsSigned(void) const;
	int 		getGradeSign(void) const;
	int 		getGradeExec(void) const;

	void beSigned(Bureaucrat &myBureaucrat);
	Form & operator=(Form const & rhs);

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

std::ostream& operator<<(std::ostream& os, const Form& dt);

#endif