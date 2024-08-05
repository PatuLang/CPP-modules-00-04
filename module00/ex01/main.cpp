/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:24:21 by plang             #+#    #+#             */
/*   Updated: 2024/08/05 14:24:23 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook   pbook;
    std::string line;

    try
    {
        while (1)
        {
            std::cout << "Choose one: ADD, SEARCH, EXIT >";
            std::getline(std::cin, line);
            if (std::cin.eof())
            {
                std::cout << std::endl;
                throw std::runtime_error("Sending you back to the 2020s");
            }
            else if (line == "ADD")
                pbook.adding_contact();
            else if (line == "SEARCH")
                pbook.searching_contact();
            else if (line == "EXIT")
            {
                std::cout << "Sending you back to the 2020s" << std::endl;
                break ;
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}
