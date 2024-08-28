/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:01:09 by plang             #+#    #+#             */
/*   Updated: 2024/08/28 17:19:24 by plang            ###   ########.fr       */
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
	std::cout << "Info on the spider can be found on the web" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
	std::cout << "I am warning you, beware of the poison!" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
	std::cout << "Sorry for the previous messages, there was an error in the system" << std::endl;
}

void	Harl::complain(std::string level)
{
	compl_func[level];
}

Harl::Harl()
{
	compl_func["debug"] = &debug;
	compl_func["info"] = info;
	compl_func["warning"] = Harl::warning;
	compl_func["error"] = Harl::error;
}

Harl::~Harl()
{
}
