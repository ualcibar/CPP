/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:59:17 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/20 17:43:56 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl(void)
{}

void Harl::debug (void)
{
	std::cout << "[DEBUG]\n" << "I loveto get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchupburger. I just love it!" << std::endl;
}
void Harl::info (void)
{
	std::cout << "[INFO]\n" << "I cannotbelieve adding extra bacon cost more money. You don’t put enough! If youdid I would not have to ask for it!." << std::endl;
}
void Harl::warning (void)
{
	std::cout << "[WARNING]\n" << "I think I deserve to have some extra bacon for free.I’ve been coming here for years and you just started working here lastmonth." << std::endl;
}
void Harl::error (void)
{
	std::cout << "[ERROR]\n" << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string orders[4];
	typedef void(Harl::*reaction)();
	int i;
	int j;
	
	j = 3;
	i = 0;
	orders[3] = "DEBUG";
	orders[2] = "INFO";
	orders[1] = "WARNING";
	orders[0] = "ERROR";

	while (orders[i] != level && i < 4)
		i++;
	reaction react[4] = {&Harl::error, &Harl::warning, &Harl::info, &Harl::debug};
	switch ( i )
    {
       	case 3:
        	(this->*react[i])();
			i--;
        case 2:
        	(this->*react[i])();
			i--;
	    case 1:
        	(this->*react[i])();
			i--;
		case 0:
        	(this->*react[i])();
			i--;
			break;
       default:
        	std::cout << "DON'T RECOGNIZED INPUT" << std::endl;
    }
}
