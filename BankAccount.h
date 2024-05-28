#pragma once

const int length = 256;

class BankAccount
{
public:
	BankAccount(const char* owner);
	BankAccount(const char* owner, double amount);
	void setOwner(const char* value);
	 const char* getOwner();
	void deposit(double amount);
	void withdraw(double amount);
	const void getInfo();
private:
	void setCurrency(const char* value);
	long long number{ 0 };
	char owner[length]{ "" };
	double balance{ 0.0 };
	char currency[4]{ "BYN" };
	static long long currentNumber;
};