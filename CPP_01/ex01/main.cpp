/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:18:36 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/12 19:41:09 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "First Zombie Horbre :" << std::endl;
	Zombie *firsthorde = zombieHorde(5, "Ned");
	delete [] firsthorde;
	std::cout << std::endl;
	std::cout << "Second Zombie Hordre :" << std::endl;
	Zombie *secondhorde = zombieHorde(10, "Jammy");
	delete [] secondhorde;
	std::cout << std::endl;
	std::cout << "Last Zombie Hordre :" << std::endl;
	Zombie *lasthorde = zombieHorde(15, "Tyrion");
	delete [] lasthorde;
	return (0);
}