/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:47:11 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/22 17:09:31 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av)
{
	try
	{
		this->parsing(ac, av);
		std::cout << "Before : ";
		this->display();
		std::cout << std::endl;
		this->mergeInsert();
		std::cout << "After : ";
		this->display();
		std::cout << std::endl;
		std::cout << std::fixed << std::setprecision(5);
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::list<int> : " << this->_timeList << " us" << std::endl;
		std::cout << "Time to process a range of " << ac - 1 << " elements with std::vector<int> : " << this->_timeVector << " us" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

PmergeMe::~PmergeMe()
{
	
}

void	PmergeMe::mergeInsert()
{
	std::clock_t start = std::clock();
	this->algoList();
	std::clock_t end = std::clock();
	this->_timeList = double(end -start) / CLOCKS_PER_SEC;

	start = std::clock();
	this->algoVector();
	end = std::clock();
	this->_timeVector = double(end -start) / CLOCKS_PER_SEC;
}

void	PmergeMe::parsing(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		std::string tmp = av[i];
		if (tmp.empty())
			throw errorWithInput();
		for (size_t j = 0; j < tmp.size(); j++)
		{
			if (!isdigit(tmp[j]))
				throw errorWithInput();
		}
		int value = std::atoi(tmp.c_str());
		if (value < 0)
			throw errorWithInput();
		this->_lst.push_back(value);
		this->_vct.push_back(value);
	}
	this->checkDouble();	
}

void	PmergeMe::checkDouble() const
{
	std::set<int> numbers;
	
	for (std::list<int>::const_iterator it = this->_lst.begin(); it != this->_lst.end(); it++)
	{
		if (!numbers.insert(*it).second)
			throw errorDouble();
	}
}

void	PmergeMe::display() const
{
	for (std::list<int>::const_iterator it = this->_lst.begin(); it != this->_lst.end(); it++)
	{
		std::cout << *it << " ";
	}
}

void	PmergeMe::displayVec() const
{
	for (std::vector<int>::const_iterator it = this->_vct.begin(); it != this->_vct.end(); it++)
	{
		std::cout << *it << " ";
	}
}

void PmergeMe::algoList()
{
	std::list<int> array(this->_lst.size());
	std::copy(this->_lst.begin(), this->_lst.end(), array.begin());
	
	int	odd = -1;
	if (array.size() % 2 != 0)
	{
		odd = array.back();
		array.pop_back();
	}
	
	std::list<int>::iterator it, ite;
	it = array.begin();
	size_t size = (array.size() / 2);

	int **intArray = new int*[size];
	for (size_t i = 0; i < size; i++)
		intArray[i] = new int[2];
	for (size_t i = 0; i < size; i++)
	{
		intArray[i][0] = *it;
		it++;
		intArray[i][1] = *it;
		it++;
		if (intArray[i][0] > intArray[i][1])
		{
			int tmp = intArray[i][0];
			intArray[i][0] = intArray[i][1];
			intArray[i][1] = tmp;
		}
	}

	std::list<int> sorted;
	for (size_t i = 0; i < size; i++)
	{
		if (i == 0)
		{
			sorted.push_back(intArray[i][0]);
			continue ;
		}
		it = sorted.begin();
		while (it != sorted.end() && *it < intArray[i][0])
		{
			it++;
		}
		sorted.insert(it, intArray[i][0]);
	}

	for (size_t i = 0; i < size; i++)
	{
		it = sorted.begin();
		while (it != sorted.end() && *it < intArray[i][1])
		{
			it++;
		}
		sorted.insert(it, intArray[i][1]);
	}
	
	if (odd != -1)
	{
		it = sorted.begin();
		while (it != sorted.end() && *it < odd)
		{
			it++;
		}
		sorted.insert(it, odd);
	}
	
	for (size_t i = 0; i < size; i++)
	{
		delete [] intArray[i];
	}
	delete [] intArray;
	
	std::copy(sorted.begin(), sorted.end(), this->_lst.begin());
}

void PmergeMe::algoVector()
{
	std::vector<int> array(this->_vct.size());
	std::copy(this->_vct.begin(), this->_vct.end(), array.begin());

	int	odd = -1;
	if (array.size() % 2 != 0)
	{
		odd = array.back();
		array.pop_back();
	}
	
	std::vector<int>::iterator it, ite;
	it = array.begin();
	size_t size = (array.size() / 2);

	int **intArray = new int*[size];
	for (size_t i = 0; i < size; i++)
		intArray[i] = new int[2];
	for (size_t i = 0; i < size; i++)
	{
		intArray[i][0] = *it;
		it++;
		intArray[i][1] = *it;
		it++;
		if (intArray[i][0] > intArray[i][1])
		{
			int tmp = intArray[i][0];
			intArray[i][0] = intArray[i][1];
			intArray[i][1] = tmp;
		}
	}

	std::vector<int> sorted;
	for (size_t i = 0; i < size; i++)
	{
		if (i == 0)
		{
			sorted.push_back(intArray[i][0]);
			continue ;
		}
		it = std::upper_bound(sorted.begin(), sorted.end(), intArray[i][0]);
		sorted.insert(it, intArray[i][0]);
	}

	for (size_t i = 0; i < size; i++)
	{
		it = std::upper_bound(sorted.begin(), sorted.end(), intArray[i][1]);
		sorted.insert(it, intArray[i][1]);
	}
	
	if (odd != -1)
	{
		it = std::upper_bound(sorted.begin(), sorted.end(), odd);
		sorted.insert(it, odd);
	}

	for (size_t i = 0; i < size; i++)
	{
		delete [] intArray[i];
	}
	delete [] intArray;

	std::copy(sorted.begin(), sorted.end(), this->_vct.begin());
}