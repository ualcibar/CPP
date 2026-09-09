#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default const of Dog" << std::endl;
	this->myBrain = new Brain();
	setType("Dog");
}

Dog::Dog (Dog const &src)
{
	std::cout << "Cpy const of Dog" << std::endl;
	*this = src;
}

Dog::~Dog ()
{
	std::cout << "Destructor of Dog" << std::endl;
	delete myBrain;
}

Dog & Dog::operator=(Dog const & src){
	this->type = src.type;		

	return(*this);
}

void Dog::makeSound() const
{
	std::cout << "Guau Guau" << std::endl;
}

