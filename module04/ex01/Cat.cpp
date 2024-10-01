/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:56:20 by plang             #+#    #+#             */
/*   Updated: 2024/10/01 15:57:19 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called\n";
	this->_Brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other)
{
	this->_Brain = new Brain();
	std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &other)
	{
		this->type = other.type;
		delete this->_Brain;
		this->_Brain = new Brain(*other._Brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete this->_Brain;
	std::cout << "Brain ejected\n";
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!\n";
}

std::string Cat::getType(void) const
{
	return this->type;
}
