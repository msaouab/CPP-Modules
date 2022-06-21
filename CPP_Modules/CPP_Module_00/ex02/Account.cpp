/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 17:14:54 by msaouab           #+#    #+#             */
/*   Updated: 2022/05/08 17:07:31 by msaouab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <iostream>
#include "Account.hpp"
#include <stdlib.h>

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
	_nbAccounts++;
	std::cout << "\033[0;34m" << "index" << "\033[0m" << ":";
	std::cout << "\033[0;34m" << _accountIndex << "\033[0m" << ";";
	std::cout << "\033[0;36m" << "amount" << "\033[0m" << ":";
	std::cout << "\033[0;36m" << _amount << "\033[0m" << ";";
	std::cout << "\033[0;32m" << "created" << "\033[0m";
	std::cout << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "\033[0;34m" << "index" << "\033[0m" << ":";
	std::cout << "\033[0;34m" << _accountIndex << "\033[0m" << ";";
	std::cout << "\033[0;36m" << "amount" << "\033[0m" << ":";
	std::cout << "\033[0;36m" << _amount << "\033[0m" << ";";
	std::cout << "\033[0;31m" << "closed" << "\033[0m";
	std::cout << std::endl;
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
	std::cout << "\033[0;35m" << "accounts" << "\033[0m" << ":";
	std::cout << "\033[0;35m" << getNbAccounts() << "\033[0m" << ";";
	std::cout << "\033[0;35m" << "total" << "\033[0m" << ":";
	std::cout << "\033[0;35m" << getTotalAmount() << "\033[0m" << ";";
	std::cout << "\033[0;32m" << "deposits" << "\033[0m" << ":";
	std::cout << "\033[0;32m" << getNbDeposits() << "\033[0m" << ";";
	std::cout << "\033[0;35m" << "withdrawals" << "\033[0m" << ":";
	std::cout << "\033[0;35m" << getNbWithdrawals() << "\033[0m";
	std::cout << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "\033[0;34m" << "index" << "\033[0m" << ":";
	std::cout << "\033[0;34m" << _accountIndex << "\033[0m" << ";";
	std::cout << "\033[0;36m" << "p_amount" << "\033[0m" << ":";
	std::cout << "\033[0;36m" << _amount << "\033[0m" << ";";
	std::cout << "\033[0;32m" << "deposits" << "\033[0m" << ":";
	std::cout << "\033[0;32m" << deposit << "\033[0m" << ";";
	_amount = _amount + deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	std::cout << "\033[0;36m" << "amount" << "\033[0m" << ":";
	std::cout << "\033[0;36m" << _amount << "\033[0m" << ";";
	std::cout << "\033[0;35m" << "nb_deposits" << "\033[0m" << ":";
	std::cout << "\033[0;35m" << _nbDeposits << "\033[0m";
	std::cout << std::endl;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "\033[0;34m" << "index" << "\033[0m" << ":";
	std::cout << "\033[0;34m" << _accountIndex << "\033[0m" << ";";
	std::cout << "\033[0;36m" << "p_amount" << "\033[0m" << ":";
	std::cout << "\033[0;36m" << _amount << "\033[0m" << ";";
	if (checkAmount() >= withdrawal)
	{
		std::cout << "\033[0;35m" << "withdrawal" << "\033[0m" << ":";
		std::cout << "\033[0;35m" << withdrawal << "\033[0m" << ";";
		_amount = _amount - withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		std::cout << "\033[0;36m" << "amount" << "\033[0m" << ":";
		std::cout << "\033[0;36m" << _amount << "\033[0m" << ";";
		std::cout << "\033[0;35m" << "nb_withdrawals" << "\033[0m" << ":";
		std::cout << "\033[0;35m" << _nbWithdrawals << "\033[0m";
		std::cout << std::endl;
		_totalNbWithdrawals++;
		return(true);
	}
	else
	{
		std::cout << "\033[0;35m" << "withdrawal" << "\033[0m" << ":";
		std::cout << "\033[0;31m" << "refused" << "\033[0m";
		std::cout << std::endl;
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
	std::cout << "\033[0;34m" << "index" << "\033[0m" << ":";
	std::cout << "\033[0;34m" << _accountIndex << "\033[0m" << ";";
	std::cout << "\033[0;36m" << "amount" << "\033[0m" << ":";
	std::cout << "\033[0;36m" << _amount << "\033[0m" << ";";
	std::cout << "\033[0;32m" << "deposits" << "\033[0m" << ":";
	std::cout << "\033[0;32m" << _nbDeposits << "\033[0m" << ";";
	std::cout << "\033[0;35m" << "withdrawals" << "\033[0m" << ":";
	std::cout << "\033[0;35m" << _nbWithdrawals << "\033[0m";
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void)
{
    time_t timeline;
    struct tm *info;
    char buff[16];

    time(&timeline);
    info = localtime(&timeline);
    strftime(buff, 80, "[%Y%m%d_%I%M%S] ", info);
	std::cout << "\033[0;33m" << buff << "\033[0m";
}
