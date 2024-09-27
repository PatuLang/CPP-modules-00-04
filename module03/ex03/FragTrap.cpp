/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:29:41 by plang             #+#    #+#             */
/*   Updated: 2024/09/26 20:06:00 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "fragger";
	this->Hitp = 100;
	this->Energyp = 100;
	this->Attackdmg = 30;
	std::cout << "Default FragTrap " << this->_name << " constructed!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->Hitp = 100;
	this->Energyp = 100;
	this->Attackdmg = 30;
	std::cout << "FragTrap " << this->_name << " constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap copy constructed!" << std::endl;
	*this = other;
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment of " << other._name << " to " << this->_name << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->Hitp = other.Hitp;
		this->Energyp = other.Energyp;
		this->Attackdmg = other.Attackdmg;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destroyd!" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->_name << " wants to clap hands with someone" << std::endl;
}
