/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:34:31 by plang             #+#    #+#             */
/*   Updated: 2024/09/30 15:39:51 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown")
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(const Animal& other)
{
	this->type = other.type;
	std::cout << "Animal copy constructor called\n";
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
	std::cout << "Copy assignment operator called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

void	Animal::makeSound(void) const
{
	std::cout << "Moooo!\n";
}

std::string Animal::getType(void) const
{
	return this->type;
}
