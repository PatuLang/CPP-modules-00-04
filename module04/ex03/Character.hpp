/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:46:05 by plang             #+#    #+#             */
/*   Updated: 2024/10/16 15:25:44 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		AMateria* 	eqt_materia[4];
		std::string name;
	public:
		Character();
		Character(std::string);
		Character(const Character&);
		Character& operator=(const Character&);
		~Character();

		std::string const&	getName() const override;
		void 				equip(AMateria* m) override;
		// void 				unequip(int idx);
		void 				use(int idx, ICharacter& target) override;
};

#endif