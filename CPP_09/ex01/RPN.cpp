/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:35:43 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/16 19:46:24 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
	
}

RPN::~RPN()
{
	
}

int	RPN::doOperation(char c)
{
	if (this->_number.size() < 2)
	{
		std::cout << "Error : wrong arguments." << std::endl;
		return 0;
	}

	int	res;
	int	tmp;
	switch (c)
	{
	case '-':
	{
		tmp = this->_number.top();
		this->_number.pop();
		res = (this->_number.top() - tmp);
		this->_number.pop();
		this->_number.push(res);
		break;
	}
	case '+':
	{
		tmp = this->_number.top();
		this->_number.pop();
		res = (this->_number.top() + tmp);
		this->_number.pop();
		this->_number.push(res);
		break;
		break ;
	}
	case '*':
	{
		tmp = this->_number.top();
		this->_number.pop();
		res = (this->_number.top() * tmp);
		this->_number.pop();
		this->_number.push(res);
		break;
	}
	case '/':
	{
		tmp = this->_number.top();
		this->_number.pop();
		if (tmp == 0)
		{
			std::cout << "Error : divison by zero." << std::endl;
			return 0;
		}
		res = (this->_number.top() / tmp);
		this->_number.pop();
		this->_number.push(res);
		break;
		break ;
	}
	default:
	{
		std::cout << "Error : invalid operator." << std::endl;
		return 0;
	}
	}
	return 1;
}

void	RPN::calc_rpn(std::string str)
{
	if (!this->checkArg(str) || str.empty())
	{
		std::cout << "Error : wrong arguments." << std::endl;
		return ;
	}
	std::string current(str);
	for (size_t i = 0; i < current.size(); i++)
	{
		if (isdigit(current[i]))
			this->_number.push(current[i] - '0');
		else if (this->isOperator(current[i]))
		{
			if ((current[i] == '-' || current[i] == '+') && isdigit(current[i + 1]))
			{
				if (current[i] == '-')
					this->_number.push(((current[i + 1] - '0') * -1));
				else
					this->_number.push((current[i + 1] - '0'));
				i++;
			}
			else if (!this->doOperation(current[i]))
				return ;
		}
	}
	if (this->_number.size() == 1)
		std::cout << this->_number.top() << std::endl;
	else
		std::cout << "Error : wrong arguments." << std::endl;
}

int	RPN::checkArg(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!isdigit(str[i]) && str[i] != ' ' && str[i] != '-' && str[i] != '+' && str[i] != '/' && str[i] != '*')
			return 0;
		else if (isdigit(str[i]))
		{
			if (!isOperator(str[i + 1]) && str[i + 1] != ' ' && str[i + 1] != '\0')
				return 0;
		}
	}
	return 1;
}

bool	RPN::isOperator(char c)
{
	if (c == '-' || c == '+' || c == '*' || c == '/')
		return true;
	return false;
}