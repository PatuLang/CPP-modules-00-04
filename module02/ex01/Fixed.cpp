/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:36:47 by plang             #+#    #+#             */
/*   Updated: 2024/09/18 17:23:55 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i_nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = i_nbr << this->fractional_bits;
}

Fixed::Fixed(const float f_nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed = ((f_nbr) * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_fixed = other._fixed;
	}
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->_fixed;
	std::cout << "getRawBits member function called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

int	Fixed::toInt(void) const
{
	return this->_fixed >> this->fractional_bits;
}

float	Fixed::toFloat(void) const
{
	return (float)(this->_fixed / (float)(1 << this->fractional_bits));
}

std::ostream& operator<<(std::ostream &out, const Fixed &obj)
{
	return out << obj.toFloat();
}
