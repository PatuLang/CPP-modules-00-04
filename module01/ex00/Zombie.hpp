/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:19:56 by user              #+#    #+#             */
/*   Updated: 2024/08/01 12:33:31 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string z_name);
    ~Zombie();
    void        announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif