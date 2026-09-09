#include "Ice.hpp"

Ice::Ice()
{
	//std::cout << "Ice default constructor" << std::endl;
	this->type = "ice";
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	//std::cout << "Ice type constructor" << std::endl;
}

Ice::Ice(Ice const & src)
{
	//std::cout << "Cure default constructor" << std::endl;
	this->type = src.type;
}

Ice::~Ice()
{
	//std::cout << "Ice destructor" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria* tmp = new Ice();
	return(tmp);
}

Ice& Ice::operator=(Ice const & rhs)
{
	this->type = rhs.type;
	return (*this);
}