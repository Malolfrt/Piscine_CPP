/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:39:29 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/25 18:37:41 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
	public:
		static uintptr_t* serialize(Data *ptr);
		static Data* deserialize(uintptr_t *raw);
	private:
		Serializer();
		Serializer(const Serializer &src);
		Serializer& operator=(const Serializer &src);
		~Serializer();
};