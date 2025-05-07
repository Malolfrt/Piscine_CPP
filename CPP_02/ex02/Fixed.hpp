/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:48:46 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/15 19:28:14 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int nbInt);
		Fixed(const float nbFloat);
		Fixed(const Fixed &cpy);
		~Fixed();
		
		Fixed& operator=(const Fixed &surcharge);
		
		bool operator>(const Fixed &src);
		bool operator<(const Fixed &src);
		bool operator>=(const Fixed &src);
		bool operator<=(const Fixed &src);
		bool operator==(const Fixed &src);
		bool operator!=(const Fixed &src);

		Fixed operator+(const Fixed &src);
		Fixed operator-(const Fixed &src);
		Fixed operator*(const Fixed &src);
		Fixed operator/(const Fixed &src);

		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed min(Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);
		static Fixed max(Fixed &a, Fixed &b);


		int		getRawBits() const;
		void	setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;

	private:
		int	_value;
		static const int _bits_fp;
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);