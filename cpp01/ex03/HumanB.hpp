#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
    Weapon *weapon;

public:
	HumanB(std::string myName);
	HumanB();
	~HumanB();

    std::string getName(void) const;
    Weapon *getWeapon(void) const;
    void setWeapon(Weapon &newWeapon);
    void attack();
};


#endif