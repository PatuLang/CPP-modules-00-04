/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:24:41 by plang             #+#    #+#             */
/*   Updated: 2024/08/30 17:02:57 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    PhoneBook::adding_contact()
{
    std::string input;
    static int  success = 0;
    int         i;

    if (success > 7)
        i = success % MAX_CONTACT;
    else
        i = success;
    this->contacts[i].set_first_name("");
    while (this->contacts[i].get_first_name().empty())
    {
        std::cout << "First name: ";
        std::getline(std::cin, input);
        this->contacts[i].set_first_name(input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            throw std::runtime_error("Sending you back to the 2020s");
        }
    }
    this->contacts[i].set_last_name("");
    while (this->contacts[i].get_last_name().empty())
    {
        std::cout << "Last name: ";
        std::getline(std::cin, input);
        this->contacts[i].set_last_name(input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            throw std::runtime_error("Sending you back to the 2020s");
        }
    }
    this->contacts[i].set_nickname("");
    while (this->contacts[i].get_nickname().empty())
    {
        std::cout << "Nickname: ";
        std::getline(std::cin, input);
        this->contacts[i].set_nickname(input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            throw std::runtime_error("Sending you back to the 2020s");
        }
    }
    this->contacts[i].set_darkest_secret("");
    while (this->contacts[i].get_darkest_secret().empty())
    {
        std::cout << "Darkest secret: ";
        std::getline(std::cin, input);
        this->contacts[i].set_darkest_secret(input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            throw std::runtime_error("Sending you back to the 2020s");
        }
    }
    this->contacts[i].set_phone_number("");
    while (this->contacts[i].get_phone_number().empty())
    {
        std::cout << "Phone number: ";
        std::getline(std::cin, input);
        this->contacts[i].set_phone_number(input);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            throw std::runtime_error("Sending you back to the 2020s");
        }
    }
    success++;
}

void    PhoneBook::searching_contact()
{
    this->print_PhoneBook();
}

void    PhoneBook::print_PhoneBook()
{
    std::string line;
    int         i;

    for (int i = 0; i < MAX_CONTACT; i++)
    {
        std::cout << std::setw(10) << i + 1;
        std::cout << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].get_first_name(), 10);
        std::cout << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].get_last_name(), 10);
        std::cout << "|";
        std::cout << std::setw(10) << truncate(this->contacts[i].get_nickname(), 10);
        std::cout << std::endl;
    }
    while (1)
    {
        std::cout << "Choose the contact, 1 - 8 or type BACK to go one page back > ";
        std::getline(std::cin, line);
        if (std::cin.eof())
        {
            std::cout << std::endl;
            throw std::runtime_error("Sending you back to the 2020s");
        }
        try
        {
            if (line == "BACK")
                break ;
            i = std::stoi(line);
            if (i > 8 || i < 1)
                std::cout << "The PhoneBook only has 8 slots" << std::endl;
            else if (this->contacts[i - 1].get_first_name().empty())
                std::cout << "That contact doesn't exsist" << std::endl;
            else
                this->contacts[i - 1].print_contact();
        }
        catch (const std::exception& e)
        {
            std::cerr << "Invalid arument: " << e.what() << std::endl;
        }
    }

}

std::string PhoneBook::truncate(std::string string, size_t size)
{
    std::string newstr;

    if (string.size() > size)
    {
        newstr = string.substr(0, 9) + ".";
        return newstr;
    }
    else
        return string;
}
