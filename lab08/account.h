#ifndef _ACCOUNT_H_ //Ensure file is not repeated included
#define _ACCOUNT_H_
//Mark Boady
//CS265 - Lab 8

//Simple Class for a Bank Account
class account
{
	private:
		int balance;
	public:
		//Constructor: Make Account with Balance 0
		account();
		//Destructor: Print out Final Balance when Object Deleted
		~account();
		//checkBalance: Return the current balance
		int checkBalance();
		//Withdraw: Take Money out of the account
		void withdraw(int x);
		//Deposit: Insert Money into account
		void deposit(int x);
		//isOverdrawn: An account is overdrawn if it's balance is negative.
		//Returns True/False
		bool isOverdrawn();
};

#endif//end if check for repeated include