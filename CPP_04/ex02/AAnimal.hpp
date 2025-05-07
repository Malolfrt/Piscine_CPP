/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 11:55:31 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/10 15:59:14 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &cpy);
		AAnimal& operator=(const AAnimal &src);
		virtual ~AAnimal();

		virtual void	makeSound() const = 0;
		void			setType(std::string str);
		std::string		getType() const;

	protected:
		std::string _type;
};