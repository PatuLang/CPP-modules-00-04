/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:05:26 by plang             #+#    #+#             */
/*   Updated: 2024/08/28 17:00:14 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl _Harl;
		std::string	level;

		level = argv[1];
		_Harl.complain(level);
	}
	else
		std::cout << "Select one of these: debug, info, warning, error" << std::endl;
}
