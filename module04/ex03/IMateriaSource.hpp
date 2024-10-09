/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:25:08 by plang             #+#    #+#             */
/*   Updated: 2024/10/09 16:03:00 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}

		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria*	createMateria(std::string const &type) = 0;
};

