/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:31:18 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/09 18:04:09 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class Span
{
	public:
		Span(int n);
		Span(const Span &src); 
		Span& operator=(const Span &src);
		~Span(); 

		void addNumber(int nbr);

		int	shortestSpan() const;
		int	longestSpan() const;

		void addNumbers(int nb, int value);

		class TooMuchElement: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "There is already too much elements in Span!";
				}
		};

		class ThereIsNoElement: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "There is no elements in Span!";
				}
		};

		class NotEnoughElements: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "There is not enough elements in Span!";
				}
		};
		
	private:
		std::vector<int> _array;
		int	_size;
		Span(); 
};