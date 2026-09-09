#include <iostream>
#include "Animal.hpp"

#ifndef CAT_HPP
# define CAT_HPP

class Cat :  public Animal{
protected:
	std::string type;
	
private:

public:
	Cat(void);
	~Cat();
	Cat(Cat const &src);

	Cat & operator=(Cat const & rhs);
	
	virtual void makeSound(void) const;
};
#endif