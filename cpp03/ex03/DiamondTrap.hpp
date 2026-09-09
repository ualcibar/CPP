#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;
	//using FragTrap::attackDamage;
	//using ScavTrap::energyPoints;
	//using FragTrap::hitPoints;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &trap);
	~DiamondTrap();

	DiamondTrap & operator=(DiamondTrap const & trap);
	bool operator==(DiamondTrap const & trap);
	
	int getHitPoints(void) const;
	int getAttackDamage(void) const;
	std::string getName(void) const;
	void attack(std::string const & target);
	void whoAmI(void);
};

#endif