/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:05:26 by plang             #+#    #+#             */
/*   Updated: 2024/08/29 15:13:40 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl _Harl;
	std::string	level;
	try
	{
		while (1)
		{
			std::cout << "Choose one: debug, info, warning, error > ";
            std::getline(std::cin, level);
            if (std::cin.eof())
            {
                std::cout << std::endl;
                throw std::runtime_error("Harl is malfunctioning");
            }
			// if (argc == 2)
			// {
				// level = argv[1];
				_Harl.complain(level);
			// }
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// else
		// std::cout << "Select one of these: debug, info, warning, error" << std::endl;
}
