/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plang <plang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:41:41 by plang             #+#    #+#             */
/*   Updated: 2024/09/20 15:51:28 by plang            ###   ########.fr       */
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
		~Fixed();

		Fixed&				operator=(const Fixed&);
		bool				operator>(const Fixed&) const;
		bool				operator<(const Fixed&) const;
		bool				operator>=(const Fixed&) const;
		bool				operator<=(const Fixed&) const;
		bool				operator==(const Fixed&) const;
		bool				operator!=(const Fixed&) const;

		Fixed				operator+(const Fixed&);
		Fixed				operator-(const Fixed&);
		Fixed				operator*(const Fixed&);
		Fixed				operator/(const Fixed&);

		Fixed				operator++();
		Fixed				operator++(int);
		Fixed				operator--();
		Fixed				operator--(int);

		static Fixed&		min(Fixed&, Fixed&);
		static const Fixed&	min(const Fixed&, const Fixed&);
		static Fixed&		max(Fixed&, Fixed&);
		static const Fixed&	max(const Fixed&, const Fixed&);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif
