/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:01:09 by plang             #+#    #+#             */
/*   Updated: 2024/08/29 16:30:35 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
	std::cout << "Eating (de)bugs is really not a good idea!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO" << std::endl;
	std::cout << "Info on the spider can be found on the web!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
	std::cout << "I am warning you, beware of the poison!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
	std::cout << "Sorry for the previous messages, there was an error in the system!" << std::endl;
}

void	Harl::complain(std::string level)
{
	typedef void (Harl::*func_ptr)(void);
	
	std::string _complaints[4] = {{"debug"}, {"info"}, {"warning"}, {"error"}};
	func_ptr array[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (level == _complaints[i])
			(this->*array[i])();
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
