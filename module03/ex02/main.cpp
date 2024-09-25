/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:53:18 by plang             #+#    #+#             */
/*   Updated: 2024/09/25 19:13:09 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	One;
	ScavTrap	Two;
	FragTrap	Three;

	std::cout << std::endl;

	ClapTrap	Four("Bob");
	ScavTrap	Five("Tim");
	FragTrap	Six("Sam");

	std::cout << std::endl;

	ClapTrap	Seven(Four);
	ScavTrap	Eight(Five);
	FragTrap	Nine(Six);

	std::cout << std::endl;

	One = Seven;
	Two = Eight;
	Three = Nine;

	std::cout << std::endl;

	One.attack("Tim");
	Two.beRepaired(7);
	Two.takeDamage(60);
	Two.beRepaired(25);
	One.takeDamage(11);
	One.beRepaired(30);
	One.attack("Tim");
	Two.guardGate();
	Three.highFiveGuys();
	Two.attack("Sam");
	Three.takeDamage(69);
	Three.attack("Tim");
	Two.beRepaired(5);
	Three.beRepaired(5);

	std::cout << std::endl;
}
