#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "This is a dog: " << j->getType() << " " << std::endl;
	std::cout << "This is a cat: " << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;
	std::cout << "-------------------" << std::endl;
	std::cout << "Wrong Animal Test: " << std::endl;

	const WrongAnimal* WrongMeta = new WrongAnimal();
	const WrongAnimal* m = new WrongCat();

	//std::cout << "This is a dog: " << m->getType() << " " << std::endl;
	std::cout << "This is a cat: " << m->getType() << " " << std::endl;

	WrongMeta->makeSound();
	m->makeSound();
	delete WrongMeta;
	delete m;
return 0;
}