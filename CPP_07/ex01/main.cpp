/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:42:06 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/02 15:15:42 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	std::string strings[] = {"One", "Two", "Three", "Four"};

	std::cout << "\tNormal: " << std::endl;
	::iter(strings, 4, print<std::string>);
	std::cout << "\tTo Upper: " << std::endl;
	::iter(strings, 4, print_to_upper);
	std::cout << "\tTo Lower: " << std::endl;
	::iter(strings, 4, print_to_lower);

	int ints[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << "\tInts:" << std::endl;
	::iter(ints, 10, print<int>);
	float floats[] = {1.23, 4.56, 7.89};
	std::cout << "\tFloats: " << std::endl;
	::iter(floats, 3, print<float>);
	double doubles[] = {1.2345, 67.89};
	std::cout << "\tDoubles: " << std::endl;
	::iter(doubles, 2, print<double>);
}