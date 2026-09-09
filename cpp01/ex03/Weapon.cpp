#include "Weapon.hpp"

Weapon::Weapon()
{
    //std::cout << "Constructor Weapon vacio "<< std::endl;
}

Weapon::Weapon(std::string startType)
{
    type = startType;
    //std::cout << "Constructor Weapon con valores " << std::endl;
}

Weapon::~Weapon()
{
    //std::cout << "Weapon " << getType() << " destroyed" << std::endl;
}

std::string Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(std::string name)
{
    this->type = name;
}