/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:41:58 by plang             #+#    #+#             */
/*   Updated: 2024/09/26 14:33:24 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Default constructor */

ClapTrap::ClapTrap()
{
	this->_name = "stranger";
	this->Hitp = 10;
	this->Energyp = 10;
	this->Attackdmg = 0;
	std::cout << "Default ClapTrap " << this->_name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->Hitp = 10;
	this->Energyp = 10;
	this->Attackdmg = 0;
	std::cout << "ClapTrap " << this->_name << " constructed!" << std::endl;
}

/* Destructor */

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyd!" << std::endl;
}

/* Copy constructor */

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructed!" << std::endl;
	*this = other;
}

/* Copy assignment operator */

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap copy assignment of " << other._name << " to " << this->_name << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->Hitp = other.Hitp;
		this->Energyp = other.Energyp;
		this->Attackdmg = other.Attackdmg;
	}
	return *this;
}

/* ClapTrap member functions */

void	ClapTrap::attack(const std::string& target)
{
	if (this->Hitp > 0)
	{
		if (this->Energyp == 0)
		{
			std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
			return ;
		}
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->Attackdmg << " points of damage" << std::endl;
		this->Energyp--;
		std::cout << "ClapTrap " << this->_name << " is now on " << this->Energyp << " energy point" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has no hitpoints left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->Hitp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << amount << " damage" << std::endl;
		if (amount > this->Hitp)
			this->Hitp = 0;
		else
			this->Hitp -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no hitpoints left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->Hitp > 0)
	{
		if (this->Energyp == 0)
		{
			std::cout << "ClapTrap " << this->_name << " is out of energy points" << std::endl;
			return ;
		}
		if (this->Hitp < 10)
		{
			std::cout << "ClapTrap " << this->_name << " heals for " << (amount) << " hitpoints" << std::endl;
			this->Hitp += amount;
			this->Hitp > 10 ? this->Hitp = 10 : this->Hitp;
			this->Energyp--;
			std::cout << "ClapTrap " << this->_name << " is now on " << this->Energyp << " energy point and " << this->Hitp << " hitpoints" << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " is at full hitpoints" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " has no hitpoints left" << std::endl;
}
