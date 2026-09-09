/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:13:24 by ualcibar          #+#    #+#             */
/*   Updated: 2023/02/02 09:40:36 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Operador de copia(deep cpy) y de igualdad

# include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Unamed FragTrap contructor called\n";
	
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){
	std::cout << "Named FragTrap contructor called\n";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}
FragTrap::FragTrap(FragTrap const &trap) : ClapTrap(trap){
	std::cout << "Copy ScavTrap contructor called\n";
	*this = trap;
}
FragTrap & FragTrap::operator=(FragTrap const & trap){
	this->name = trap.getName();	
	this->hitPoints = trap.getHitPoints();	
	this->energyPoints = trap.getEnergyPoints();	
	this->attackDamage = trap.getAttackDamage();	
	return(*this);
}

bool FragTrap::operator==(FragTrap const & trap){
	if (this->name == trap.getName() ||
	this->hitPoints == trap.getHitPoints() ||
	this->energyPoints == trap.getEnergyPoints() ||
	this->attackDamage == trap.getAttackDamage())
		return (true);
	return(false);
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap says heeeeeeeey." << std::endl;
}