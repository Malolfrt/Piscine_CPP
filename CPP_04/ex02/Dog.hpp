/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:15:05 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/10 15:59:38 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &cpy);
		Dog& operator=(const Dog &src);
		~Dog();

		void		makeSound() const;
		
	private:
		Brain *_brain;
};