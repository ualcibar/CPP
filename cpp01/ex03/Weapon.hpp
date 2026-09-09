#ifndef WEAPON_HPP
#define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string name);
	Weapon();
	~Weapon();

	std::string getType(void) const;
	void setType(std::string name);
};
#endif