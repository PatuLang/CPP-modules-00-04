/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:26:15 by user              #+#    #+#             */
/*   Updated: 2024/08/01 14:07:50 by user             ###   ########.fr       */
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
