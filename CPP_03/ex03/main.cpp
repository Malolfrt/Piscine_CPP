/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:05:51 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/18 20:18:35 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	std::cout << "\n\n\t### TESTING FRAGTRAP ###\n" << std::endl;
	{
		std::cout << "\n\t\tConstructing\n" << std::endl;
		FragTrap e;
		FragTrap f("Chadd");

		std::cout << "\n\t\tTesting\n" << std::endl;
		e.highFivesGuys();
		e.attack("some random dude");
		e.takeDamage(101);
		e.takeDamage(1);
		e.attack("some random dude");
		f.highFivesGuys();
		std::cout << "\n\t\tDeconstructing\n" << std::endl;
	}
	std::cout << "\n\n\t### TESTING DIAMONDTRAP ###\n" << std::endl;
	{
		std::cout << "\n\t\tConstructing\n" << std::endl;
		DiamondTrap a;
		DiamondTrap b("Giga Chadd");
		DiamondTrap c(a);

		std::cout << "\n\t\tTesting\n" << std::endl;
		a.whoAmI();
		a.attack("some super random dude");
		b.whoAmI();
		b.attack("Chadd-clone");
		c.whoAmI();
		std::cout << "\n\t\tDeconstructing\n" << std::endl;
	}
	return (0);
}


// int main()
// {
// 	DiamondTrap Tyrion("Daniel");

// 	Tyrion.attack("Ned");
// 	Tyrion.takeDamage(5);
// 	Tyrion.beRepaired(3);
// 	Tyrion.guardGate();
// 	Tyrion.highFivesGuys();
// 	Tyrion.whoAmI();
// }