/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:15:28 by plang             #+#    #+#             */
/*   Updated: 2024/10/21 16:37:14 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

# include "AMateria.hpp"

struct Node
{
	AMateria* m;
	Node* next;
};

class Floor
{
	private:
		Node* head;
	public:
		Floor();
		Floor(const Floor&);
		Floor& operator=(const Floor&);
		~Floor();

		void	addToEnd(AMateria *m);
		bool	checkFloor(AMateria *materia);
		void	deleteFloor();
};

#endif
