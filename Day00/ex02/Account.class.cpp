/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esterna <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 10:54:33 by esterna           #+#    #+#             */
/*   Updated: 2018/01/10 12:29:50 by esterna          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <ctime>

int			Account::_nbAccounts = 0;

int			Account::_totalAmount = 0;

int			Account::_totalNbDeposits = 0;

int			Account::_totalNbWithdrawals = 0;

int			Account::getNbAccounts( void ) { return _nbAccounts; }

int			Account::getTotalAmount( void ) { return _totalAmount; }

int			Account::getNbDeposits( void ) { return _totalNbDeposits; }

int			Account::getNbWithdrawals( void ) { return _totalNbWithdrawals; }

int			Account::checkAmount( void ) const { return this->_amount; }

void		Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void		Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void		Account::_displayTimestamp ( void )
{
	time_t		currTime = time( 0 );
	struct tm	*local   = localtime( &currTime );
	char		date[32];

	strftime(date, sizeof(date), "[%Y%m%d_%H%M%S] ", local);
	std::cout << date;
}

Account::Account( void ) : _accountIndex(getNbAccounts()), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts += 1;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<";created" << std::endl;
}

Account::Account( int initial_deposit ) : _accountIndex(getNbAccounts()), _amount(initial_deposit),
									  _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts += 1;
	_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts -= 1;
	_totalAmount -= this->_amount;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount <<";closed" << std::endl;
}

void		Account::makeDeposit( int deposit )
{
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	this->_amount += deposit;
	_totalAmount += deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:";
	std::cout << this->_nbDeposits << std::endl;
}

bool		Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();

	if ( withdrawal > this->_amount )
	{
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}

	this->_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;

	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal;
	std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return true;
}
