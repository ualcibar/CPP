/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 10:33:04 by ualcibar          #+#    #+#             */
/*   Updated: 2023/02/06 17:26:13 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string name;
	int hitPoints;
	int energyPoints;
	int	attackDamage;
	//ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &trap);
	~ClapTrap();
	
	ClapTrap & operator=(ClapTrap const &trap);
	bool operator==(ClapTrap const &trap);
	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;
	
	void setName(std::string name);
	void setHitPoints(int amount);
	void setEnergyPoints(int amount);
	void setAttackDamage(int amount);
	
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif