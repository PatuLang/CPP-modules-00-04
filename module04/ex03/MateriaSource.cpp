/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:13 by plang             #+#    #+#             */
/*   Updated: 2024/10/21 11:51:29 by plang            ###   ########.fr       */
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
		if (other.inventory[i] != nullptr)
			this->inventory[i] = other.inventory[i]->clone();
		else
			this->inventory[i] = nullptr;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	std::cout << "MateriaSource copy assignment\n";
	if (this != &other)
	{
		for(int i = 0; i < 4; i++)
		{
			delete this->inventory[i];
			this->inventory[i] = nullptr;
		}
		for(int i = 0; i < 4; i++)
		{
			if (other.inventory[i] != nullptr)
				this->inventory[i] = other.inventory[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor\n";
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != nullptr)
		{
			delete this->inventory[i];
			this->inventory[i] = nullptr;
		}
	}
}

void	MateriaSource::learnMateria(AMateria *other)
{
	if (!other)
		return ;
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == nullptr)
		{
			this->inventory[i] = other;
			return ;
		}
	}
	std::cout << "No room for " << other->getType() << ", inventory is full\n";
	delete other;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for(int i = 0; i < 4; i++)
	{
		if (inventory[i] != nullptr)
			if (inventory[i]->getType() == type)
				return inventory[i]->clone();
	}
	std::cout << "Inventory doesn't have " << type << " as materia\n";
	return nullptr;
}
