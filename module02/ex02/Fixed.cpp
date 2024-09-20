/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:41:45 by plang             #+#    #+#             */
/*   Updated: 2024/09/20 16:00:13 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
}

Fixed::Fixed(const int i_nbr)
{
	this->_fixed = i_nbr << this->fractional_bits;
}

Fixed::Fixed(const float f_nbr)
{
	this->_fixed = ((f_nbr) * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed()
{
}




Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
	{
		this->_fixed = other._fixed;
	}
	return *this;
}

bool	Fixed::operator>(const Fixed& other) const
{
	return this->_fixed > other._fixed;
}

bool	Fixed::operator<(const Fixed& other) const
{
	return this->_fixed < other._fixed;
}

bool	Fixed::operator>=(const Fixed& other) const
{
	return this->_fixed >= other._fixed;
}

bool	Fixed::operator<=(const Fixed& other) const
{
	return this->_fixed <= other._fixed;
}

bool	Fixed::operator==(const Fixed& other) const
{
	return this->_fixed == other._fixed;
}

bool	Fixed::operator!=(const Fixed& other) const
{
	return this->_fixed != other._fixed;
}

Fixed	Fixed::operator+(const Fixed& other)
{
	Fixed	result;

	result._fixed = this->_fixed + other._fixed;
	return result;
}

Fixed	Fixed::operator-(const Fixed& other)
{
	Fixed	result;

	result._fixed = this->_fixed - other._fixed;
	return result;
}

Fixed	Fixed::operator*(const Fixed& other)
{
	Fixed	result;

	result._fixed = (this->_fixed * other._fixed) >> fractional_bits;
	return result;
}

Fixed	Fixed::operator/(const Fixed& other)
{
	Fixed	result;

	result._fixed = (this->_fixed << fractional_bits) / other._fixed;
	return result;
}



Fixed	Fixed::operator++()
{
	++this->_fixed;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;

	this->_fixed++;
	return temp;
}

Fixed	Fixed::operator--()
{
	--this->_fixed;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;

	this->_fixed--;
	return temp;
}



Fixed&	Fixed::min(Fixed& one, Fixed& two)
{
	return one < two ? one : two;
}

const Fixed&	Fixed::min(const Fixed& one, const Fixed& two)
{
	return one < two ? one : two;
}

Fixed&	Fixed::max(Fixed& one, Fixed& two)
{
	return one > two ? one : two;
}

const Fixed&	Fixed::max(const Fixed& one, const Fixed& two)
{
	return one > two ? one : two;
}



int	Fixed::getRawBits(void) const
{
	return this->_fixed;
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
