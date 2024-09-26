/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:22:54 by plang             #+#    #+#             */
/*   Updated: 2024/09/26 13:41:23 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Default constructor */

ScavTrap::ScavTrap()
{
	this->_name = "scaver";
	this->Hitp = 100;
	this->Energyp = 50;
	this->Attackdmg = 20;
	std::cout << "Default ScavTrap " << this->_name << " constructed!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->Hitp = 100;
	this->Energyp = 50;
	this->Attackdmg = 20;
	std::cout << "ScavTrap " << this->_name << " constructed!" << std::endl;
}

/* Destructor */

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyd!" << std::endl;
}

/* Copy constructor */

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap copy constructed!" << std::endl;
	*this = other;
}

/* Copy assignment operator */

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap copy assignment of " << other._name << " to " << this->_name << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->Hitp = other.Hitp;
		this->Energyp = other.Energyp;
		this->Attackdmg = other.Attackdmg;
	}
	return *this;
}

/* ScavTrap member functions */

void	ScavTrap::attack(const std::string &target)
{
	if (this->Hitp > 0)
	{
		if (this->Energyp == 0)
		{
			std::cout << "ScavTrap " << this->_name << " is out of energy points" << std::endl;
			return ;
		}
		std::cout << "ScavTrap " << this->_name << " attacks, " << target << " causing " << this->Attackdmg << " points of damage" << std::endl;
		this->Energyp--;
		std::cout << "ScavTrap " << this->_name << " is now on " << this->Energyp << " energy point" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " has no hitpoints left" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode" << std::endl;
}
