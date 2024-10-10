/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:01 by plang             #+#    #+#             */
/*   Updated: 2024/10/10 16:52:17 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure constructor\n";
}

Cure::Cure(const Cure &other)
{
	std::cout << "Cure copy constructor\n";
}

Cure& Cure::operator=(const Cure &other)
{
	std::cout << "Cure copy assignment\n";
}

Cure::~Cure()
{
	std::cout << "Cure destructor\n";
}

std::string const& Cure::getType() const
{
	return this->type;
}

AMateria* Cure::clone() const
{

}

void	Cure::use(ICharacter &target)
{
	
}
