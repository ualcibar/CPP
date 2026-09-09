/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:40:16 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/11 18:26:41 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_Name = name;
}

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << "Agur " << getName() << std::endl;
}

std::string Zombie::getName(void) const
{
	return (this->_Name);
}

void Zombie::announce(void) const
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}