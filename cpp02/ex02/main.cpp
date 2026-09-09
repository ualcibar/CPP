/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:42:42 by ualcibar          #+#    #+#             */
/*   Updated: 2023/01/18 17:42:42 by ualcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) / Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << Fixed( 5.05f ).getRawBits() << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	if (c > b)
		std::cout << "c es mayor" << std::endl;
	if (c != b)
		std::cout << "son diferentes" << std::endl;
	std::cout << "c + b: " << (c + b) << std::endl;
	std::cout << "c - b: " << (c - b) << std::endl;

	return 0;
}