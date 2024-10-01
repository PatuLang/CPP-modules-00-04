/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:56:25 by plang             #+#    #+#             */
/*   Updated: 2024/10/01 13:45:17 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_Brain;
	public:
		Cat();
		Cat(const Cat&);
		Cat& operator=(const Cat&);
		~Cat();

		void		makeSound(void) const;
		std::string	getType() const;
};

#endif