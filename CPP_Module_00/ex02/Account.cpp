/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:14:54 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/07 22:47:37 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";" << "amount:" << _amount;
	std::cout << ";" << "created" << std::endl;
	_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:";
	std::cout << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";" << "total:";
	std::cout << getTotalAmount() << ";" << "deposits:";
	std::cout << getNbDeposits() << ";" << "withdrawals:";
	std::cout << getNbWithdrawals() << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "p_amount:";
	std::cout << _amount << ";" << "deposit:" << deposit << ";";
	_amount = _amount + deposit ;
	_totalAmount += deposit;
	_nbDeposits++;
	std::cout << "amount:" << _amount << ";" << "nb_deposits:";
	std::cout << _nbDeposits << std::endl;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:";
	std::cout << _amount << ";" ;
	if (checkAmount() >= withdrawal)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		_amount = _amount - withdrawal ;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		std::cout << "amount:" << _amount << ";" << "nb_withdrawals:";
		std::cout << _nbWithdrawals << std::endl;
		_totalNbWithdrawals++;
		return(true);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:";
	std::cout << _amount << ";" << "deposits:" << _nbDeposits;
	std::cout << ";" << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void)
{
    time_t timeline;
    struct tm *info;
    char buff[80];

    time(&timeline);
    info = localtime(&timeline);
    strftime(buff, 80, "[%Y%m%d_%I%M%S] ", info);
    std::cout << buff ;
}
