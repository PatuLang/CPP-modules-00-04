/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:15:32 by plang             #+#    #+#             */
/*   Updated: 2024/10/18 15:28:53 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() : head(nullptr)
{
	std::cout << "Floor constructor\n";
}

Floor::Floor(const Floor &other)
{
	std::cout << "Floor copy constructor\n";
	this->head = other.head;
}

Floor&	Floor::operator=(const Floor &other)
{
	std::cout << "Floor copy assignment\n";
	if (this != &other)
	{
		this->head = other.head;
	}
	return *this;
}

Floor::~Floor()
{
	std::cout << "Floor destructor\n";
}

void	Floor::addToEnd(AMateria *materia)
{
	std::cout << materia->getType() << " added to floor\n";
	Node* newNode = new Node;
	newNode->m = materia;
	newNode->next = nullptr;
	if (this->head == nullptr)
	{
		head = newNode;
		return ;
	}
	Node *tmp = head;
	while (tmp->next)
	{
		if (newNode->m == tmp->m)
		{
			delete newNode->m;
			delete newNode;
			break ;
		}
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

void	Floor::deleteFloor()
{
	Node* curr = head;
	Node *prev = head;
	if (head != nullptr)
	{
		while (curr->next)
		{
			curr = curr->next;
			delete prev->m;
			delete prev;
			prev = curr;
		}
		delete prev->m;
		delete prev;
		head = nullptr;
	}
}