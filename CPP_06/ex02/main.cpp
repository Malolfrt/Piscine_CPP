/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:25:17 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/25 20:07:53 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static Base* generate()
{
	int random_number = std::rand() % 3 + 1;
	switch (random_number)
	{
		case 1:
			return new A();
		case 2:
			return new B();
		case 3:
			return new C();
		default:
		{
			std::cout << "Error : random number in geerate failed !" << std::endl;
			return NULL;
		}
	}
}

static void identify_ptr(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error : Unknown type" << std::endl;
}

static void identify_ref(Base &p)
{
	Base test;
	try
	{
		test = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	
	try
	{
		test = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	
	try
	{
		test = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
}

int main()
{
	Base *test1;
	Base *test2;
	Base *test3;

	std::srand(std::time(0));
	test1 = generate();
	test2 = generate();
	test3 = generate();

	std::cout << "Identify with pointeur" << std::endl;
	identify_ptr(test1);
	identify_ptr(test2);
	identify_ptr(test3);
	std::cout << std::endl;

	std::cout << "Identify with reference" << std::endl;
	identify_ref(*test1);
	identify_ref(*test2);
	identify_ref(*test3);

	delete test1;
	delete test2;
	delete test3;
	return 0;
}