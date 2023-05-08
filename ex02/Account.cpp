/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 18:47:34 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/06 18:47:36 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <iomanip>

/*
typedef Account		t;

	Account( int initial_deposit );
	~Account( void );

	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;


private:

	int				_accountIndex;
	int				_amount;
	int				_nbDeposits;
	int				_nbWithdrawals;

	Account( void );
*/
static int	Account::_nbAccounts;
static int	Account::_totalAmount;
static int	Account::_totalNbDeposits;
static int	Account::_totalNbWithdrawals;

static int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

static int Account::getTotalAmount(void)
{
    return _totalAmount;
}

static int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

static int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

static void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm* now = std::localtime(&t);

	std::cout << "[" << (now->tm_year + 1900);
	std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
	std::cout << std::setw(2) << std::setfill('0') << now->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << now->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}

int	main(void)
{
	//_displayTimestamp();
	return (0);
}