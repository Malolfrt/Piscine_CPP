/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:45:03 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/17 16:52:30 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const Form &src);
		Form(std::string const name, int sign_grade, int exec_grade);
		Form& operator=(const Form &src);
		~Form();

		std::string const	getName() const;
		bool	getSigned() const;
		int		getSignGrade() const;
		int		getExecGrade() const;

		void	beSigned(const Bureaucrat &src);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "Grade too High Form!";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "Grade too Low Form!";
				}
		};

	private:
		std::string const	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;
};

std::ostream& operator<<(std::ostream &out, const Form &form);