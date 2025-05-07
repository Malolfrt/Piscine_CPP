/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:56:06 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 13:36:53 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm::AForm("RobotomyRequestForm", 72, 45), _target("default"), _executed(false)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm::AForm("RobotomyRequestForm", 72, 45), _target(target), _executed(false)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	this->_target = src._target;
	this->_executed = src._executed;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
	if (this != &src)
	{
		this->_target = src._target;
		this->_executed = src._executed;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw NotSignedForm();
	else if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	else if (this->getSigned() == true && executor.getGrade() <= this->getExecGrade())
	{
		std::cout << "BZZZZZZZZZZzzzz   ZZZZZZZZZzzzzz" << std::endl;
		std::cout << "* Driling noise *" << std::endl;
		std::cout << "BZZZZZZZZZZzzzz   ZZZZZZZZZzzzzz" << std::endl;
		if (this->_executed == false)
		{
			std::cout << this->_target << " has been robotomized!" << std::endl;
			this->_executed = true;
		}
		else
		{
			std::cout << this->_target << "'s robotomization fail!" << std::endl;
			this->_executed = false;
		}
	}
}
