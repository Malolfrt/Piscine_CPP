/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:05:51 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 19:06:10 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\t### TESTING CLAPTRAP ###\n" << std::endl;
	{
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
		for (int i = 0; i < 11; i++)
			b.attack("Cody-clone");
		b.beRepaired(3);
		std::cout << "\n\t\tDeconstructing\n" << std::endl;
	}
	std::cout << "\n\n\t### TESTING SCAVTRAP ###\n" << std::endl;
	{
		std::cout << "\n\t\tConstructing\n" << std::endl;
		ScavTrap c;
		ScavTrap d("Savage");

		std::cout << "\n\t\tTesting\n" << std::endl;
		c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.guardGate();
		c.guardGate();
		d.attack("Savage-clone");
		d.takeDamage(101);
		d.takeDamage(15);
		d.attack("ScavTrap-clone");
		std::cout << "\n\t\tDeconstructing\n" << std::endl;
	}
	return (0);
}