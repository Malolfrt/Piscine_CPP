/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:34:43 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/25 15:08:14 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

class ScalarConverter
{
	public:
		static void convert( std::string str );
	
	private:
		ScalarConverter();
		ScalarConverter( const ScalarConverter &src );
		ScalarConverter& operator=( const ScalarConverter &src );
		~ScalarConverter();
};