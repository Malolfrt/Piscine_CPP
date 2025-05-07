/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:05:51 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 19:06:58 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	{
		std::cout << "\t### TESTING CLAPTRAP ###\n" << std::endl;
		std::cout << "\t\tConstructing\n" << std::endl;
		ClapTrap a;
		ClapTrap b("Cody");

		std::cout << "\n\t\tTesting\n" << std::endl;
		a.attack("some other robot");
		a.takeDamage(10);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("some other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 12; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "\n\t\tDeconstructing\n" << std::endl;
	}
	return (0);
}