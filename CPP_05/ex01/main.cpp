/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 12:11:28 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/18 14:44:44 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *a = new Bureaucrat("CHAD", 1);
	std::cout << *a << std::endl;
	Bureaucrat *b = new Bureaucrat("Emmanuel", 49);
	std::cout << *b << std::endl;
	Form *doc1 = new Form();
	std::cout << *doc1 << std::endl; 
	Form *doc2 = new Form("49.3", 30, 50);
	try
	{
		a->signForm(*doc1);
		doc1->beSigned(*a);
		a->signForm(*doc1);
		b->signForm(*doc2);
		doc2->beSigned(*b);
		b->signForm(*doc2);

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form *c = new Form("minishell.c", 158, 5);
		c->beSigned(*a);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form *d = new Form("minishell.c", 10, -5);
		d->beSigned(*b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete a;	
	delete b;
	delete doc1;	
	delete doc2;
	return 0;
}