#define _CRT_SECURE_NO_WARNINGS

#include "BankAccount.h"
#include<iostream>

using namespace std;

long long BankAccount::currentNumber = 123456789;

BankAccount::BankAccount(const char* owner)
{
	this->number = BankAccount::currentNumber++;
	this->setOwner(owner);
}

BankAccount::BankAccount(const char* owner, double amount):BankAccount(owner)
{
	this->deposit(amount);

}

void BankAccount::setOwner(const char* value)
{
	if (value == nullptr)
	{
		throw new invalid_argument("");
	}

	//todo

	strcpy(this->owner, value);
}

const char* BankAccount::getOwner()
{
	return this->owner;
}

void BankAccount::deposit(double amount)
{
	if (amount <= 0)
	{
		throw new invalid_argument("add description");
	}

	this->balance += amount;
}

void BankAccount::withdraw(double amount)
{
	if (amount <= 0)
	{
		throw new invalid_argument("add description");
	}

	if (amount > this->balance)
	{
		throw new invalid_argument("add description");
	}

	this->balance -= amount;
}

const void BankAccount::getInfo()
{
	cout << this->number << ". " << this->getOwner() << ". " << this->balance << " "<< this->currency << endl;
}

void BankAccount::setCurrency(const char* value)
{
	if (strcmp(value, "BYN") == 0 || strcmp(value, "EUR") == 0 || strcmp(value, "USD") == 0);
	{
		strcpy(this->currency, value);
	}
	throw new invalid_argument("add description");
}
