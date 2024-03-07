#include <iostream>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include  <bits/stdc++.h>
using namespace std;

class Bank {
	string name, address;
	char acc_type;
	float balance;

public:
	void open_account();
	void deposit_money();
	void withdraw_money();
	void display_account();
};

void Bank::open_account() {
    cout << endl << "Welcome to our bank, Please enter your full name: " << endl;
    cin.ignore();
    getline(cin, name);
    cout << endl << "Now, please enter your permanent address: " << endl;
    getline(cin, address);
    cout << "Please select the account type to open saving(S) or Current(C): ";
	cin >> acc_type;
	cout << "Enter How much money you want to deposit: ";
    cin >> balance;
	cout << "Congratulations, Your account Opened Successfully !";
}

void Bank::deposit_money() {
	int Amount;
	cout << "Enter the amount you want to deposit: ";
    cin >> Amount;
	balance += Amount;
	cout << "Available Balance: " << balance;
}

void Bank::display_account() {
    cout << "Details of your bank account: " << endl;
	cout << "Name: " << name << endl
		<< "Address: " << address << endl
		<< "Type: " << acc_type << endl
		<< "Balance: " << balance << endl
		<< endl;
}

void Bank::withdraw_money() {
	float amount;
	cout << "Enter how much money you want to withdraw: ";
    cin >> amount;
	balance -= amount;
	cout << "Available balance: " << balance << endl;
}

int main() {
	int choice;
    char isContinue = 'N';
	Bank customer;

    do {
        cout << "Welcome to our bank management system !" << endl
             << "Select one of the option below:"
             << endl
             << "1) Open Account"
             << endl
            << "2) Deposit the Money"
            << endl
            << "3) Withdraw the Money"
            << endl
            << "4) Display Account Information"
            << endl;
        cin >> choice;

        switch(choice) {
            case 1:
                customer.open_account();
                break;
            case 2:
                customer.deposit_money();
                break;
            case 3:
                customer.withdraw_money();
                break;
            case 4:
                customer.display_account();
                break;
            default:
                cout << "Error: Please select a valid option" << endl;
        }
        cout << "Press 'Y' to continue: ";
        cin >> isContinue;
    } while(isContinue == 'Y');

	return 0;
}
