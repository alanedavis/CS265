//Mark Boady
//CS265 - Lab 8

#include <iostream>
#include "account.h"
using namespace std;

int getCommand();
void exit(account* b);
void withdraw(account* b);
void deposit(account* b);
void check(account* b);
void standing(account* b);

int main()
{
	cout << "Welcome to Bank Account Simulator" << endl;
	
	//Create an Empty Bank Account
	account* bank = new account();
	//Get commands from user
	int action=0;
	while(action!=5)
	{
		action = getCommand();
		switch(action)
		{
			case 1:
				withdraw(bank);
				break;
			case 2:
				deposit(bank);
				break;
			case 3:
				check(bank);
				break;
			case 4:
				standing(bank);
				break;
			case 5:
				exit(bank);
				break;
		}
	}
	return 0;
}

//Function to show user menu
int getCommand()
{
	cout << "1.) Withdraw Money From Account" << endl;
	cout << "2.) Deposit Money Into Account" << endl;
	cout << "3.) Check Current Balance" << endl;
	cout << "4.) Check if Account in Good Standing" << endl;
	cout << "5.) Exit Program" << endl;
	cout << "Enter Option (1-5): " << endl;
	int response;
	cin >> response;
	if(response < 1 || response > 5)
	{
		cout  << "Invalid Option." << endl;
		return getCommand();
	}
	return response;
}

void exit(account* b)
{
	cout << "Thank You for using this program" << endl;
	delete b;
	return;
}
void withdraw(account* b)
{
	cout << "Enter Amount to withdraw (integer): " << endl;
	int x;
	cin >> x;
	b->withdraw(x);
}
void deposit(account* b)
{
	cout << "Enter Amount to deposit (integer): " << endl;
	int x;
	cin >> x;
	b->deposit(x);
}
void check(account* b)
{
	cout  << "Your Balance is currently "
		<< b->checkBalance() << " dollars." << endl;
}
void standing(account* b)
{
	if(b->isOverdrawn())
	{
		cout << "Your Account is overdrawn. You are in poor standing."
			<< endl;
	}else
	{
		cout << "Your Account is in good standing." << endl;
	}
}

