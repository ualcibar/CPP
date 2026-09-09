#ifndef HumanA_HPP
#define HumanA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
    Weapon &weapon;

public:
	HumanA(std::string myName, Weapon &myWeapon);
	~HumanA();

    std::string getName(void) const;
    Weapon& getWeapon(void) const;
    void setWeapon(Weapon newWeapon);
    void attack();
};


#endif