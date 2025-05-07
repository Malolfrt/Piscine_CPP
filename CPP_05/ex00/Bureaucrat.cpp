/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:12:05 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/17 16:55:35 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
	if (this->_grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (this->_grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
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

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return out;
}