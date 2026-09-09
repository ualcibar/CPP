/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:03:46 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/27 18:49:47 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact _Book[8];
	int		_NbContact;	

public:
	PhoneBook(void);
	~PhoneBook(void);
	
	int 	addContact(Contact myContact);
	int 	searchContact(Contact myContact);
	int 	searchContactById(int myContact);
	int		searchOldId(void);
	int		searchBiggestId(void);
	int 	getNbContact(void) const;

	int 	showPhoneBook(void);
	void	printSearchContacts(void);
	void	printContact(int id);
	void	changeContact(std::string fst_name, std::string lst_name,
				std::string nick, std::string drk_secret, 
				int nb);
};

#endif