/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:23:04 by plang             #+#    #+#             */
/*   Updated: 2024/09/25 16:20:32 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Hans;
	ClapTrap	Greta;

	std::cout << std::endl;

	ScavTrap	Hannes("Hans");

	std::cout << std::endl;

	ScavTrap	Boris;

	std::cout << std::endl;

	Hannes.attack("Boris");
	Greta.takeDamage(100);
	Greta.beRepaired(1);
	Boris.guardGate();
}
