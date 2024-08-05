/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:27:25 by plang             #+#    #+#             */
/*   Updated: 2024/08/05 14:27:27 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (weapon == nullptr)
        std::cout << "Jim needs a weapon, with fists he will loose" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name): weapon(nullptr)
{
    this->name = name;
}

HumanB::~HumanB()
{
}
