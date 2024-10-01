/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:24:59 by plang             #+#    #+#             */
/*   Updated: 2024/09/30 17:21:01 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal();
		
		virtual void	makeSound() const;
		std::string 	getType() const;
};

#endif