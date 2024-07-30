/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:38:37 by user              #+#    #+#             */
/*   Updated: 2024/07/30 18:36:48 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

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
            if (line == "ADD")
                pbook.adding_contact();
            if (line == "SEARCH")
                pbook.searching_contact();
            // throw std::runtime_error("Error");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}


// geeks for geeks cout. options, ccpreference, Case spesific file names according to classes
