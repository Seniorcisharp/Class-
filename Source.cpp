#include <iostream>
#include "BankAccount.h"

using namespace std;

int main()
{
	BankAccount account("Owner 1");
	account.deposit(123124);
	account.getInfo();
	BankAccount account1("Owner 2",65765);
	account1.deposit(123124);
	account1.getInfo();
	BankAccount account2("Owner 3");
	BankAccount account3("Owner 4");
}