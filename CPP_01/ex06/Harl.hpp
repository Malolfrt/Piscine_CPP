/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:55:25 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/14 20:19:43 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Harl
{
	public:
		Harl();
		~Harl();
		void	complain(std::string level);

	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();

		typedef void (Harl::*HarlMemberFunction)();
		std::string _levels[4];
		void (Harl::*_function[4])();
};