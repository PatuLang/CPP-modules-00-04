/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:56:20 by plang             #+#    #+#             */
/*   Updated: 2024/10/07 13:01:56 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called\n";
	this->_Brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	std::cout << "Cat copy constructor called\n";
	this->_Brain = new Brain(*other._Brain);
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

void	Cat::setIdeas(std::string newIdea, unsigned int i)
{
	if (i > 99)
	{
		std::cout << "Only 100 idea slots available\n";
		return ;
	}
	this->_Brain->setIdeas(newIdea, i);
}

std::string	Cat::getIdeas(unsigned int i)
{
	if (i > 99)
	{
		return "Only 100 idea slots available\n";
	}
	return this->_Brain->getIdeas(i);
}
