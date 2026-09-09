#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default const of Animal" << std::endl;
}

Animal::Animal (Animal const &src)
{
	std::cout << "Cpy const of Animal" << std::endl;
	*this = src;
}

Animal::~Animal ()
{
	std::cout << "Destructor of Animal" << std::endl;
}

Animal & Animal::operator=(Animal const & src){
	this->type = src.type;		

	return(*this);
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::setType(std::string type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}