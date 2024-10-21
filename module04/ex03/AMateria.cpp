/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:08 by plang             #+#    #+#             */
/*   Updated: 2024/10/21 11:47:53 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor\n";
	this->holder = nullptr;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria type constructor\n";
	this->holder = nullptr;
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria copy constructor\n";
	this->_type = other._type;
	this->holder = nullptr;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria copy assignment\n";
	if (this != &other)
	{
		this->_type = other._type;
		this->holder = nullptr;
	}
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

void	AMateria::setHolder(ICharacter *other)
{
	this->holder = other;
}

ICharacter*	AMateria::getHolder() const
{
	return this->holder;
}
