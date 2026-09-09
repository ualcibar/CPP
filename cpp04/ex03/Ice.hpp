#include <iostream>
#include "AMateria.hpp"

#ifndef ICE_HPP
# define ICE_HPP

class Ice : public AMateria{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const & src);
		~Ice();

		//std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const;
		void use(ICharacter& target);
		Ice& operator=(Ice const & rhs);
};

#endif