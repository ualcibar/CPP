#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default const of WrongCat" << std::endl;
	setType("WrongCat");
}

WrongCat::WrongCat (WrongCat const &src)
{
	std::cout << "Cpy const of WrongCat" << std::endl;
	*this = src;
}

WrongCat::~WrongCat ()
{
	std::cout << "Destructor of WrongCat" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & src){
	this->type = src.type;		

	return(*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Miaaauuuu" << std::endl;
}