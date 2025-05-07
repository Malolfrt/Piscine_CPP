/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:22:12 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/10 15:59:27 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"

class Cat: public AAnimal
{
	public:
		Cat();
		Cat(const Cat &cpy);
		Cat& operator=(const Cat &src);
		~Cat();

		void		makeSound() const;
	private:
		Brain *_brain;
};