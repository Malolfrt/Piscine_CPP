/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:27 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/16 13:05:30 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <algorithm>


class BitcoinExchange
{
	public:
		BitcoinExchange();
		~BitcoinExchange();

		int initDB();
		float getPrice(std::string &date);
		void processExchange(std::string &filename);

	private:
		std::map<std::string, float>	_DataBase;

		bool	validValue(std::string &value);
		bool	validDate(std::string date);
		bool	leapYear(int year);

		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange& operator=(const BitcoinExchange &src);
};