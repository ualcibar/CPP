#include <iostream>

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

class WrongAnimal {
protected:
	std::string type;
	void setType(std::string type);
private:
	

public:
	WrongAnimal(void);
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const &src);

	WrongAnimal& operator=(WrongAnimal const & rhs);
	std::string getType(void) const;

	void makeSound(void) const;
};
#endif
