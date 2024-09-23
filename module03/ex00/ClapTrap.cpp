/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:41:58 by plang             #+#    #+#             */
/*   Updated: 2024/09/23 17:03:15 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Default constructor */

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;	
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Constructor called" << std::endl;
}

/* Destructor */

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

/* Copy constructor */

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

/* Copy assignment operator */

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		*this = other;
	}
	return *this;
}

/* Member functions */

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hitp > 0)
	{
		std::cout << this->_name << " attacks, " << target << " causing " << this->Attackdmg << "points of damage" << std::endl;
		std::cout << this->_name << "looses one energy point" << std::endl;
		this->Energyp--;
		return ;
	}
	std::cout << this->_name << " has no hitpoints left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hitp > 0)
	{
		std::cout << this->_name << " takes " << amount << " damage" << std::endl;
		if (amount > this->Hitp)
			this->Hitp = 0;
		else
			this->Hitp -= amount;
	}
	else
		std::cout << this->_name << " has no hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitp > 0)
	{
		if (this->Hitp < 10)
		{
			std::cout << this->_name << " heals for " << (10 - amount) << " hitpoints" << std::endl;
			this->Hitp += (10 - amount);
			std::cout << this->_name << "looses one energy point" << std::endl;
			this->Energyp--;
		}
		else
			std::cout << this->_name << " is at full helath" << std::endl;
		return ;
	}
	std::cout << this->_name << " has no hitpoints left" << std::endl;
}
