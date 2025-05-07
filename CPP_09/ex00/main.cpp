/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:47:45 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/16 13:09:11 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string file = av[1];
		BitcoinExchange btc;
		if (!btc.initDB())
			return 1;
		btc.processExchange(file);
	}
	else
		std::cout << "Error: could not open the file." << std::endl;
	return 0;
}