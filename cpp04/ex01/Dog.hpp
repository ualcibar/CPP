#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal{	
private:
	Brain* myBrain;
public:
	Dog(void);
	~Dog();
	Dog(Dog const &src);

	Dog & operator=(Dog const & rhs);

	virtual void makeSound(void) const;
};
#endif