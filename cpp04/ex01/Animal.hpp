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

	void makeSound(void) const;
};
#endif
