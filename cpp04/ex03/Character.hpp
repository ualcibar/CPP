#include "ICharacter.hpp"
#include "AMateria.hpp"

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class Character : public ICharacter{
	
	private:
		AMateria* inventory[4];
		std::string name;

	public:
		Character();
		Character(std::string name);
		Character(Character const & rhs);
		~Character();
		

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

		Character& operator=(Character const & rhs);
};

#endif