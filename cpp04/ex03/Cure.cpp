#include "Cure.hpp"

Cure::Cure()
{
	//std::cout << "Cure default constructor" << std::endl;
	this->type = "cure";
}

Cure::Cure(Cure const & src)
{
	//std::cout << "Cure default constructor" << std::endl;
	this->type = src.type;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	//std::cout << "Cure type constructor" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure destructor" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	AMateria* tmp = new Cure(*this);
	return(tmp);
}

Cure& Cure::operator=(Cure const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

