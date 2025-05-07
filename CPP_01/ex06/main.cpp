/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:55:15 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 20:33:49 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "You must specify the level of complaints" << std::endl;
		return 1;
	}
	Harl karen;
	std::string level = av[1];

	karen.complain(level);
}