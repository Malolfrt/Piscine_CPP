/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:44:06 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/08 15:43:54 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <map>
#include <vector>

int main()
{
	std::cout << "\tLIST" << std::endl;
	std::list<int>	lst1;

	lst1.push_back(12);
	lst1.push_back(58);
	lst1.push_back(456);
	lst1.push_back(782);
	lst1.push_back(1);
	lst1.push_back(5);
	lst1.push_back(8);
	lst1.push_back(10);

	int	test1 = 5;
	int	test2 = 555;
	try
	{
		std::cout << "try to find 5 : ";
		easyfind(lst1, test1);
		std::cout << "try to find 555 : ";
		easyfind(lst1, test2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	
	std::cout << "\tVECTOR" << std::endl;
	std::vector<int>	vec1(15, 100);

	vec1.push_back(47);
	vec1.push_back(7);
	vec1.push_back(4);
	vec1.push_back(8);
	vec1.push_back(2);
	vec1.push_back(5);

	int	test3 = 100;
	int	test4 = 95;
	try
	{
		std::cout << "try to find 100 : ";
		easyfind(vec1, test3);
		std::cout << "try to find 95 : ";
		easyfind(vec1, test4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "\tMAP" << std::endl;

	std::map<int, int> map1;

	map1[0] = 24;
	map1[1] = 26;
	map1[2] = 28;
	map1[3] = 30;
	map1[4] = 32;

	int test5 = 4;
	int test6 = 34;
	try
	{
		std::cout << "try to find key number 4 : ";
		easyfind(map1, test5);
		std::cout << "try to find key number 32 : ";
		easyfind(map1, test6);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}