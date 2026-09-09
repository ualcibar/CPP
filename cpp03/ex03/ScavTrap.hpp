/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:13:18 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/28 19:00:44 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* https://dotnettutorials.net/lesson/how-cpp-constructors-called-in-inheritance/ */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
private:

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &trap);
	~ScavTrap();

	ScavTrap & operator=(ScavTrap const & trap);
	bool operator==(ScavTrap const & trap);
	
	void attack(std::string const & target);
	void guardGate();
};

#endif