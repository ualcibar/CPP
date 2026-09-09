/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:03:48 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/27 18:59:55 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string fst_name, std::string lst_name,
				std::string nick, std::string drk_secret, 
				int nb)
{
	this->_FirstName = fst_name;
	this->_LastName = lst_name;
	this->_Nickname = nick;
	this->_Phone = nb;
	this->_DarkestSecret = drk_secret;
	this->_Id = 0;
}

Contact::Contact(void)
{
	this->_Id = 0;
}
std::string Contact::getFirstName(void) const{
	return(this->_FirstName);
}

std::string Contact::getLastName(void) const{
	return(this->_LastName);
}

void Contact::setId(int newId){
	this->_Id = newId;
}

std::string Contact::getNickname(void) const{
	return(this->_Nickname);
}

int Contact::getPhone(void) const{
	return(this->_Phone);
}

int Contact::getId(void) const{
	return(this->_Id);
}

Contact::~Contact(void) {
   // Deallocate the memory that was previously reserved
   //  for this string.
}

void Contact::setFirstName(std::string name)
{
	this->_FirstName = name;
}

void Contact::setLastName(std::string name)
{
	this->_LastName = name;
}

void Contact::setNickname(std::string name)
{
	this->_Nickname = name;
}

void Contact::setDarkestSecret(std::string secret)
{
	this->_DarkestSecret = secret;
}
void Contact::setPhone(int phone)
{
	this->_Phone = phone;
}
std::string Contact::getDarkestSecret(void) const{
	return(this->_DarkestSecret);
}