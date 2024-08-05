/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:24:14 by plang             #+#    #+#             */
/*   Updated: 2024/08/05 14:24:16 by plang            ###   ########.fr       */
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
