/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:34:56 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/25 15:21:56 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::convert( std::string str )
{
	if (str.empty())
	{
		std::cout << "Error : The string is empty" << std::endl;
		return ;
	}
	
	/*	CHAR	*/
	{
		long res = std::atol(str.c_str());
		if (res >= 33 && res <= 126)
			std::cout << "char : '" << static_cast<char>(res) << "'" << std::endl;
		else if ((res <= 33 && res >= 0) || res == 127)
			std::cout << "char non displayable" << std::endl;
		else
			std::cout << "char : impossible" << std::endl;
	}

	/*	INT		*/
	{
		char *end;
		float res = std::strtof(str.c_str(), &end);
		if (std::isnan(res) || std::isinf(res))
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " << static_cast<int>(res) << std::endl;
		
	}

	/*	FLOAT	*/
	{
		char *end;
		float res = std::strtof(str.c_str(), &end);
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "float : " << static_cast<float>(res) << "f" << std::endl;
	}

	/*	DOUBLE	*/
	{
		char *end;
		double res = std::strtod(str.c_str(), &end);
		if (*end != '\0' && *end != 'f')
			std::cout << "double : impossible" << std::endl;
		else
			std::cout << "double : " << static_cast<double>(res) << std::endl;	
	}
}

			
