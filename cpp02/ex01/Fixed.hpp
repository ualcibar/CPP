/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:21:52 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/18 17:21:52 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int fixed_int;
    int const static fract_int = 8;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &fixed);
	
	~Fixed();
	
    
	//Fixed &operator<<(const Fixed &fix);
	Fixed &operator=(const Fixed &fix);
	
	int getRawBits( void ) const;
	void setRawBits ( int const raw ); 

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator <<(std::ostream &out, const Fixed &value);
#endif