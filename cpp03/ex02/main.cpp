/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:33:08 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/28 18:35:31 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap robot;
	FragTrap robot1("Unai");
	FragTrap robot2("Andoni");

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

	robot1.highFivesGuys();
	std::cout << std::endl;
}