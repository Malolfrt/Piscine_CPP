/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:56:55 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 13:36:45 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm::AForm("PresidentialPardonForm", 25, 5), _target("default")
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm::AForm("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	this->_target = src._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
	if (this != &src)
	{
		this->_target = src._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw NotSignedForm();
	else if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	else if (this->getSigned() == true && executor.getGrade() <= this->getExecGrade())
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}