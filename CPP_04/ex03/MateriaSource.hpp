/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:35:13 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:06:19 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource& operator=(const MateriaSource &src);
		~MateriaSource();

		void 		learnMateria(AMateria *);
		AMateria*	createMateria(std::string const & type);
	private:
		AMateria	*_items[4];
};