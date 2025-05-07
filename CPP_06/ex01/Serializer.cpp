/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:39:40 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/25 18:37:52 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t*	Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t*>(ptr);
}

Data*	Serializer::deserialize(uintptr_t* raw)
{
	return reinterpret_cast<Data*>(raw);
}