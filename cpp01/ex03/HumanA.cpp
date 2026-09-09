#include "HumanA.hpp"

HumanA::HumanA(std::string myName, Weapon &myWeapon) : name(myName), weapon(myWeapon)
{
}

HumanA::~HumanA()
{
	//std::cout << "HumanA " << getName() << " destroyed" << std::endl;
}


std::string HumanA::getName(void) const
{
    return (this->name);
}


Weapon& HumanA::getWeapon(void) const
{
    return (this->weapon);
}

void HumanA::setWeapon(Weapon newWeapon)
{
    this->weapon = newWeapon;
}

void HumanA::attack()
{
    std::cout << getName() << "attacks with his " << getWeapon().getType() << std::endl;
} 