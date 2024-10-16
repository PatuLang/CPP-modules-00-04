/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:08 by plang             #+#    #+#             */
/*   Updated: 2024/10/16 15:16:45 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor\n";
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria type constructor\n";
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria copy constructor\n";
	this->_type = other._type;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria copy assignment\n";
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor\n";
}

std::string const& AMateria::getType() const
{
	return this->_type;
}

void	AMateria::use(ICharacter&)
{
}
