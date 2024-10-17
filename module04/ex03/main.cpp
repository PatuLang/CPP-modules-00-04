/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:52:34 by plang             #+#    #+#             */
/*   Updated: 2024/10/17 16:25:48 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;

	src->learnMateria(new Ice());
	std::cout << std::endl;
	
	src->learnMateria(new Cure());
	std::cout << std::endl;

	src->learnMateria(new Cure());
	std::cout << std::endl;

	src->learnMateria(new Cure());
	std::cout << std::endl;

	src->learnMateria(new Cure());
	std::cout << std::endl;

	src->learnMateria(new Ice());
	std::cout << std::endl;

	ICharacter* me = new Character("me");
	std::cout << std::endl;

	AMateria* tmp;
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	me->unequip(0);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	// tmp = src->createMateria("ice");
	// std::cout << std::endl;

	// me->equip(tmp);
	// std::cout << std::endl;
	
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	// bob->equip(tmp);

	bob->use(0, *me);
	std::cout << std::endl;

	me->use(0, *bob);
	std::cout << std::endl;

	me->use(1, *bob);
	std::cout << std::endl;

	me->use(2, *bob);
	std::cout << std::endl;

	me->use(3, *bob);
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	// delete tmp;
	return 0;
}