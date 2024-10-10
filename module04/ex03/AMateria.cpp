/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:08 by plang             #+#    #+#             */
/*   Updated: 2024/10/10 16:26:58 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria constructor\n";
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria type constructor\n";
}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AMateria copy constructor\n";
}

AMateria& AMateria::operator=(const AMateria &other)
{
	std::cout << "AMateria copy assignment\n";
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor\n";
}

std::string const& AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter &target)
{
	
}
