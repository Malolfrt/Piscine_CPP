/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:48:46 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/15 17:55:12 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &cpy);
		~Fixed();
		Fixed& operator=(const Fixed &surcharge);

		int	getRawBits() const;
		void	setRawBits(const int raw);

	private:
		int	_value;
		static const int _nb_bits_fp;
};