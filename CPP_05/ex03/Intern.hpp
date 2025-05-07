/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:49:43 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 13:25:42 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &src);
		Intern&	operator=(const Intern &src);
		~Intern();
	
		AForm*	makeForm(std::string name, std::string target);
		AForm*	CreateShrubbery(std::string target);
		AForm*	CreateRobotomy(std::string target);
		AForm*	CreatePresidential(std::string target);
};