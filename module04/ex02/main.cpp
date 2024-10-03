/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:31:25 by plang             #+#    #+#             */
/*   Updated: 2024/10/03 13:35:36 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog dog;
	std::cout << dog.getType() << std::endl;
	dog.makeSound();

	std::cout << std::endl;

	Cat cat;
	std::cout << cat.getType() << std::endl;
	cat.makeSound();

	std::cout << std::endl;

	AAnimal* dog2 = new Dog();
	AAnimal* cat2 = new Cat();

	std::cout << dog2->getType() << std::endl;
	dog2->makeSound();
	std::cout << cat2->getType() << std::endl;
	cat2->makeSound();

	std::cout << std::endl;

	delete dog2;
	delete cat2;

	std::cout << std::endl;

	// AAnimal animal;
}
