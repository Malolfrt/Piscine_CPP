/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:28:04 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/02 15:46:04 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

template < typename T >
void	swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template < typename T >
T const & min(T const &x, T const &y)
{
	return ( x<y ? x : y);
}

template < typename T >
T const & max(T const &x, T const &y)
{
	return (x>y ? x : y);
}