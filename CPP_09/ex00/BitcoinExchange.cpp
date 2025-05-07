/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:51:08 by mlefort           #+#    #+#             */
/*   Updated: 2024/10/16 15:28:43 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::~BitcoinExchange()
{
	
}

int	BitcoinExchange::initDB()
{
	std::ifstream file("data.csv", std::ios::in);

	if (!file.is_open())
	{
		std::cout << "Error : DataBase file." << std::endl;
		return 0;
	}

	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		std::istringstream currentLine(line);
		std::string date;
		std::string price;
		std::getline(currentLine, date, ',');
		std::getline(currentLine, price);

		if (this->validDate(date))
			this->_DataBase[date] = std::atof(price.c_str());
	}
	file.close();
	if (this->_DataBase.empty())
	{
		std::cout << "Error : DataBase file." << std::endl;
		return 0;
	}
	return 1;
}

float BitcoinExchange::getPrice(std::string &date)
{
	std::map<std::string, float>::iterator it = this->_DataBase.lower_bound(date);
	if (it == this->_DataBase.end())
	{
		it--;
		return it->second;
	}
	if (it->first == date)
		return it->second;
	if (it != this->_DataBase.begin())
		it--;
	return it->second;
}

bool BitcoinExchange::validValue(std::string &value)
{
	for (size_t i = 0; i < value.size(); i++)
	{
		if (!std::isdigit(value[i]) && value[i] != '.')
		{
			if (value[i] == '-')
				std::cout << "Error : not a positive number." << std::endl;
			else	
				std::cout << "Error : bad input => " << value << std::endl;
			return false;
		}
	}
	float res = std::atof(value.c_str());
	if (res < 0)
	{
		std::cout << "Error : not a positive number." << std::endl;
		return false;
	}
	else if (res > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return false;
	}
	return true;
}

void	BitcoinExchange::processExchange(std::string &filename)
{
	std::ifstream file(filename.c_str(), std::ios::in);
	if (!file.is_open())
	{
		std::cout << "Error : could not open input file." << std::endl;
		return ;
	}

	std::string line;
	std::getline(file, line);
	if (line != "date | value")
	{
		std::cout << "Error : missing header in input file." << std::endl;
		file.close();
		return ;
	}
	
	while (std::getline(file, line))
	{
		bool invalid = false;
		for (size_t i = 0; i < line.size(); i++)
		{
			if (!isdigit(line[i]) && line[i] != ' ' && line[i] != '-' && line[i] != '|' && line[i] != '.')
			{
				std::cout << "Error : bad input => " << line << std::endl;
				invalid = true;
				break ;
			}
		}
		if (invalid)
			continue ;

		std::istringstream currentLine(line);
		std::string date, value;

		std::getline(currentLine, date, '|');
		std::getline(currentLine, value);

		date.erase(remove(date.begin(), date.end(), ' '), date.end());
		value.erase(remove(value.begin(), value.end(), ' '), value.end());

		if (!this->validDate(date))
		{
			std::cout << "Error : bad input => " << date << std::endl;
			continue ;
		}

		if (!this->validValue(value))
			continue ;

		float res = this->getPrice(date);
		std::cout << date << " => " << value << " = " << (res * std::atof(value.c_str())) << std::endl;
	}
	file.close();
}

bool	BitcoinExchange::validDate(std::string date)
{
	if (date.size() != 10) {
        std::cout << "Error: bad input => " << date << std::endl;
        return false;
    }
	int year = std::atoi(date.substr(0, 4).c_str());
	int month = std::atoi(date.substr(5, 2).c_str());
	int day = std::atoi(date.substr(8, 2).c_str());
	if (date[4] != '-' || date[7] != '-')
		return false;
	if (year == 2009 && month == 1 && day == 1)
		return false;
	if (year < 2009 || month < 1 || month > 12 || day < 1)
		return false;
	if (month == 2)
	{
		if (this->leapYear(year))
			return day <= 29;
		else
			return day <= 28;			
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return day <= 30;
	return day <= 31;
}

bool	BitcoinExchange::leapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
			return year % 400 == 0;
        return true;
    }
    return false;
}