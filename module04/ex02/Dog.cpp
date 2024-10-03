/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:56:16 by plang             #+#    #+#             */
/*   Updated: 2024/10/03 10:36:31 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called\n";
	this->_Brain = new Brain();
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	std::cout << "Dog copy constructor called\n";
	this->_Brain = new Brain(*other._Brain);
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other)
	{
		this->type = other.type;
		delete this->_Brain;
		this->_Brain = new Brain(*other._Brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete this->_Brain;
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

void	Dog::setIdeas(std::string newIdea, unsigned int i)
{
	this->_Brain->setIdeas(newIdea, i);
}

std::string	Dog::getIdeas(unsigned int i)
{
	return this->_Brain->getIdeas(i);
}
