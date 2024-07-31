/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:24:40 by user              #+#    #+#             */
/*   Updated: 2024/07/31 18:28:54 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  newZombie;
    std::string line;

    try
    {
        while (1)
        {
            std::cout << "Enter zombie name >";
            std::getline(std::cin, line);
            if (std::cin.eof())
            {
                std::cout << std::endl;
                throw std::runtime_error("");
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
