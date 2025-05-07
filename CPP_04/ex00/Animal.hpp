/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:55:31 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 12:42:55 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &cpy);
		Animal& operator=(const Animal &src);
		virtual ~Animal();

		virtual void	makeSound() const;
		void			setType(std::string str);
		std::string		getType() const;

	protected:
		std::string _type;
};