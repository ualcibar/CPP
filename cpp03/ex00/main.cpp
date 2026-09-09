/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:33:08 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/23 12:34:50 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot;
	ClapTrap robot1("Unai");
	ClapTrap robot2("Andoni");

	robot1.attack("Andoni");
	std::cout << robot1.getName() << "s info:" << std::endl;
	std::cout << "\t Hit Points: " << robot1.getHitPoints() << std::endl;
	std::cout << "\t Energy Points: " << robot1.getEnergyPoints() << std::endl;
	std::cout << "\t Attack Damage: " << robot1.getAttackDamage() << std::endl;
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
}