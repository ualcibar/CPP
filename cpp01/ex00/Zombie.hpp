/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:40:16 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/06 12:44:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string _Name;

public:
	Zombie(std::string _Name);
	Zombie();
	~Zombie();

	std::string getName(void) const;
	void announce(void) const;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif