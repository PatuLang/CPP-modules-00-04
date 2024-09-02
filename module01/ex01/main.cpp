/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:26:01 by plang             #+#    #+#             */
/*   Updated: 2024/09/02 17:55:49 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 5;
    Zombie* theHorde = zombieHorde(n, "Fred");
    Zombie* newHorde = zombieHorde(n, "Alfred");
    for (int i = 0; i < n; i++)
    {
        theHorde[i].announce();
    }
    delete[] theHorde;
    for (int i = 0; i < n; i++)
    {
        newHorde[i].announce();
    }
    delete[] newHorde;
}
