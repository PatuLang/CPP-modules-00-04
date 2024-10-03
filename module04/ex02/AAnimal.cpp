/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:34:31 by plang             #+#    #+#             */
/*   Updated: 2024/10/03 10:37:05 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Unknown")
{
	std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal(const AAnimal& other)
{
	this->type = other.type;
	std::cout << "AAnimal copy constructor called\n";
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "AAnimal copy assignment operator called\n";
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called\n";
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Moooo!\n";
}

std::string AAnimal::getType(void) const
{
	return this->type;
}
