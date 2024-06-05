// modelBankAccount.cpp : This file contains the 'main' function. Program execution begins and ends there.
// You are a freelance programmer tasked with creating the backend for a banking application. Specifically, you need to model a bank account in C++. You will be handing off your code to api developers who are requiring the following functionality:
//
//The ability to create a bank account with a name(string), account number(int), and balance(double).
//The ability to deposit money into a bank account.
//The ability to withdraw money from a bank account.
//The ability to check the balance of a bank account.
//Create a class called BankAccount that models a bank account and implements the above functionality.
//

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;


class BankAccount
{
public:
	
	BankAccount()
	{
		name = "JohnDoe";
		accountNum = 12345;
		balance = 9999.99;
	}

	~BankAccount()
	{
	}

	BankAccount(string n, int acct, double bal) {

		this->name = n;
		this->accountNum = acct;
		this->balance = bal;

	}


	string getName() {
		return name;
	}


	int getAcct() {
		return accountNum;
	}


	double getBal() {
		return balance;
	}


	void printbank_information() {
		cout << endl << name << endl << accountNum << endl << balance << endl;

	}


	void deposit(double amount) {
		balance += amount;
		cout << endl << "New amount is : " << balance << endl;

	}


	void withdraw(double amount) {
		balance -= amount;
	}


	void set_CurrentBalance(double amount) {
		balance = amount;
	}

private:
	string name;
	int accountNum;
	double balance;

};






int main()
{
	BankAccount testbank1;
	BankAccount trewallet = BankAccount("TRE", 12849, 70000000);
	testbank1.printbank_information();
	trewallet.deposit(300);
	trewallet.printbank_information();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
