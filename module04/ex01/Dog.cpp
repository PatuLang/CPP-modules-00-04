/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:56:16 by plang             #+#    #+#             */
/*   Updated: 2024/10/01 15:42:39 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called\n";
	this->_Brain = new Brain();
}

Dog::Dog(const Dog& other) : Animal(other)
{
	this->type = other.type;
	std::cout << "Dog copy constructor called\n";
	this->_Brain = new Brain();
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Dog::~Dog()
{
	delete this->_Brain;
	std::cout << "Brain ejected\n";
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound(void) const
{
	std::cout << "Wuff!\n";
}

std::string Dog::getType(void) const
{
	return this->type;
}
