/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:04 by plang             #+#    #+#             */
/*   Updated: 2024/10/15 14:33:31 by plang            ###   ########.fr       */
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
		this->eqt_materia[i] = other.eqt_materia[i];
}

Character& Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment\n";
	if (this != &other)
	{
		this->name = other.name;
		for(int i = 0; i < 4; i++)
			this->eqt_materia[i] = other.eqt_materia[i];
	}
	return *this;
}

Character::~Character()
{
	std::cout << "Character destructor\n";
	// for (int i = 0; i < 4; i++)
	// {
	// 	delete this->slots[i];
	// }
}

std::string const& Character::getName() const
{
	return this->name;
}

// void	Character::equip(AMateria* m)
// {

// }

// void	Character::unequip(int idx)
// {

// }

// void	Character::use(int idx, ICharacter &target)
// {
	
// }
