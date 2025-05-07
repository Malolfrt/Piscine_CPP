/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:42:16 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/02 15:46:17 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cctype>

template < typename T >
void	iter( T *array, size_t size_array, void (*f)(const T&) )
{
	for (size_t i = 0; i < size_array; i++)
		(*f)(array[i]);
}

template < typename T >
void print( T const &x )
{
	std::cout << x << std::endl;
}

void	print_to_upper( const std::string &src )
{
	std::string str = src;
	for (size_t i = 0; i < str.size(); i++)
		str[i] = std::toupper(str[i]);
	std::cout << str << std::endl;
}

void print_to_lower( const std::string &src)
{
	std::string str = src;
	for (size_t i = 0; i < str.size(); i++)
		str[i] = std::tolower(str[i]);
	std::cout << str << std::endl;
}