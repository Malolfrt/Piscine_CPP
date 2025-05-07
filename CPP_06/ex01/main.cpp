/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:39:51 by mlefort           #+#    #+#             */
/*   Updated: 2024/09/25 18:52:31 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main()
{
	Data myData;

	myData.name = "Tyrion";
	myData.age = 28;
	myData.next = NULL;

	Data myData2;

	myData2.name = "Jammy";
	myData2.age = 30;
	myData2.next = &myData;

	Data *cpyData;
	uintptr_t *raw;

	raw = Serializer::serialize(&myData2);
	cpyData = Serializer::deserialize(raw);

	std::cout << "Name of myData2 : " << myData2.name << "\nAge of myData2 : " << myData2.age << "\nNext of myData2 : " << myData2.next << std::endl;
	std::cout << "Name of myData2.next : " << myData2.next->name << "\nAge of myData2.next : " << myData2.next->age << std::endl;
	std::cout << std::endl;
	std::cout << "Name of cpyData : " << cpyData->name << "\nAge of cpyData : " << cpyData->age << "\nNext of cpyData : " << cpyData->next << std::endl;
	std::cout << "Name of cpyData->next : " << cpyData->next->name << "\nAge of cpyData->next : " << cpyData->next->age << std::endl;
    
	return 0;
}
