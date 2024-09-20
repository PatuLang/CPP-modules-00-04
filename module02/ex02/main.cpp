/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:41:34 by plang             #+#    #+#             */
/*   Updated: 2024/09/20 16:14:24 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(10);
	Fixed c(2.42f);
	Fixed d(b);
	a = c;

	std::cout << std::endl;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;

	std::cout << std::endl;
	
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;

	std::cout << std::endl;

	std::cout << std::boolalpha;
	std::cout << (a < b) << std::endl;
	std::cout << (a <= b) << std::endl;
	std::cout << (d > b) << std::endl;
	std::cout << (b >= b) << std::endl;
	std::cout << (a == a) << std::endl;
	std::cout << (a != a) << std::endl;

	std::cout << std::endl;

	std::cout << (a + a) << std::endl;
	std::cout << (b - a) << std::endl;
	std::cout << (c * b) << std::endl;
	std::cout << (d / d) << std::endl;

	std::cout << std::endl;

	std::cout << b << std::endl;
	std::cout << ++b << std::endl;
	std::cout << b << std::endl;
	std::cout << b++ << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << b.min( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << a.max( a, b ) << std::endl;

	std::cout << std::endl;

	// Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	
	// std::cout << a << std::endl;
	// std::cout << ++a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a++ << std::endl;
	// std::cout << a << std::endl;
	// std::cout << b << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}