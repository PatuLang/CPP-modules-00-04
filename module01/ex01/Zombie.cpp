/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:26:32 by plang             #+#    #+#             */
/*   Updated: 2024/09/02 17:47:44 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_Zombie(std::string z_name)
{
    name = z_name;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout <<  "Zombie destroyed! (" << this->name << ")" << std::endl;
}