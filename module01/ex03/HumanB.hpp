/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:51:43 by user              #+#    #+#             */
/*   Updated: 2024/08/01 18:26:29 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon*     weapon;
public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &weapon);
};

#endif
