/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:13 by plang             #+#    #+#             */
/*   Updated: 2024/10/14 15:54:44 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor\n";
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = nullptr;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	std::cout << "MateriaSource copy constructor\n";
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = other.inventory[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "MateriaSource copy assignment\n";
	if (this != &other)
	{
		// for(int i = 0; i < 4; i++)
		// 	delete this->inventory[i];
		for(int i = 0; i < 4; i++)
			this->inventory[i] = other.inventory[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor\n";
}

void	MateriaSource::learnMateria(AMateria *other)
{
	if (!other)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = other;
			return ;
		}
	}
	std::cout << "No room for " << other->getType() << ", inventory is full\n";
	// delete other; // check if we delete thsi in the main
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i]->getType().compare(type))
			return inventory[i]->clone();
	}
	std::cout << "Inventory doesn't have " << type << " as materia\n";
	return nullptr;
}