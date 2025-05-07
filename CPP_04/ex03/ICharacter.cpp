/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:38:20 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/12 12:36:40 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() 
{
}

ICharacter::ICharacter(const ICharacter &src)
{
	(void)src;
}

ICharacter&	ICharacter::operator=(const ICharacter &src)
{
	(void)src;
	return *this;
}
