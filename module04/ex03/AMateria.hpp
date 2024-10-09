/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:27:25 by plang             #+#    #+#             */
/*   Updated: 2024/10/09 16:01:05 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class AMateria
{
	protected:

	public:
		AMateria(std::string const &type);
		
		std::string const& 	getType() const;
		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};
