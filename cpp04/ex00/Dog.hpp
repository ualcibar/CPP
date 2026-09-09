#include <iostream>
#include "Animal.hpp"

#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal{
protected:
	std::string type;
	
private:
public:
	Dog(void);
	~Dog();
	Dog(Dog const &src);

	Dog & operator=(Dog const & rhs);

	virtual void makeSound(void) const;
};
#endif