/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:42:44 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/18 17:42:44 by ualcibar         ###   ########.fr       */
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
    static const int fract_int = 8;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(const Fixed &fixed);
	
	~Fixed();
	
    
	Fixed &operator<<(const Fixed &fix);
	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	Fixed &operator=(const Fixed &fix);
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	Fixed& operator++(void); // prefix ++ -> increment + return
	Fixed operator--(int); // postfix ++ -> return + increment
	Fixed& operator--(void); // prefix --
	Fixed operator++(int); // postfix --

	static const Fixed& max(const Fixed &a, const Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);

	static Fixed& min(Fixed &a, Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);

	int getRawBits( void ) const;
	void setRawBits ( int const raw ); 

	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream &operator <<(std::ostream &out, const Fixed &value);
#endif