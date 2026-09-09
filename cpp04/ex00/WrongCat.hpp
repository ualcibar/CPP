#include <iostream>
#include "WrongAnimal.hpp"

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

class WrongCat :  public WrongAnimal{
protected:
	std::string type;
	
private:

public:
	WrongCat(void);
	~WrongCat();
	WrongCat(WrongCat const &src);

	WrongCat & operator=(WrongCat const & rhs);
	
	virtual void makeSound(void) const;
};
#endif