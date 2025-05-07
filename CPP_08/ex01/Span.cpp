/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:31:15 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/10 18:01:23 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int n): _size(n)
{

}

Span::Span(const Span &src)
{
	this->_size = src._size;
	this->_array.resize(src._array.size());
	std::copy(src._array.begin(), src._array.end(), this->_array.begin());
}

Span& Span::operator=(const Span &src)
{
	if (this != &src)
	{
		this->_size = src._size;
		this->_array.erase(this->_array.begin(), this->_array.end());
		this->_array.resize(src._array.size());
		std::copy(src._array.begin(), src._array.end(), this->_array.begin());
	}
	return *this;
}

Span::~Span()
{
}

void	Span::addNumber(int nbr)
{
	int res = this->_array.size();
	if (res >= this->_size)
		throw TooMuchElement();
	else
		this->_array.push_back(nbr);
}

void	Span::addNumbers(int nb, int value)
{
	int res = this->_array.size() + nb;
	if (res >= this->_size)
		throw TooMuchElement();
	this->_array.insert(this->_array.end(), nb, value);
	// for (int i = 0; i < nb; i++)
	// 	addNumber(value);
}

int Span::longestSpan() const
{
	if (this->_array.empty())
		throw ThereIsNoElement();
	else if (this->_array.size() < 2)
		throw NotEnoughElements();
	
	std::vector<int> sorted(this->_array.size());
	std::copy(this->_array.begin(), this->_array.end(), sorted.begin());
	std::copy(this->_array.begin(), this->_array.end(), sorted.begin());
	std::sort(sorted.begin(), sorted.end());
	return sorted.back() - sorted.front();
}

int	Span::shortestSpan() const
{
	if (this->_array.empty())
		throw ThereIsNoElement();
	else if (this->_array.size() < 2)
		throw NotEnoughElements();

	std::vector<int> sorted(this->_array.size());
	std::copy(this->_array.begin(), this->_array.end(), sorted.begin());
	std::sort(sorted.begin(), sorted.end());
	int min = 2147483647;
	for (size_t i = 0; i < sorted.size() - 1; i++)
	{
		int diff = sorted[i + 1] - sorted[i];
		if (diff < min)
			min = diff;
	}
	return min;
}
