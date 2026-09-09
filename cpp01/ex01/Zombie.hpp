/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:40:16 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/07 12:45:38 by marvin           ###   ########.fr       */
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
	Zombie(std::string name);
	Zombie();
	~Zombie(void);

	std::string getName(void) const;
	void setName(std::string name);
	void announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );
#endif