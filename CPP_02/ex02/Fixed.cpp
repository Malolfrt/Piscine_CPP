/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:48:46 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/15 19:35:25 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits_fp = 8;


/*	CONSTRUCTOR/DESTRUCTOR	*/

Fixed::Fixed(): _value(0)
{
	
}

Fixed::Fixed(const int nbINT)
{
	this->_value = nbINT << this->_bits_fp;
}

Fixed::Fixed(const float nbFLOAT)
{
	this->_value = roundf(nbFLOAT * (1 << this->_bits_fp));
}

Fixed::Fixed(const Fixed &cpy)
{
	*this = cpy;
}

Fixed::~Fixed()
{
	
}


/*	SURCHARGE D"OPERATEUR	*/

Fixed& Fixed::operator=(const Fixed &surcharge)
{
	if (this != &surcharge)
	{
		this->_value = surcharge.getRawBits();
	}
	return *this;
}

Fixed Fixed::operator+(const Fixed &src)
{
	Fixed res;
	res.setRawBits(this->_value - src.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &src)
{
	Fixed res;
	res.setRawBits(this->_value - src.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &src)
{
	Fixed res;
	res.setRawBits((this->_value * src.getRawBits()) >> this->_bits_fp);
	return res;
}

Fixed Fixed::operator/(const Fixed &src)
{
	Fixed res;
	res.setRawBits((this->_value * src.getRawBits()) >> this->_bits_fp);
	return res;
}

bool Fixed::operator>(const Fixed &src)
{
	return (this->_value > src.getRawBits());
}

bool Fixed::operator<(const Fixed &src)
{
	return (this->_value < src.getRawBits());
}

bool Fixed::operator>=(const Fixed &src)
{
	return (this->_value >= src.getRawBits());
}

bool Fixed::operator<=(const Fixed &src)
{
	return (this->_value <= src.getRawBits());
}

bool Fixed::operator!=(const Fixed &src)
{
	return (this->_value != src.getRawBits());
}

bool Fixed::operator==(const Fixed &src)
{
	return (this->_value == src.getRawBits());
}

Fixed&	Fixed::operator++()
{
	_value += 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed res(*this);
	_value += 1;
	return res;
}

Fixed& Fixed::operator--()
{
	_value -= 1;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed res(*this);
	_value -= 1;
	return res;
}

Fixed	Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a._value < b._value)
		return a;
	return b;
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	if (a._value < b._value)
		return a;
	return b;
}

Fixed	Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a._value > b._value)
		return a;
	return b;
}

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	if (a._value > b._value)
		return a;
	return b;
}


/*	ACCESSEUR ET AUTRES	*/

float	Fixed::toFloat() const
{
	return (float)this->_value / (1 << this->_bits_fp);
}

int	Fixed::toInt() const
{
	return (this->_value >> this->_bits_fp);
}

int	Fixed::getRawBits() const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}


/*	OTHER	*/

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}