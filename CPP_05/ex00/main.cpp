/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:11:28 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/17 15:41:18 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *a = new Bureaucrat("Didier", 150);
	std::cout << *a << std::endl;
	Bureaucrat *b = new Bureaucrat("Bobby", 1);
	std::cout << *b << std::endl;
	try
	{
		a->gradeInf();	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete a;
	}
	try
	{
		b->gradeSup();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete b;
	}
	try
	{
		Bureaucrat *c = new Bureaucrat("Didier", -50);
		c->gradeSup();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat *d = new Bureaucrat("Didier", 200);
		d->gradeSup();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}