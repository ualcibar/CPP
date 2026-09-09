#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default const of Brain" << std::endl;
}

Brain::Brain (Brain const &src)
{
	std::cout << "Cpy const of Brain" << std::endl;
	*this = src;
}

std::string* Brain::getIdeas(void)
{
	return (this->ideas);
}

void Brain::printIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
}

void Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		 this->ideas[i] = idea;
}

Brain::~Brain ()
{
	std::cout << "Destructor of Brain" << std::endl;
	//delete[] (this->ideas);
}

Brain & Brain::operator=(Brain const & src){
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return(*this);
}