/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:23:43 by plang             #+#    #+#             */
/*   Updated: 2024/09/27 10:27:25 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->_name = "diamondi";
	ClapTrap::_name = _name +"_clap_name";
	this->Hitp = FragTrap::Hitp;
	this->Energyp = 50;
	this->Attackdmg = FragTrap::Attackdmg;
	std::cout << "Default DiamondTrap " << this->_name << " constructed!" << std::endl;
}


DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	ClapTrap::_name = _name +"_clap_name";
	this->Hitp = FragTrap::Hitp;
	this->Energyp = 50;
	this->Attackdmg = FragTrap::Attackdmg;
	this->_name = name;
	std::cout << "DiamondTrap " << this->_name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	std::cout << "DiamondTrap copy constructed!" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << "DiamondTrap copy assignment of " << other._name << " to " << this->_name << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->Hitp = other.Hitp;
		this->Energyp = other.Energyp;
		this->Attackdmg = other.Attackdmg;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destroyd!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_name << ", ClapTrap name: " << ClapTrap::_name << std::endl;
}

unsigned int	DiamondTrap::getEp() const
{
	return this->Energyp;
}

unsigned int	DiamondTrap::getHp() const
{
	return this->Hitp;
}

unsigned int	DiamondTrap::getAd() const
{
	return this->Attackdmg;
}

std::string		DiamondTrap::getNm() const
{
	return this->_name;
}
