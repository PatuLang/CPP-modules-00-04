/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:24:39 by plang             #+#    #+#             */
/*   Updated: 2024/09/24 14:30:52 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

/* ClapTrap Class */

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	Hitp = 10;
		unsigned int	Energyp = 10; // Messages more specific for the different classes, ClapTrap/ScavTrap in the constructors and destructors.
		unsigned int	Attackdmg = 0; // change the constructors so that the values are set in there instead.
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif