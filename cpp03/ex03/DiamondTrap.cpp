#include "DiamondTrap.hpp"

void DiamondTrap::attack(std::string const & target)
{
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(std::string name) :ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	//std::cout << "Named DiamondTrap has been created." << std::endl;
	this->name = name;

	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	//this->attackDamage = FragTrap::attackDamage;
	this->attackDamage = 30;
	std::cout << "Named DiamondTrap " << this->name << " created." << FragTrap::attackDamage << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &trap) : ClapTrap(trap), FragTrap(trap), ScavTrap(trap)
{
	std::cout << "Copy Constructor DiamondTrap has been created." << std::endl;
	*this = trap;
}
DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap has been destroyed." << std::endl;
}

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{	this->name = "";
	/*this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;*/
	std::cout << "Unnamed DiamondTrap has been created." << std::endl;
}

bool DiamondTrap::operator==(DiamondTrap const & trap){
	if (this->name == trap.getName() ||
	this->hitPoints == trap.getHitPoints() ||
	this->energyPoints == trap.getEnergyPoints() ||
	this->attackDamage == trap.getAttackDamage())
		return (true);
	return(false);
}

std::string DiamondTrap::getName(void) const
{
	return(this->name);
}

int DiamondTrap::getHitPoints(void) const
{
	return(this->hitPoints);
}

int DiamondTrap::getAttackDamage(void) const
{
	return(this->attackDamage);
}


void DiamondTrap::whoAmI(void) 
{
	std::cout << "Clap Name: " << ClapTrap::name << std::endl << "Diamond Name: " << this->name << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & trap){
	this->name = trap.getName();	
	this->hitPoints = trap.getHitPoints();	
	this->energyPoints = trap.getEnergyPoints();	
	this->attackDamage = trap.getAttackDamage();	
	return(*this);
}