/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:06:04 by plang             #+#    #+#             */
/*   Updated: 2024/10/10 16:24:31 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character constructor\n";
}

Character::Character(std::string _name) : name(_name)
{
	std::cout << "Character name constructor\n";
}

Character::Character(const Character &other)
{
	std::cout << "Character copy constructor\n";
}

Character& Character::operator=(const Character &other)
{
	std::cout << "Character copy assignment\n";
}

Character::~Character()
{
	std::cout << "Character destructor\n";
}

std::string const& Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{

}

void	Character::unequip(int idx)
{

}

void	Character::use(int idx, ICharacter &target)
{
	
}
