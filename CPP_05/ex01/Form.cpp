/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:45:12 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/18 14:44:11 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("2nd Amendement"), _is_signed(false), _sign_grade(1), _exec_grade(1)
{

}

Form::Form(std::string const name, int sign_grade, int exec_grade): _name(name), _is_signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (this->_sign_grade < 1 || this->_exec_grade < 1 )
		throw Form::GradeTooHighException();
	if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src): _name(src.getName()), _is_signed(src.getSigned()), _sign_grade(src.getSignGrade()), _exec_grade(src.getExecGrade())
{
	
}

Form& Form::operator=(const Form &src)
{
	if (this != &src)
	{
		Form *cpy = new Form(src);
		return *cpy;
	}
	return *this;
}

Form::~Form()
{
	
}

std::string const Form::getName() const
{
	return this->_name;
}

int	Form::getSignGrade() const
{
	return this->_sign_grade;
}

int Form::getExecGrade() const
{
	return this->_exec_grade;
}

bool	Form::getSigned() const
{
	return this->_is_signed;
}

void	Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() <= this->getSignGrade())
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", sign grade " << form.getSignGrade() << ", execute grade " << form.getExecGrade() << ", is signed : " << form.getSigned();
	return out;
}
