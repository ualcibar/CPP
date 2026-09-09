/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:22:00 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/18 17:22:00 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed ()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixed_int = 0;
}

Fixed::Fixed (const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed (const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixed_int = num << Fixed::fract_int;
    //std::cout << fixed_int << std::endl;
}

Fixed::Fixed (const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixed_int = roundf(num * (1 << Fixed::fract_int));
    //std::cout << fixed_int << std::endl;
}

Fixed::~Fixed ()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator = (const Fixed &fix)
{
    std::cout << "Assignamtion operator called" << std::endl;
    this->fixed_int = fix.getRawBits();
    return (*this);
}

std::ostream &operator << (std::ostream &out, const Fixed &value)
{
    //std::cout << "Left Shift assignment operator called" << std::endl;
    out << value.toFloat();
    return out;
}
void Fixed::setRawBits( int const raw )
{
	this->fixed_int = raw;
}

int Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return(this->fixed_int);
}

float Fixed::toFloat( void ) const
{
    return (float)this->fixed_int / (float)(1 << Fixed::fract_int);
}

int Fixed::toInt( void ) const
{
    return this->fixed_int >> Fixed::fract_int;
}

