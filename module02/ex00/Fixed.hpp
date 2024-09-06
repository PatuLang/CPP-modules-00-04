/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:19:31 by plang             #+#    #+#             */
/*   Updated: 2024/09/06 13:28:47 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
private:
	int					_fixed;
	static const	int	fractional_bits = 8;
public:
	Fixed();
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif