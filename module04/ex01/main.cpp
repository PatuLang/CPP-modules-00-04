/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:31:25 by plang             #+#    #+#             */
/*   Updated: 2024/10/02 16:02:49 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal cow;
	std::cout << cow.getType() << std::endl;
	cow.makeSound();
	const Animal* kow = new Animal();
	std::cout << kow->getType() << std::endl;
	kow->makeSound();

	std::cout << std::endl;

	const Animal* knine = new Dog();
	std::cout << knine->getType() << std::endl;
	knine->makeSound();

	std::cout << std::endl;

	const Animal* cat = new Cat();
	std::cout << cat->getType() << std::endl;
	cat->makeSound();

	std::cout << std::endl;

	delete cat;
	delete knine;
	delete kow;

	std::cout << std::endl;
	
	Animal* array[4];
	for (int i = 0; i <= 1; i++)
		array[i] = new Dog();

	std::cout << std::endl;

	for (int i = 2; i <= 3; i++)
		array[i] = new Cat();

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		array[i]->makeSound();

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete array[i];

	std::cout << std::endl;

	Cat cat1;
	cat1.setIdeas("lessgoo", 0);
	Cat cat2(cat1);
	std::cout << cat2.getIdeas(0) << std::endl;
	std::cout << "CAT 1 IDEA -------------\n";
	cat2.setIdeas("paviaani", 1);
	std::cout << cat1.getIdeas(1) << std::endl;
	std::cout << cat2.getIdeas(1) << std::endl;
	
	std::cout << std::endl;

	Dog	dog1;
	dog1.setIdeas("dawg", 0);
	Dog	dog2;
	dog2 = dog1;
	std::cout << dog2.getIdeas(0) << std::endl;
	std::cout << "DOG 1 IDEA -------------\n";
	dog2.setIdeas("paviaani", 1);
	std::cout << dog1.getIdeas(1) << std::endl;
	std::cout << dog2.getIdeas(1) << std::endl;

	std::cout << std::endl;
}
