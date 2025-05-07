/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:35:53 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/16 19:02:27 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <stack>
#include <sstream>
#include <algorithm>

class RPN
{
	public:
		RPN();
		~RPN();
		
		void	calc_rpn(std::string str);
		
	private:
		std::stack<int> _number;

		int 	checkArg(std::string str);
		bool	isOperator(char c);
		int		doOperation(char c);

		RPN(const RPN &src);
		RPN& operator=(const RPN &src);
};