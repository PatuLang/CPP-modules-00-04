/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:07:10 by plang             #+#    #+#             */
/*   Updated: 2024/10/01 14:44:14 by plang            ###   ########.fr       */
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
