/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 09:52:34 by plang             #+#    #+#             */
/*   Updated: 2024/10/22 12:00:09 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	// IMateriaSource* source = new MateriaSource();
	// source->learnMateria(new Ice());
	// source->learnMateria(new Cure());
	// Character tommy("tommy");
	// Character bobby(tommy);
	// Character timmy("timmy");
	// AMateria* one;
	// one = source->createMateria("ice");
	// tommy.equip(one);
	// one = source->createMateria("cure");
	// tommy.equip(one);
	// timmy = tommy;
	// tommy.use(0, bobby);
	// tommy.use(1, bobby);
	// tommy.use(2, bobby);
	
	// delete source;

	
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

	tmp = src->createMateria("ice");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	me->unequip(-1);
	std::cout << std::endl;

	tmp = src->createMateria("cure");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	me->unequip(0);
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	tmp = src->createMateria("ice");
	std::cout << std::endl;

	me->equip(tmp);
	std::cout << std::endl;

	AMateria* tmp2;
	
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;

	tmp2 = src->createMateria("ice");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	bob->equip(tmp);
	std::cout << std::endl;

	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;
	
	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	tmp2 = src->createMateria("cure");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	tmp2 = src->createMateria("fire");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;
	
	tmp2 = src->createMateria("");
	std::cout << std::endl;

	bob->equip(tmp2);
	std::cout << std::endl;

	bob->use(0, *me);
	std::cout << std::endl;

	me->use(0, *bob);
	std::cout << std::endl;

	me->use(1, *bob);
	std::cout << std::endl;

	bob->use(1, *me);
	std::cout << std::endl;

	me->use(2, *bob);
	std::cout << std::endl;

	me->use(3, *bob);
	std::cout << std::endl;

	delete bob;
	std::cout << std::endl;
	delete me;
	std::cout << std::endl;
	delete src;
	std::cout << std::endl;
	return 0;
}