/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:13:20 by plang             #+#    #+#             */
/*   Updated: 2024/09/24 14:15:16 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap 	Bob("Bobby");
	ClapTrap	Tim("Timmy");
	ClapTrap	Fred("Freddy");

	std::cout << std::endl;

	Fred.attack("Bobby");
	Bob.takeDamage(5);
	Bob.beRepaired(15);
	Fred.attack("Timmy");
	Tim.takeDamage(5);
	Tim.beRepaired(15);

	std::cout << std::endl;
}
