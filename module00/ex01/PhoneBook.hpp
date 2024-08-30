/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:24:48 by plang             #+#    #+#             */
/*   Updated: 2024/08/30 17:03:25 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <csignal>
# include "Contact.hpp"

# define MAX_CONTACT 8

class PhoneBook
{
private:
	Contact contacts[MAX_CONTACT];
public:
	void		adding_contact();
	void		searching_contact();
	void		print_PhoneBook();
	std::string	truncate(std::string, size_t size);
};

#endif