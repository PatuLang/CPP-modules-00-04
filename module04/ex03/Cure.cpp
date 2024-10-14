/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:01 by plang             #+#    #+#             */
/*   Updated: 2024/10/14 15:38:38 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure constructor\n";
	this->_type = "cure";
}

Cure::Cure(const Cure &other)
{
	std::cout << "Cure copy constructor\n";
	this->_type = other._type;
}

Cure& Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy assignment\n";
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cure::~Cure()
{
	std::cout << "Cure destructor\n";
}

std::string const& Cure::getType() const
{
	return this->_type;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

// void	Cure::use(ICharacter &target)
// {
	
// }
