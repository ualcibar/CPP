#include <iostream>

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

class Bureaucrat {

	
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(void);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat(int grade, std::string name);

	std::string getName(void) const;
	void	setGrade(int grade);
	int getGrade(void) const;

	void increment(int newGrade);
	void decrement(int newGrade);
	Bureaucrat & operator=(Bureaucrat const & rhs);

	class GradeTooHighException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			//delete this;
			return ("GradeTooHighException: Grade must not be bigger than 150 and and lower than 1.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			//delete this;
			return ("GradeTooLowException: Grade must not be lower than 1 and and bigger than 150.");
		}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& dt);

#endif