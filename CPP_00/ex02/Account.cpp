/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:25:52 by mlefort           #+#    #+#             */
/*   Updated: 2024/07/11 17:52:04 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) 
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	int tmp = this->_amount;
	tmp -= withdrawal;
	if (tmp < 0)
	{
		std::cout << "Index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" <<std::endl;
		return false;
	}
	else
	{
		std::cout << "Index:" << this->_accountIndex << ";p_amount:" << this->_amount;
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
}

void Account::_displayTimestamp()
{
    time_t now = time(NULL);
    struct tm *now_tm = localtime(&now);
    std::cout << "[" 
              << (now_tm->tm_year + 1900)
              << (now_tm->tm_mon + 1 < 10 ? "0" : "") << (now_tm->tm_mon + 1)
              << (now_tm->tm_mday < 10 ? "0" : "") << now_tm->tm_mday << "_"
              << (now_tm->tm_hour < 10 ? "0" : "") << now_tm->tm_hour
              << (now_tm->tm_min < 10 ? "0" : "") << now_tm->tm_min
              << (now_tm->tm_sec < 10 ? "0" : "") << now_tm->tm_sec 
              << "] ";
}

int Account::checkAmount() const
{
	return this->_amount;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "Index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl; 
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "Accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}