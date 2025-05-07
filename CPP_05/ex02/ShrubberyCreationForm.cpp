/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:55:02 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/18 17:31:15 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm::AForm("ShrubberyCreationForm", 145, 137), _target("default")
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm::AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
	this->_target = src._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
	if (this != &src)
	{
		this->_target = src._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw NotSignedForm();
	else if (executor.getGrade() > this->getExecGrade())
		throw	GradeTooLowException();
	else if (this->getSigned() == true && executor.getGrade() <= this->getExecGrade())
	{
		std::string outfile = this->_target + "_shrubbery";
		std::ofstream ofs(outfile.c_str());
		if (ofs.fail())
			std::cout << "Error while opening outfile file" << std::endl;
		else
		{
			ofs << "              ,@@@@@@@," << std::endl;
        	ofs << "      ,,,.   ,@@@@@@/@@,  .oo8888o. " << std::endl;
        	ofs << "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl;
        	ofs << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << std::endl;
        	ofs << "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888' " << std::endl;
        	ofs << "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl;
        	ofs << "  `&%\\ ` /%&'    |.|        \\ '|8' " << std::endl;
        	ofs << "      |o|        | |         | | " << std::endl;
        	ofs << "      |.|        | |         | | " << std::endl;
        	ofs << "   \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ by mlefort" << std::endl;
			ofs.close();
		}
	}
}

