/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:15:32 by plang             #+#    #+#             */
/*   Updated: 2024/10/21 16:37:09 by plang            ###   ########.fr       */
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
	if (head == nullptr)
	{
		head = newNode;
		return ;
	}
	Node *tmp = head;
	while (tmp->next != nullptr)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
}

bool	Floor::checkFloor(AMateria *materia)
{
	Node *tmp = head;
	if (head != nullptr)
	{
		while (tmp->next != nullptr)
		{
			if (tmp->m == materia)
				return true;
			tmp = tmp->next;
		}
		if (tmp->m == materia)
			return true;
	}
	return false;
}

void	Floor::deleteFloor()
{
	Node* curr = head;
	Node *prev = head;
	if (head != nullptr)
	{
		while (curr->next != nullptr)
		{
			curr = curr->next;
			if (prev->m != nullptr)
				delete prev->m;
			prev->m = nullptr;
			delete prev;
			prev = curr;
		}
		if (prev->m)
			delete prev->m;
		delete prev;
		head = nullptr;
	}
}
