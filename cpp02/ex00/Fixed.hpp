/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:44:26 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/18 16:44:26 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int fixed_int;
    int const static fract_int = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
    Fixed &operator=(const Fixed &fix);
	int getRawBits( void ) const;
	void setRawBits ( int const raw ); 
};

#endif