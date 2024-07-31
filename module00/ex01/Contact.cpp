/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:24:26 by user              #+#    #+#             */
/*   Updated: 2024/07/31 18:38:48 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::set_first_name(std::string name)
{
    this->firstName = name;
}

void    Contact::set_last_name(std::string name)
{
    this->lastName = name;
}

void    Contact::set_nickname(std::string name)
{
    this->nickName = name;
}

void    Contact::set_darkest_secret(std::string secret)
{
    this->darkestSecret = secret;
}

void    Contact::set_phone_number(std::string number)
{
    this->phoneNumber = number;
}

std::string Contact::get_first_name(void)
{
    return firstName;
}

std::string Contact::get_last_name(void)
{
    return lastName;
}

std::string Contact::get_nickname(void)
{
    return nickName;
}

std::string Contact::get_darkest_secret(void)
{
    return darkestSecret;
}

std::string Contact::get_phone_number(void)
{
    return phoneNumber;
}

void    Contact::print_contact()
{
    std::cout << firstName << std::endl;
    std::cout << lastName << std::endl;
    std::cout << nickName << std::endl;
    std::cout << darkestSecret << std::endl;
    std::cout << phoneNumber << std::endl;
}
