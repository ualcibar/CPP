/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:33:02 by ualcibar          #+#    #+#             */
/*   Updated: 2023/02/06 17:26:08 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(10)
{
	std::cout << "Unamed ClapTrap contructor called\n";
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(10)
{
	std::cout << "Named ClapTrap contructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const &trap)
{
	std::cout << "Copy ClapTrap contructor called\n";
	*this = trap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called\n";
}

ClapTrap & ClapTrap::operator=(ClapTrap const &trap){
	this->name = trap.getName();	
	this->hitPoints = trap.getHitPoints();	
	this->energyPoints = trap.getEnergyPoints();	
	this->attackDamage = trap.getAttackDamage();	
	return(*this);
}

bool ClapTrap::operator==(ClapTrap const & trap){
	if (this->name == trap.getName() ||
	this->hitPoints == trap.getHitPoints() ||
	this->energyPoints == trap.getEnergyPoints() ||
	this->attackDamage == trap.getAttackDamage())
		return (true);
	return(false);
}

std::string ClapTrap::getName() const
{
	return this->name;
}
int ClapTrap::getHitPoints() const
{
	return this->hitPoints;
}
int ClapTrap::getEnergyPoints() const
{
	return this->energyPoints;
}
int ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}
void ClapTrap::setHitPoints(int amount)
{
	this->hitPoints = amount;
}
void ClapTrap::setEnergyPoints(int amount)
{
	this->energyPoints = amount;
}
void ClapTrap::setAttackDamage(int amount)
{
	this->attackDamage = amount;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!\n"; 
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " recived " << amount << " of points of damage" << std::endl;
	this->hitPoints = this->hitPoints - amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << getName() << " heal " << amount << " of points of damage" << std::endl;
	this->hitPoints = this->hitPoints + amount;
}