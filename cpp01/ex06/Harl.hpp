/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 10:59:19 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/20 17:31:54 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
	void debug ( void );
	void info ( void );
	void warning ( void );
	void error ( void );
	
public:
	Harl();
	void complain( std::string level );
};

#endif