/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:56:29 by plang             #+#    #+#             */
/*   Updated: 2024/10/01 13:22:36 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_Brain;
	public:
		Dog();
		Dog(const Dog&);
		Dog& operator=(const Dog&);
		~Dog();

		void		makeSound(void) const;
		std::string	getType() const;
};

#endif