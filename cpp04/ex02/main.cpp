#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	Dog miPerro;
	const Animal* i = new Cat();
	i->makeSound();
	miPerro.makeSound();
	delete i;
	//Animal tmp;
	return 0;
}