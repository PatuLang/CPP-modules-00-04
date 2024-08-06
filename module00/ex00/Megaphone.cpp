/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:23:39 by plang             #+#    #+#             */
/*   Updated: 2024/08/06 11:31:11 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    std::string str;
    char        c;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; argv[i]; i++)
    {
        str = argv[i];
        for (unsigned long i = 0; i < str.length(); i++)
        {
            c = toupper(str[i]);
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return (0);
}
