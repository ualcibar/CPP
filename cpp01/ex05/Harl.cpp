/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:59:17 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/20 17:30:56 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void)
{}

void Harl::debug (void)
{
	std::cout << "I loveto get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchupburger. I just love it!" << std::endl;
}
void Harl::info (void)
{
	std::cout << "I cannotbelieve adding extra bacon cost more money. You don’t put enough! If youdid I would not have to ask for it!." << std::endl;
}
void Harl::warning (void)
{
	std::cout << "I think I deserve to have some extra bacon for free.I’ve been coming here for years and you just started working here lastmonth.." << std::endl;
}
void Harl::error (void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now.." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string orders[4];
	typedef void(Harl::*reaction)();
	int i;
	
	i = 0;
	orders[0] = "DEBUG";
	orders[1] = "INFO";
	orders[2] = "WARNING";
	orders[3] = "ERROR";

	while (orders[i] != level && i < 4)
		i++;
	if (i == 4)
		return ;
	reaction react[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	(this->*react[i])();
}
