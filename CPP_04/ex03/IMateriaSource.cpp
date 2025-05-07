/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:34:39 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:37:39 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource() 
{
}

IMateriaSource::IMateriaSource(const IMateriaSource &src)
{
	(void)src;
}

IMateriaSource&	IMateriaSource::operator=(const IMateriaSource &src)
{
	(void)src;
	return *this;
}
