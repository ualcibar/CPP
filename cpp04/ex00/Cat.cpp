#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default const of Cat" << std::endl;
	setType("Cat");
}

Cat::Cat (Cat const &src)
{
	std::cout << "Cpy const of Cat" << std::endl;
	*this = src;
}

Cat::~Cat ()
{
	std::cout << "Destructor of Cat" << std::endl;
}

Cat & Cat::operator=(Cat const & src){
	this->type = src.type;		

	return(*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaaauuuu" << std::endl;
}