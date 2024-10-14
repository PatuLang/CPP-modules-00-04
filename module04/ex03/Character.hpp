/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:46:05 by plang             #+#    #+#             */
/*   Updated: 2024/10/14 15:38:39 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
// # include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string slots[4];
		std::string name;
	public:
		Character();
		Character(std::string);
		Character(const Character&);
		Character& operator=(const Character&);
		~Character();

		std::string const&	getName() const;
		// void 				equip(AMateria* m);
		// void 				unequip(int idx);
		// void 				use(int idx, ICharacter& target);
};

#endif