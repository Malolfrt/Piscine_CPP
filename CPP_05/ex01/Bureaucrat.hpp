/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:11:47 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/17 16:54:07 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat&	operator=(const Bureaucrat &src);
		~Bureaucrat();

		const std::string getName() const;
		int getGrade() const;

		void	gradeSup();
		void	gradeInf();

		void	signForm(const Form &src);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "Grade too High Bureaucrat!";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "Grade too Low Bureaucrat!";
				}
		};
		
	private:
		const std::string _name;
		int	_grade;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);