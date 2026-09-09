/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:13:24 by ualcibar          #+#    #+#             */
/*   Updated: 2023/02/02 09:51:44 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Operador de copia(deep cpy) y de igualdad

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "Default ScavTrap contructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20; 
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	std::cout << "Named ScavTrap contructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20; 
}
ScavTrap::ScavTrap(ScavTrap const &trap) : ClapTrap(trap){
	std::cout << "Copy ScavTrap contructor called\n";
	*this = trap;
}
ScavTrap & ScavTrap::operator=(ScavTrap const & trap){
	this->name = trap.getName();	
	this->hitPoints = trap.getHitPoints();	
	this->energyPoints = trap.getEnergyPoints();	
	this->attackDamage = trap.getAttackDamage();	
	return(*this);
}

bool ScavTrap::operator==(ScavTrap const & trap){
	if (this->name == trap.getName() ||
	this->hitPoints == trap.getHitPoints() ||
	this->energyPoints == trap.getEnergyPoints() ||
	this->attackDamage == trap.getAttackDamage())
		return (true);
	return(false);
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called\n";
}

void ScavTrap::attack(std::string const & target)
{
	std::cout << "Scav Trap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!\n"; 
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}