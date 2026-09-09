#include <iostream>

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

class Animal {
protected:
	std::string type;
	void setType(std::string type);
	
private:
	

public:
	Animal(void);
	virtual ~Animal();
	Animal(Animal const &src);

	Animal& operator=(Animal const & rhs);
	std::string getType(void) const;

	virtual void makeSound(void) const = 0;
};
#endif
