/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:36:17 by plang             #+#    #+#             */
/*   Updated: 2024/09/18 17:27:43 by plang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					_fixed;
		static const	int	fractional_bits = 8;

	public:
		Fixed();
		Fixed(const int i_nbr);
		Fixed(const float f_nbr);
		Fixed(const Fixed&);
		Fixed& operator=(const Fixed&);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif
