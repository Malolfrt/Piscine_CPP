/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:33:44 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:37:49 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		IMateriaSource();
		IMateriaSource(const IMateriaSource &src);
		IMateriaSource& operator=(const IMateriaSource &src);
		
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *src) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};