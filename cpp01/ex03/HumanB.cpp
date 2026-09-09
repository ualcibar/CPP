#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string myName)
{
    name = myName;
}

HumanB::~HumanB()
{
    //std::cout << "HumanB " << getName() << " destroyed" << std::endl;
}


std::string HumanB::getName(void) const
{
    return (this->name);
}


Weapon* HumanB::getWeapon(void) const
{
    return (this->weapon);
}

void HumanB::setWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}

void HumanB::attack()
{
    std::cout << getName() << " attacks with his " << this->weapon->getType()<< std::endl;
} 