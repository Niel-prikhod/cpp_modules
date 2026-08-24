#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(NULL);
	std::tm *l = std::localtime(&t);
	char buf[16];

	std::strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", l);
	std::cout << "[" << buf << "] ";
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
}

void Account::makeDeposit( int deposit ) {
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << this->_amount << 
		";deposit:" << deposit << ";amount:" << (this->_amount += deposit) << 
		";nb_deposits:" << ++this->_nbDeposits;
}

bool Account::makeWithdrawal( int withdrawal ) {
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
}

int	 Account::checkAmount( void ) const {
	return this->_amount;
}

void Account::displayStatus( void ) const {
}

Account::Account( int initial_deposit) {
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts++;
	_totalAmount += initial_deposit;
}

Account::~Account( void ) {
}
