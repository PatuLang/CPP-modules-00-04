/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:27:38 by plang             #+#    #+#             */
/*   Updated: 2024/09/02 11:15:45 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("Stone sword");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("Wooden stick");
        bob.attack();
    }
    {
        Weapon club = Weapon("Golf club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Baseball bat");
        jim.attack();
    }
    return 0;
}