/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:37:11 by plang             #+#    #+#             */
/*   Updated: 2024/09/18 17:28:18 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( 10.1f );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );

	std::cout << std::endl;

	std::cout << "a is " << a.getRawBits() << " as fixed point value" << std::endl;
	std::cout << "b is " << b.getRawBits() << " as fixed point value" << std::endl;
	std::cout << "c is " << c.getRawBits() << " as fixed point value" << std::endl;
	std::cout << "d is " << d.getRawBits() << " as fixed point value" << std::endl;
	
	std::cout << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << std::endl;

	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	
	std::cout << std::endl;
	return 0;
}