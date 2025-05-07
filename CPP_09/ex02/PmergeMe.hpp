/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:47:14 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/22 17:04:40 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <ctime>
#include <iomanip>
#include <algorithm>

class PmergeMe
{
	public:
		PmergeMe(int ac, char **av);
		~PmergeMe();
		
		class errorWithInput : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return "Error: input is wrong.";
				}
		};

		class errorDouble : public std::exception
		{
			public :
				virtual const char * what() const throw()
				{
					return "Error: there are duplicate numbers.";
				}
		};

	private:
		std::list<int> _lst;
		std::vector<int> _vct;

		double	_timeVector;
		double	_timeList;

		void	parsing(int ac, char **av);
		void	mergeInsert();
		void	algoList();
		void	algoVector();
		void	checkDouble() const;
		void 	display() const;
		void 	displayVec() const;
		
		PmergeMe();
		PmergeMe(const PmergeMe &src);
		PmergeMe& operator=(const PmergeMe &src);
};