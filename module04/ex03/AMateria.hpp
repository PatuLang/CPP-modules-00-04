/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:27:25 by plang             #+#    #+#             */
/*   Updated: 2024/10/18 14:19:28 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string _type;
		ICharacter*	holder;
	public:
		AMateria();
		AMateria(const AMateria&);
		AMateria& operator=(const AMateria&);
		virtual ~AMateria();
		AMateria(std::string const &type);
		
		std::string const& 	getType() const;
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
		void				setHolder(ICharacter*);
		ICharacter*			getHolder() const;
};

#endif
