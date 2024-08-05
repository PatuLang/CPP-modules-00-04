/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:26:01 by plang             #+#    #+#             */
/*   Updated: 2024/08/05 14:26:12 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int n = 5;
    Zombie* theHorde = zombieHorde(n, "Fred");
    for (int i = 0; i < n; i++)
    {
        theHorde[i].announce();
    }

    delete[] theHorde;
}
