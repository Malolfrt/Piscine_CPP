/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:18:36 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/12 19:02:48 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "============= stackZombies =============" << std::endl;
	Zombie Bob("Bob");
	Zombie Francis("Francis");
	Zombie banal;

	Bob.announce();
	Francis.announce();
	banal.announce();
	randomChump("randomZombie");

	std::cout << std::endl;
	std::cout << "============= heapZombies ==============" << std::endl;
	
	Zombie	*ptrZombie;

	ptrZombie = newZombie("ptrNewZombie");
	ptrZombie->announce();
	delete(ptrZombie);

	return (0);
}