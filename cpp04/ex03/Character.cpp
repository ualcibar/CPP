#include "Character.hpp"

Character::Character()
{
	//std::cout << "Default constructor of character" << std::endl;
	for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
	
}

Character::Character(std::string name)
{
	this->name = name;
	//std::cout << "Name constructor of character" << std::endl;
	for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(Character const & rhs)
{
	for (int i = 0; i <= 3; i++)
	{
		if (inventory[i])
			*inventory[i] = *rhs.inventory[i];
	}
	this->name = rhs.getName();
}

Character::~Character()
{
	//std::cout << "Destructor of character" << std::endl;
	for (int i = 0; i < 4; i++)
    {
		if (inventory[i] == NULL)
			delete inventory[i];
	}
}

std::string const & Character::getName() const
{
	return(this->name);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i <= 3; i++)
	{
		if (inventory[i] == NULL)
			{
				inventory[i] = m;
				return;
			}
	}
	std::cout << "Not free spaces in inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "index must be a number from 0 to 3" << std::endl;
		return;
	}
	
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx])
		inventory[idx]->use(target);
	else
		std::cout << "Materia not found" << std::endl;
}

Character& Character::operator=(Character const & rhs)
{
	for (int i = 0; i <= 3; i++)
	{
		if (inventory[i])
			*inventory[i] = *rhs.inventory[i];
	}
	this->name = rhs.getName();
	return (*this);
}