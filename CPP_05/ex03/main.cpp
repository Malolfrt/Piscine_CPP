/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:11:28 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 15:14:09 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern random;
	AForm	*rrf;
	Bureaucrat *boss = new Bureaucrat("boss", 1);
	rrf = random.makeForm("robotomy request", "Bender");
	
	try
	{
		boss->executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		boss->signForm(*rrf);
		rrf->beSigned(*boss);
		boss->signForm(*rrf);
		boss->executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		delete rrf;
		rrf = random.makeForm("presidential pardon", "Thanksgiving Turkey");
		boss->signForm(*rrf);
		rrf->beSigned(*boss);
		boss->executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		delete rrf;
		rrf = random.makeForm("shrubbery creation", "santa claus");
		rrf->beSigned(*boss);
		boss->executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	delete rrf;
	delete boss;
}