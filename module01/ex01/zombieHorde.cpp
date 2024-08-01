/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:36:38 by user              #+#    #+#             */
/*   Updated: 2024/08/01 14:13:11 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* myHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        myHorde[i].set_Zombie(name);
    }
    return myHorde;
}
