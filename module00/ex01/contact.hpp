/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:24:31 by user              #+#    #+#             */
/*   Updated: 2024/07/31 16:40:05 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
private:
	std::string		firstName;
	std::string		lastName;
	std::string		nickName;
	std::string		darkestSecret;
	std::string		phoneNumber;
public:
	void			set_first_name(std::string name);
	void			set_last_name(std::string name);
	void			set_nickname(std::string name);
	void			set_darkest_secret(std::string secret);
	void			set_phone_number(std::string number);

    void            print_contact();

	std::string		get_first_name(void);
	std::string		get_last_name(void);
	std::string		get_nickname(void);
	std::string		get_darkest_secret(void);
	std::string		get_phone_number(void);
};

#endif
