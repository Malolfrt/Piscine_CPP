/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:49:47 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 14:39:53 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern &src)
{
	(void)src;
}

Intern&	Intern::operator=(const Intern &src)
{
	if (this != &src)
	{

	}
	return *this;
}

Intern::~Intern()
{

}

AForm* Intern::CreateShrubbery(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm* Intern::CreateRobotomy(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::CreatePresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string good_form[3];
	good_form[0] = "shrubbery creation";
	good_form[1] = "robotomy request";
	good_form[2] = "presidential pardon";
	AForm* (Intern::*function[3])(std::string) = {&Intern::CreateShrubbery, &Intern::CreateRobotomy, &Intern::CreatePresidential};
	for (int i = 0; i < 3; i++)
	{
		if (good_form[i] == name)
		{
			std::cout << "Intern create " << name << std::endl;
			AForm *form = (this->*function[i])(target);
			return form;
		}
	}
	std::cerr << "Error: the Intern couldn't create " << name << std::endl;
	return NULL;
}
