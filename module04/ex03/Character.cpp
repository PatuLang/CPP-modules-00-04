/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:04 by plang             #+#    #+#             */
/*   Updated: 2024/10/18 16:01:16 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor\n";
	for(int i = 0; i < 4; i++)
	{
		this->eqt_materia[i] = nullptr;
	}
}

Character::Character(std::string _name) : name(_name)
{
	std::cout << "Character name constructor\n";
	for(int i = 0; i < 4; i++)
	{
		this->eqt_materia[i] = nullptr;
	}
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor\n";
	this->name = other.name;
	for(int i = 0; i < 4; i++)
	{
		if (other.eqt_materia[i] != nullptr)
			this->eqt_materia[i] = other.eqt_materia[i]->clone();
		else
			this->eqt_materia[i] = nullptr;
	}
}

Character& Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment\n";
	if (this != &other)
	{
		this->name = other.name;
		for(int i = 0; i < 4; i++)
		{
			if (other.eqt_materia[i] != nullptr)
			{
				delete this->eqt_materia[i];
				this->eqt_materia[i] = other.eqt_materia[i]->clone();
			}
			else
				this->eqt_materia[i] = nullptr;
		}
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor\n";
	for (int i = 0; i < 4; i++)
	{
		delete this->eqt_materia[i];
	}
	Floor::deleteFloor();
}

std::string const& Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	if (m == nullptr)
	{
		std::cout << "Can't equip unlearned/uncreated materia\n";
		return;
	}
	// if (m->getHolder() == nullptr)
	// {
	// 	std::cout << "AMateria signed to " << this->name << "\n";
	// 	std::cout << m->getHolder() << "\n";
	// }
	// else if (this == m->getHolder())
	// {
	// 	std::cout << "This AMateria belongs to you: " << this->name << "\n";
	// }
	// else
	// {
	// 	std::cout << "This AMateria doesn't belong to " << this->name << "\n";
	// 	return ;
	// }
	for(int i = 0; i < 4; i++)
	{
		if (this->eqt_materia[i] == nullptr)
		{
			this->eqt_materia[i] = m;
			m->setHolder(this);
			return;
		}
	}
	std::cout << "Equiped materia invetory is full, inventory contains:\n";
	for (int i = 0; i < 4; i++)
		std::cout << "Slot " << i << ": " << this->eqt_materia[i]->getType() << " ";
	std::cout << std::endl;
	this->addToEnd(m);
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "* slot " << idx << " doesn't exist, select from slots 0,1,2,3 *\n";
		return ;
	}
	if (this->eqt_materia[idx] != nullptr)
	{
		this->addToEnd(eqt_materia[idx]);
		this->eqt_materia[idx] = nullptr;
		return ;
	}
	std::cout << "* No match found in " << idx << " *\n";
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "* slot " << idx << " doesn't exist, select from slots 0,1,2,3 *\n";
		return ;
	}
	if (this->eqt_materia[idx] != nullptr)
	{
		this->eqt_materia[idx]->use(target);
		return ;
	}
	std::cout << "* No match found in " << idx << " *\n";

}
