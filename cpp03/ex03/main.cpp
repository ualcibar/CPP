/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:33:08 by ualcibar          #+#    #+#             */
/*   Updated: 2023/02/03 09:05:03 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap robot1("Unai");

	robot1.attack("Andoni");
	std::cout << robot1.getName() << "s info:" << std::endl;
	std::cout << "\t Hit Points: " << robot1.getHitPoints() << std::endl;
	std::cout << "\t Energy Points: " << robot1.getEnergyPoints() << std::endl;
	std::cout << "\t Attack Damage: " << robot1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	robot1.whoAmI() ;
	std::cout << std::endl;
	
	robot1.takeDamage(3);
	std::cout << robot1.getName() << "s info:" << std::endl;
	std::cout << "\t Hit Points: " << robot1.getHitPoints() << std::endl;
	std::cout << "\t Energy Points: " << robot1.getEnergyPoints() << std::endl;
	std::cout << "\t Attack Damage: " << robot1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	robot1.beRepaired(3);
	std::cout << robot1.getName() << "s info:" << std::endl;
	std::cout << "\t Hit Points: " << robot1.getHitPoints() << std::endl;
	std::cout << "\t Energy Points: " << robot1.getEnergyPoints() << std::endl;
	std::cout << "\t Attack Damage: " << robot1.getAttackDamage() << std::endl;
	std::cout << std::endl;

	robot1.highFivesGuys();
	std::cout << std::endl;
}