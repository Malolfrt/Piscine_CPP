/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:44:17 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/09 16:03:13 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <map>


class ThereIsNoOccurrence : public std::exception
{
	public:
		virtual const char* what() const throw()
				{
					return "There is no occurrence in the array!";
				}
};


template < typename T >
void	easyfind( T &container, int value)
{
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw ThereIsNoOccurrence();
	else
		std::cout << "there is an occurence : " << *it << std::endl;
}

template < typename T, typename X >
void easyfind(std::map<X, T> &container, int value)
{
	typename std::map<X, T>::iterator it = container.find(value);
	if ( it == container.end() )
		throw ThereIsNoOccurrence();
	else
		std::cout << "there is an occurence : " << it->first << std::endl;
}



