#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat :  public Animal{
protected:
	std::string type;
	
private:
	Brain* myBrain;

public:
	Cat(void);
	~Cat();
	Cat(Cat const &src);

	Cat & operator=(Cat const & rhs);
	
	virtual void makeSound(void) const;
};
#endif