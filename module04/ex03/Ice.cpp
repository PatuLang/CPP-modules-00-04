/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:05:57 by plang             #+#    #+#             */
/*   Updated: 2024/10/10 16:52:19 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	std::cout << "Ice constructor\n";
}

Ice::Ice(const Ice &other)
{
	std::cout << "Ice copy constructor\n";
}

Ice& Ice::operator=(const Ice &other)
{
	std::cout << "Ice copy assignment\n";
}

Ice::~Ice()
{
	std::cout << "Ice destructor\n";
}

std::string const& Ice::getType() const
{
	return this->type;
}

AMateria* Ice::clone() const
{

}

void	Ice::use(ICharacter &target)
{
	
}
