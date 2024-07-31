/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:17:46 by user              #+#    #+#             */
/*   Updated: 2024/07/29 15:23:59 by user             ###   ########.fr       */
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
    for (int i = 1; argv[1]; i++)
    {
        str = argv[i];
        for (unsigned long i; i < str.length(); i++)
        {
            c = toupper(str[i]);
            std::cout << c;
        }
    }
    std::cout << std::endl;
    return (0);
}