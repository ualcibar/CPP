#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <list>

#ifndef INTERN_HPP
# define INTERN_HPP

class AForm;

class Intern {

public:
	Intern(void);
	~Intern();
	Intern(Intern const & src);
	
	Intern & operator=(Intern const & rhs);

	AForm* makeForm(std::string formName, std::string target);

	class ClassNotFound : public std::exception
	{
	public:
		const char * what () const throw ()
		{
			return ("ClassNotFound: Wrong name of class.");
		}
	};

};

//std::ostream& operator<<(std::ostream& os, const Intern& dt);

#endif