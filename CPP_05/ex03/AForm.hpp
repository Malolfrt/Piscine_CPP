/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:45:03 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/19 13:36:06 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class Bureaucrat;

class AForm
{
	public:
		AForm();
		AForm(const AForm &src);
		AForm(std::string const name, int sign_grade, int exec_grade);
		AForm& operator=(const AForm &src);
		virtual ~AForm();

		std::string const	getName() const;
		bool	getSigned() const;
		int		getSignGrade() const;
		int		getExecGrade() const;

		void beSigned(const Bureaucrat &src);
		virtual void	execute(Bureaucrat const &executor) const = 0;

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

		class NotSignedForm : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return "The Form is not signed!";
				}
		};

	private:
		std::string const	_name;
		bool				_is_signed;
		const int			_sign_grade;
		const int			_exec_grade;
};

std::ostream& operator<<(std::ostream &out, const AForm &form);