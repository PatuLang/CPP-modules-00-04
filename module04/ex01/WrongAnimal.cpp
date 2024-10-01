/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:06:21 by plang             #+#    #+#             */
/*   Updated: 2024/09/30 17:07:10 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown")
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	this->type = other.type;
	std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
	std::cout << "WrongCopy assignment operator called\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongMoooo!\n";
}

std::string WrongAnimal::getType(void) const
{
	return this->type;
}