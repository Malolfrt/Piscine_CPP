/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:11:28 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/18 16:56:56 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat *Tyrion = new Bureaucrat("Tyrion", 3);
	std::cout << *Tyrion << std::endl;
	Bureaucrat *Jammy = new Bureaucrat("Jammy", 40);
	std::cout << *Jammy << std::endl;
	Bureaucrat *Theon = new Bureaucrat("Theon", 135);
	std::cout << *Theon << std::endl;
	std::cout << std::endl;

	AForm *doc1 = new ShrubberyCreationForm("Apple_Pie");
	std::cout << *doc1 << std::endl;
	AForm *doc2 = new RobotomyRequestForm("WALL-E");
	std::cout << *doc2 << std::endl;
	AForm *doc3 = new PresidentialPardonForm("Thanksgiving's Turkey");
	std::cout << *doc3 << std::endl;
	std::cout << std::endl;

	try
	{
		Theon->signForm(*doc3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		doc3->beSigned(*Theon);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	try
	{
		Theon->executeForm(*doc1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		Theon->signForm(*doc1);
		doc1->beSigned(*Theon);
		Theon->signForm(*doc1);
		Theon->executeForm(*doc1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		doc2->beSigned(*Jammy);
		Jammy->signForm(*doc2);
		Jammy->executeForm(*doc2);
		Jammy->executeForm(*doc2);
		Jammy->executeForm(*doc2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	try
	{
		doc3->beSigned(*Tyrion);
		Tyrion->signForm(*doc3);
		Tyrion->executeForm(*doc3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	delete Tyrion;
	delete Jammy;
	delete Theon;

	delete doc1;
	delete doc2;
	delete doc3;
}