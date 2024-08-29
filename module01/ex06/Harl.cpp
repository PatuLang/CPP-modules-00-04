/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:29:36 by plang             #+#    #+#             */
/*   Updated: 2024/08/29 18:21:25 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << std::endl;
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "Eating (de)bugs is really not a good idea!" << std::endl;
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << std::endl;
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "Info on the spider can be found on the web!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << std::endl;
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I am warning you, beware of the poison!" << std::endl;
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout << std::endl;
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "Sorry for the previous messages, there was an error in the system!" << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string _complaints[4] = {{"debug"}, {"info"}, {"warning"}, {"error"}};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == _complaints[i])
		{
			switch (i)
			{
				case 0:
					this->debug();
				case 1:
					this->info();
				case 2:
					this->warning();
				case 3:
					this->error();
				default:
					break ;
			}
			return ;
		}
	}
	std::cout << std::endl;
	std::cout << "[ DEFAULT ]" << std::endl;
	std::cout << "By default, spiders think every room in your house is an all-you-can-eat buffet." << std::endl;		
	std::cout << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}