/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:40:16 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/07 12:47:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_Name = name;
}


Zombie::Zombie(void)
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

void Zombie::setName(std::string name)
{
	this->_Name = name;
}

void Zombie::announce(void) const
{
	std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
	
}