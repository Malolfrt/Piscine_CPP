/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:04:08 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/11 15:20:13 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

template < typename T, typename container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		MutantStack(): MutantStack<T, container>::stack() {};
			
		MutantStack(const MutantStack<T, container> &src): MutantStack< T, container >::stack(src) {};

		MutantStack<T, container>& operator=(const MutantStack<T, container> &src)
		{
			if (this != &src)
			{
				this->MutantStack<T, container>::stack::operator=(src);
			}
			return *this;
		};

		typedef typename container::iterator iterator;

		void	push( T nb ) { this->c.push_back(nb); };
			
		void	pop() { this->c.pop_back(); };

		T&	top() { return std::stack<T, container>::top(); };

		size_t	size() { return std::stack<T, container>::size(); };
		
		iterator	begin() { return this->c.begin(); };
		
		iterator	end() { return this->c.end(); };
};	
