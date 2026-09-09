#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
    std::cout << "-------------------" << std::endl;
	Dog basic;
    {
        Dog tmp = basic;
    }
	std::cout << "-------------------" << std::endl;
	Brain myBrain;
	myBrain.setIdeas("Tengo hambre");
	myBrain.printIdeas();
	return 0;
}