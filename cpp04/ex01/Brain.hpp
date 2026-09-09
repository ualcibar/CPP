#include <iostream>
#include <string.h>

#ifndef BRAIN_HPP
# define BRAIN_HPP

class Brain {
private:
	std::string ideas[100];
public:
	Brain(void);
	~Brain();
	Brain(Brain const &src);

	void setIdeas(std::string idea);
	void printIdeas(void);
	std::string* getIdeas(void);
	Brain& operator=(Brain const & rhs);
};
#endif
