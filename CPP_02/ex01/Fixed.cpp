/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:48:46 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/15 18:50:13 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits_fp = 8;


/*	CONSTRUCTOR/DESTRUCTOR	*/

Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbINT)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = nbINT << this->_bits_fp;
}

Fixed::Fixed(const float nbFLOAT)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(nbFLOAT * (1 << this->_bits_fp));
}

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


/*	SURCHARGE D"OPERATEUR	*/

Fixed& Fixed::operator=(const Fixed &surcharge)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &surcharge)
	{
		this->_value = surcharge.getRawBits();
	}
	return *this;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
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
	// std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}