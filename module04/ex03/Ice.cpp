/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:05:57 by plang             #+#    #+#             */
/*   Updated: 2024/10/16 14:57:42 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice constructor\n";
	this->_type = "ice";
}

Ice::Ice(const Ice &other)
{
	std::cout << "Ice copy constructor\n";
	this->_type = other._type;
}

Ice& Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy assignment\n";
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destructor\n";
}

std::string const& Ice::getType() const
{
	return this->_type;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
