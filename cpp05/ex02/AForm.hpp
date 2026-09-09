#include <iostream>
#include "Bureaucrat.hpp"
#ifndef AFORM_HPP
# define AFORM_HPP



class AForm {

private:
	const std::string name;
	bool 		isSigned;
	const int 	gradeSign;
	const int 	gradeExec;

public:
	AForm(void);
	virtual ~AForm();
	AForm(AForm const &src);
	AForm(std::string name, int gradeSign, int gradeExec);

	std::string getName(void) const;
	bool 		getIsSigned(void) const;
	int 		getGradeSign(void) const;
	int 		getGradeExec(void) const;
	void		setGradeSign(bool sign);

	virtual void execute(Bureaucrat const & executor) const = 0;
	void beSigned(Bureaucrat &myBureaucrat);
	AForm & operator=(AForm const & rhs);

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