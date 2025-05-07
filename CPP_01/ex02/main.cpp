/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:54:46 by mlefort           #+#    #+#             */
/*   Updated: 2024/08/12 20:10:37 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Adresse de la string en mémoire      : " << &str << std::endl;
	std::cout << "Adresse stockee dans stringPTR       : " << stringPTR << std::endl;
	std::cout << "Adresse stockee dans stringREF       : " << &stringREF << std::endl;
	std::cout << "valeur de la string                  : " << str << std::endl;
	std::cout << "Valeur pointee par stringPTR         : " << *stringPTR << std::endl;
	std::cout << "Valeur pointee par stringREF         : " << stringREF << std::endl;
}