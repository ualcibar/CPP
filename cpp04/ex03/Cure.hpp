#include <iostream>
#include "AMateria.hpp"

#ifndef CURE_HPP
# define CURE_HPP

class Cure : public AMateria{
	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const & src);
		~Cure();

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

		Cure& operator=(Cure const & rhs);
};

#endif