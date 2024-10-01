/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:31:25 by plang             #+#    #+#             */
/*   Updated: 2024/10/01 11:52:21 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal cow;
	std::cout << cow.getType() << std::endl;
	cow.makeSound();
	const Animal* ko = new Animal;
	std::cout << ko->getType() << std::endl;
	ko->makeSound();

	std::cout << std::endl;

	Animal* hund = new Dog();
	std::cout << hund->getType() << std::endl;
	hund->makeSound();
	const Animal* knine = new Dog();
	std::cout << knine->getType() << std::endl;
	knine->makeSound();

	std::cout << std::endl;

	Animal* katt = new Cat();
	std::cout << katt->getType() << std::endl;
	katt->makeSound();

	std::cout << std::endl;

	const WrongAnimal* blob = new WrongCat();
	std::cout << blob->getType() << std::endl;
	blob->makeSound();

	std::cout << std::endl;

	delete blob;
	delete katt;
	delete knine;
	delete hund;
	delete ko;
}
