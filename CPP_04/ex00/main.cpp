/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:55:26 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 14:05:13 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Color.hpp"

int main()
{
	std::cout << BOLD << UNDERLINE << GREEN << "\t\tTESTING FOR THE RIGHT ANIMALS\n" << RESET << std::endl;
	std::cout << BOLD << UNDERLINE << BLUE << "\tCONTRUCTION OF ANIMAL :" << RESET << std::endl;
	const Animal* mamiphere = new Animal();
	std::cout << BOLD << UNDERLINE << BLUE << "\tCONTRUCTION OF DOG :" << RESET << std::endl;
	const Animal* Chien = new Dog();
	std::cout << BOLD << UNDERLINE << BLUE << "\tCONTRUCTION OF CAT :" << RESET << std::endl;
	const Animal* Chat = new Cat();
	std::cout << std::endl;
	
	std::cout << Chien->getType() << " " << std::endl;
	std::cout << Chat->getType() << " " << std::endl;
	Chat->makeSound(); //will output the cat sound!
	Chien->makeSound();
	mamiphere->makeSound();
	std::cout << std::endl;

	std::cout << BOLD << UNDERLINE << YELLOW << "\tDESRUCTION OF ANIMAL :" << RESET << std::endl;
	delete mamiphere;
	std::cout << BOLD << UNDERLINE << YELLOW << "\tDESRUCTION OF DOG :" << RESET << std::endl;
	delete Chien;
	std::cout << BOLD << UNDERLINE << YELLOW << "\tDESRUCTION OF CAT :" << RESET << std::endl;
	delete Chat;
	
	std::cout << std::endl;
	std::cout << BOLD << UNDERLINE << RED << "\t\tTESTING FOR THE WRONG ANIMALS\n" << RESET << std::endl;
	std::cout << BOLD << UNDERLINE << BLUE << "\tCONTRUCTION OF WRONGANIMAL :" << RESET << std::endl;
	const WrongAnimal* Wmamiphere = new WrongAnimal();
	std::cout << BOLD << UNDERLINE << BLUE << "\tCONTRUCTION OF WRONGCAT :" << RESET << std::endl;
	const WrongAnimal* Wchat = new WrongCat();
	std::cout << BOLD << UNDERLINE << BLUE << "\tCONTRUCTION OF TRUECAT :" << RESET << std::endl;
	const WrongCat* Tchat = new WrongCat();
	std::cout << std::endl;

	std::cout << Wchat->getType() << " " << std::endl;
	std::cout << Tchat->getType() << " " << std::endl;
	Wmamiphere->makeSound();
	Wchat->makeSound();
	Tchat->makeSound();

	std::cout << std::endl;

	std::cout << BOLD << UNDERLINE << YELLOW << "\tDESRUCTION OF WRONGANIMAL :" << RESET << std::endl;
	delete Wmamiphere;
	std::cout << BOLD << UNDERLINE << YELLOW << "\tDESRUCTION OF WRONGCAT :" << RESET << std::endl;
	delete Wchat;
	std::cout << BOLD << UNDERLINE << YELLOW << "\tDESRUCTION OF TRUECAT :" << RESET << std::endl;
	delete Tchat;
	return 0;
}