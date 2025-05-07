/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:12:05 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 13:00:52 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
	
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): _name(src.getName()), _grade(src.getGrade())
{

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &src)
{
	if (this != &src)
	{
		Bureaucrat *cpy = new Bureaucrat(src);
		return *cpy;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

std::string const	Bureaucrat::getName() const
{
	return this->_name;
}

void	Bureaucrat::gradeSup()
{
	this->_grade -= 1;
	if (this->_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::gradeInf()
{
	this->_grade += 1;
	if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Bureaucrat::signForm(const AForm &src)
{
	if (src.getSigned() == true)
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	else
	{
		std::string res;
		if (this->_grade <= src.getSignGrade())
			res = " he is lazy";
		else
			res = " he didn't have the grade to sign it";
		std::cout << this->_name << " couldn't sign " << src.getName() << " because" << res << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " failed to execute " << form.getName() << " because : ";
		std::cerr << e.what() << '\n';
		return ;
	}
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}