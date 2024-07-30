/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 10:36:25 by user              #+#    #+#             */
/*   Updated: 2024/07/30 18:17:52 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

# define MAX_CONTACT 8

class PhoneBook
{
private:
	Contact contacts[MAX_CONTACT];
public:
	void	adding_contact();
	void	searching_contact();
	void	print_PhoneBook();
};

#endif