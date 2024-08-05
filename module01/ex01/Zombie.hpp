/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:26:39 by plang             #+#    #+#             */
/*   Updated: 2024/08/05 14:26:40 by plang            ###   ########.fr       */
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
    Zombie();
    ~Zombie();
    void    set_Zombie(std::string z_name);
    void    announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif