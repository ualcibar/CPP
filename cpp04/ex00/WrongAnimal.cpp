#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default const of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal (WrongAnimal const &src)
{
	std::cout << "Cpy const of WrongAnimal" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal ()
{
	std::cout << "Destructor of WrongAnimal" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & src){
	this->type = src.type;		

	return(*this);
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Generic WrongAnimal sound" << std::endl;
}