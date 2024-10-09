/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:28:39 by plang             #+#    #+#             */
/*   Updated: 2024/10/09 15:59:18 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class MateriaSource
{
	private:
		
	public:
		MateriaSource();
		~MateriaSource();

		void		learnMateria(const MateriaSource&);
		AMateria*	createMateria(std::string const &type);
};