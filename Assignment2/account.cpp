#include<iostream>
#include<stdio.h>
using namespace std;
class account 
{
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main(void)
{
	int openBalance;
	cout << "Enter the amount you want to start Archit account with? \n";
	cin >> openBalance;
	account archit(openBalance);
	int paisa;
	cout << "Enter the amount you want to add in Archit's account? \n";
	cin >> paisa;
	archit.Credit(paisa);
	cout <<archit.getBalance() << "\n";
	double paisa1 ;
	cout << "Enter the amount you want to remove from Archit's account? \n";
	cin >> paisa1;
	archit.Debit(paisa1);
	cout <<archit.getBalance() << "\n";
	cout << "Enter the amount you want to start Anushree account with? \n";
	cin >> openBalance;
	account anushree(openBalance);
	cout << "Enter the amount you want to add in Anushree's account? \n";
	cin >> paisa;
	anushree.Debit(paisa);
	cout <<anushree.getBalance() << "\n";
	cout << "Enter the amount you want to remove from Anushree's account? \n";
	cin >> paisa1;
	anushree.Debit(paisa1);
	cout <<anushree.getBalance() << "\n";
}
