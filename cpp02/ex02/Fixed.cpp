/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:42:47 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/18 17:42:47 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed ()
{
    //std::cout << "Default constructor called" << std::endl;
    this->fixed_int = 0;
}

Fixed::Fixed (const Fixed &fixed)
{
    //std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed (const int num)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->fixed_int = num << Fixed::fract_int;
    //std::cout << fixed_int << std::endl;
}

Fixed::Fixed (const float num)
{
    //std::cout << "Copy constructor called" << std::endl;
    this->fixed_int = roundf(num * (1 << this->fract_int));
    //std::cout << fixed_int << std::endl;
}

Fixed::~Fixed ()
{
    //std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fix)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_int = fix.getRawBits();
    return (*this);
}

std::ostream &operator <<(std::ostream &out, const Fixed &value)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    out << value.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed &fixed) const
{
	if (this->getRawBits() > fixed.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	
	if (this->getRawBits() < fixed.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	if (this->getRawBits() >= fixed.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	if (this->getRawBits() <= fixed.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	if (this->getRawBits() == fixed.getRawBits())
		return(true);
	return (false);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	if (this->getRawBits() != fixed.getRawBits())
		return(true);
	return (false);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	int value;
	Fixed returnV;
	
	value = this->getRawBits() + fixed.getRawBits();
	returnV.setRawBits(value);
	return (returnV);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	int value;
	Fixed returnV;

	value = this->getRawBits() - fixed.getRawBits();
	returnV.setRawBits(value);
	return (returnV);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	long int value;
	Fixed returnV;

	//std::cout << this->getRawBits() << std::endl;
	//std::cout << fixed.getRawBits() << std::endl;
	value = (long)this->getRawBits() * (long)fixed.getRawBits();
	returnV.setRawBits(value / (1 << Fixed::fract_int));
	return (returnV);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	int value;
	Fixed returnV;

	value = (this->getRawBits() *(1 << this->fract_int))/ fixed.getRawBits();
	returnV.setRawBits(value);
	return (returnV);
}

Fixed& Fixed::operator++(void) 
{
	setRawBits (this->getRawBits() + 1);
	return (*this);
}

Fixed Fixed::operator++(int) 
{
	Fixed result(*this);
	setRawBits (this->getRawBits() + 1);
	return (result);
}

Fixed& Fixed::operator--(void) 
{
	setRawBits (this->getRawBits() - 1);
	return (*this);
}

Fixed Fixed::operator--(int) 
{
	Fixed result(*this);
	setRawBits (this->getRawBits() - 1);
	return (result);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) 
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b) 
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (a);
}

Fixed& Fixed::min( Fixed &a,  Fixed &b) 
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed& Fixed::max( Fixed &a,  Fixed &b) 
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (a);
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_int = raw;
}

int Fixed::getRawBits( void ) const
{
	
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