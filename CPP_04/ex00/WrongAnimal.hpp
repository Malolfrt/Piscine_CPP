/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 13:01:27 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/05 13:46:08 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal& operator=(const WrongAnimal &src);
		virtual ~WrongAnimal();

		void		makeSound() const;
		void		setType(std::string str);
		std::string	getType() const;

	protected:
		std::string _type;
};