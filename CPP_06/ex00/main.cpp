/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:21:45 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/25 13:57:27 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
		ScalarConverter::convert(static_cast<std::string>(av[1]));
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return 0;
}