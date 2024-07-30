/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 16:15:06 by user              #+#    #+#             */
/*   Updated: 2024/07/30 18:19:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void    PhoneBook::adding_contact()
{
    std::string input;
    static int  success = 0;
    int         i;

    if (success > 7)
        i = success % MAX_CONTACT;
    else
        i = success;
    std::cout << "First name: ";
    std::getline(std::cin, input);
    this->contacts[i].set_first_name(input);
    std::cout << "Last name: ";
    std::getline(std::cin, input);
    this->contacts[i].set_last_name(input);
    std::cout << "Nickname: ";
    std::getline(std::cin, input);
    this->contacts[i].set_nickname(input);
    std::cout << "Darkest secret: ";
    std::getline(std::cin, input);
    this->contacts[i].set_darkest_secret(input);
    std::cout << "Phone number: ";
    std::getline(std::cin, input);
    this->contacts[i].set_phone_number(input);
    success++;
}

void    PhoneBook::searching_contact()
{
    this->print_PhoneBook();
}

void    PhoneBook::print_PhoneBook()
{
    for (int i = 0; i < MAX_CONTACT; i++)
    {
        std::cout << i << " " << this->contacts[i].get_first_name() << std::endl;
    }
}
