/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:07:10 by plang             #+#    #+#             */
/*   Updated: 2024/10/07 13:01:56 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called\n";
	*this = other;
}

Brain& Brain::operator=(const Brain &other)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

void	Brain::setIdeas(std::string newIdea, unsigned int i)
{
	if (i > 99)
	{
		std::cout << "Only 100 idea slots available\n";
		return ;
	}
	this->ideas[i] = newIdea;
}

std::string	Brain::getIdeas(unsigned int i)
{
	if (i > 99)
	{
		return "Only 100 idea slots available\n";
	}
	return this->ideas[i];
}
