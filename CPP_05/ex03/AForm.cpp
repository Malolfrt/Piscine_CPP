/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:45:12 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 14:59:16 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


AForm::AForm(): _name("2nd Amendement"), _is_signed(false), _sign_grade(1), _exec_grade(1)
{

}

AForm::AForm(std::string const name, int sign_grade, int exec_grade): _name(name), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (this->_sign_grade < 1 || this->_exec_grade < 1 )
		throw AForm::GradeTooHighException();
	if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &src): _name(src.getName()), _is_signed(src.getSigned()), _sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade())
{
	
}

AForm& AForm::operator=(const AForm &src)
{
	if (this != &src)
	{
		this->_is_signed = src.getSigned();
	}
	return *this;
}

AForm::~AForm()
{
	
}

std::string const AForm::getName() const
{
	return this->_name;
}

int	AForm::getSignGrade() const
{
	return this->_sign_grade;
}

int AForm::getExecGrade() const
{
	return this->_exec_grade;
}

bool	AForm::getSigned() const
{
	return this->_is_signed;
}

void	AForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() <= this->getSignGrade())
		this->_is_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, const AForm &form)
{
	out << form.getName() << ", sign grade " << form.getSignGrade() << ", execute grade " << form.getExecGrade() << ", is signed : " << form.getSigned();
	return out;
}
