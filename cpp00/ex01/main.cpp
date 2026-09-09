/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:36:31 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/09 20:28:58 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"
#include "PhoneBook.hpp"

bool isNumber(const std::string& s)
{
    int i = 0;
	while (s[i] != '\0')
	{
        if (std::isdigit(s[i]) == 0)
            return false;
		i++;
    }
	if (i > 14)
	{
		std::cout << "Numero demasiado largo.\n";
		return false;
	}
	return true;
}

int	main(void)
{
	std::string order;
	std::string fstName;
	std::string lstName;
	std::string nick;
	std::string secret;
	std::string phone;
	std::string 	id;
	PhoneBook	myPhonebook;
	
	std::cout << "Bienvenido a tu libro de contactos\nElige tu opcion:\n\tADD\n\tSEARCH\n\tEXIT\n";
	while (order.compare("EXIT") != 0)
	{
		std::cin>>order;
		if (std::cin.eof())
            break;
		if (order.compare("ADD") == 0)
		{
			std::cout << "First Name:";
			std::cin >> fstName;
			std::cout << "Last Name:";
			std::cin >> lstName;
			std::cout << "Nick Name:";
			std::cin >> nick;
			std::cout << "Darkest Secret:";
			std::cin >> secret;
			std::cout << "Phone:";
			std::cin >> phone;
			if (isNumber(phone))
			{
				myPhonebook.changeContact(fstName, lstName, nick, secret, std::atoi(phone.c_str()));
				std::cout << "  \n";
			}
			else
				std::cout << "Debes introducir un numero valido en la casilla de \"PHONE\"\n";
			std::cout << "\nElige tu opcion:\n\tADD\n\tSEARCH\n\tEXIT\n";
		}
		else if (order.compare("SEARCH") == 0)
		{
			myPhonebook.printSearchContacts();
			std::cout << "Elige un id:\n";
			std::cin >> id;
			if (myPhonebook.searchOldId() <= stoi(id) && myPhonebook.searchBiggestId() >= std::atoi(id.c_str()) && isNumber(id))
				myPhonebook.printContact(stoi(id));
			else
				std::cout << "Id no valido\n";
			std::cout << "\nElige tu opcion:\n\tADD\n\tSEARCH\n\tEXIT\n";
		}
		else if (order.compare("EXIT") != 0)
		{
			std::cout << "Orden no reconocida\n";
			std::cout << "\nElige tu opcion:\n\tADD\n\tSEARCH\n\tEXIT\n";
		}
		//std::cin.clear();
	}
}