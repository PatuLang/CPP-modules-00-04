/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:24:46 by plang             #+#    #+#             */
/*   Updated: 2024/09/27 10:25:36 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap bibbi("bibbi");

	std::cout << std::endl;

	DiamondTrap bill;

	std::cout << std::endl;

	ClapTrap	kill;

	std::cout << std::endl;

	kill.attack("bob");

	std::cout << std::endl;

	bibbi.attack("Tim");

	std::cout << std::endl;

	bibbi.takeDamage(10);

	std::cout << std::endl;
	
	bibbi.beRepaired(5);

	std::cout << std::endl;

	bill.guardGate();

	std::cout << std::endl;

	bill.highFiveGuys();

	std::cout << std::endl;

	bill.whoAmI();
	bibbi.whoAmI();

	std::cout << std::endl;

	std::cout << bill.getHp() << " " << bill.getEp() << " " << bill.getAd() << " " << bill.getNm() << " " << std::endl;

}
