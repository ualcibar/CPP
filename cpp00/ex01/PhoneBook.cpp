/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:03:48 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/28 12:38:10 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_NbContact = 0;
}

int PhoneBook::searchOldId(void)
{
	int i;
	int	id;
	i = 1;
	id = this->_Book[0].getId();
	
	while (i < this->_NbContact)
	{
		if (id > this->_Book[i].getId())
			id = this->_Book[i].getId();
		i++;
	}
	return (id);
}

int PhoneBook::searchBiggestId(void)
{
	int i;
	int	id;
	i = 1;
	id = this->_Book[0].getId();
	while (i < this->_NbContact)
	{
		if (id < this->_Book[i].getId())
			id = this->_Book[i].getId();
		i++;
	}
	
	return (id);
}

void PhoneBook::printContact(int id)
{
	int newId = searchContactById(id);
	std::cout << "Id: " << this->_Book[newId].getId() << " | \n" << 
				"First Name: " << this->_Book[newId].getFirstName() << " | \n" <<	
				"Last Name: " << this->_Book[newId].getLastName() << " | \n" <<	
				"Nickname: " << this->_Book[newId].getNickname() << " | \n" <<	
				"Darkest Secret: " << this->_Book[newId].getDarkestSecret() << " | \n" <<	
				"Phone: " <<this->_Book[newId].getPhone();
}

void PhoneBook::printSearchContacts(void)
{
	int i;
	int x;
	int number_of_digits;
	std::string var;
	
	i = 0;
	while (i < this->_NbContact)
	{
		if (this->_Book[i].getFirstName().size() > 10)
		{
			var = this->_Book[i].getFirstName().substr(0,9) + ".";
		} 
		else 
		{
			x = 10 - this->_Book[i].getFirstName().size();
			var = "";
			while (x > 0)
			{
				var = var + " ";
				x--;
			}
			var = var + this->_Book[i].getFirstName();
		}
		number_of_digits = 0;
		int id = this->_Book[i].getId();
		do {
		    ++number_of_digits; 
		    id /= 10;
		} while (id);
		x = 10 - number_of_digits;
		while (x > 0)
			{
				std::cout << " ";
				x--;
			}
		std::cout << this->_Book[i].getId();
		std::cout << "|" << var;
		
		if (this->_Book[i].getLastName().size() > 10)
		{
			var = this->_Book[i].getLastName().substr(0,9) + ".";
		} 
		else 
		{
			x = 10 - this->_Book[i].getLastName().size();
			var = "";
			while (x > 0)
			{
				var = var + " ";
				x--;
			}
			var = var + this->_Book[i].getLastName();
		}
		std::cout << "|" << var;
		if (this->_Book[i].getNickname().size() > 10)
		{
			var = this->_Book[i].getNickname().substr(0,9) + ".";
		} 
		else 
		{
			x = 10 - this->_Book[i].getNickname().size();
			var = "";
			while (x > 0)
			{
				var = var + " ";
				x--;
			}
			var = var + this->_Book[i].getNickname();
		}
		std::cout << "|" << var <<  "|\n";
		i++;
	}
}

int PhoneBook::searchContactById(int id)
{
	int i;
	
	i = 0;
	while (i < this->_NbContact)
	{
		if (id  == this->_Book[i].getId())
			return (i);
		i++;
	}
	return (-1);
}

int PhoneBook::addContact(Contact myContact)
{
	if (this->_NbContact < 8)
	{
		myContact.setId(this->_NbContact);
		this->_Book[this->_NbContact] = myContact;
		this->_NbContact++;
	}
	return (1);
}

void	PhoneBook::changeContact(std::string fst_name, std::string lst_name,
				std::string nick, std::string drk_secret, 
				int nb)
{
	int id;
	
	if (this->_NbContact < 8)
	{
		this->_Book[this->_NbContact].setId(this->_NbContact);
		this->_Book[this->_NbContact].setFirstName(fst_name);
		this->_Book[this->_NbContact].setNickname(nick);
		this->_Book[this->_NbContact].setLastName(lst_name);
		this->_Book[this->_NbContact].setDarkestSecret(drk_secret);
		this->_Book[this->_NbContact].setPhone(nb);
		this->_NbContact++;
	}
	else
	{
		id = this->searchContactById(this->searchOldId());
		this->_Book[id].setId(this->searchBiggestId() + 1);
		this->_Book[id].setFirstName(fst_name);
		this->_Book[id].setNickname(nick);
		this->_Book[id].setLastName(lst_name);
		this->_Book[id].setDarkestSecret(drk_secret);
		this->_Book[id].setPhone(nb);
	}
}

int PhoneBook::getNbContact() const
{
	return (this->_NbContact);
}

PhoneBook::~PhoneBook(void) {
	//delete[] _Book;
}
