/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 15:09:48 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 17:45:48 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &cpy);
		Brain& operator=(const Brain &src);
		~Brain();

		std::string	ideas[100];
		
};