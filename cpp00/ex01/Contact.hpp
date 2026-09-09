/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 20:03:46 by ualcibar          #+#    #+#             */
/*   Updated: 2022/12/27 17:26:06 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
	std::string _FirstName;
	std::string _LastName;
	std::string _Nickname;
	std::string _DarkestSecret;
	
	int 		_Phone;
	int 		_Id;
	

public:
	Contact(std::string fst_name, std::string lst_name,
				std::string nick, std::string drk_secret, 
				int nb );
	Contact(void);
	~Contact(void);

	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getDarkestSecret(void) const;
	int			getPhone(void) const;
	int			getId(void) const;
	
	void		setFirstName(std::string name);
	void		setLastName(std::string name);
	void		setNickname(std::string name);
	void		setDarkestSecret(std::string secret);
	void		setPhone(int phone);
	void		setId(int newId);
};

#endif