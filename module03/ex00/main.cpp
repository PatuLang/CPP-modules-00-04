/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:13:20 by plang             #+#    #+#             */
/*   Updated: 2024/09/25 11:36:58 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap 	Bob("Bobby");
	ClapTrap	Tim("Timmy");
	ClapTrap	Fred("Freddy");
	ClapTrap	Jim(Bob);

	std::cout << std::endl;

	Jim.takeDamage(3);
	Fred.attack("Bobby");
	Bob.takeDamage(5);
	Bob.beRepaired(15);
	Fred.attack("Timmy");
	Tim.takeDamage(5);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Tim.beRepaired(0);
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");
	Fred.attack("Bobby");

	std::cout << std::endl;
	
	Jim = Fred;

	std::cout << std::endl;
}
