/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:31:05 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/09 18:14:36 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "\t MAIN IN THE SUBJECT" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t My Main" << std::endl;
	Span a(4);
	try
	{
		a.addNumbers(4, 10);
		std::cout << "trying to add one element to a : ";
		a.addNumber(12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Span b(10);
	try
	{
		std::cout << "trying to add 11 elements to b : ";
		b.addNumbers(11, 15);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Span c(20);
	try
	{
		c.addNumber(125);
		c.addNumber(54);
		c.addNumber(1);
		c.addNumber(585);
		c.addNumber(45);
		c.addNumber(24);
		c.addNumber(42);
		std::cout << "shortestSpan() of c : ";
		std::cout << c.shortestSpan() << std::endl;
		std::cout << "longestSpan() of c : ";
		std::cout << c.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	Span d(5);

	try
	{
		std::cout << "Trying to find shortest in empty Span : ";
		d.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		d.addNumber(1);
		std::cout << "Trying to find longest in Span with only one element : ";
		d.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}