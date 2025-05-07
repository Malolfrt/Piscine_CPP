/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:34:10 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/16 19:02:44 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Error : wrong number of arguments." << std::endl;
		return 1;
	}
	else
	{
		std::string str = av[1];
		RPN rpn;
		rpn.calc_rpn(str);
	}
	return 0;
}