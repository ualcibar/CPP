/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:13:18 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/28 18:33:47 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* https://dotnettutorials.net/lesson/how-cpp-constructors-called-in-inheritance/ */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &trap);
	~FragTrap();

	FragTrap & operator=(FragTrap const & trap);
	bool operator==(FragTrap const & trap);
	
	void  highFivesGuys(void);
};

#endif