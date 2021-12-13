/*
Group Members: Nashorn Passley
				Latona Levy

*/

#include "XXyZZ BK Head.h"
#include <iostream>
#include <Conio.h>
#include "Transaction.h"

using namespace std;



Account::Account()
{
	balance = 0;
}

Account::Account(double init_balance) {
	balance=init_balance;
}

void Account::setBalance(double b)
{
	balance = b;

}

double Account::getBalance() // function to display current balance in account
{

	return balance;
}

bool Account::deposit(double amount) // function to deposit to account
{
	if (amount < 0) {
		return false;
	}
	balance += amount;
	return true;

}

bool Account::withdraw(double amount) // functiom to withdraw from account balance
{
	if (amount <= 0 || amount > balance) {
		return false;
	}
	balance -= amount;
	return true;
}

int Account::check() // function to check if initial balance is valid
{
	using namespace std;


	if (balance < 1000) {
		
		cout << "\n Your Initial Balance is Invalid! " << endl;
		exit(0);
	}
	else
		if (balance >= 1000) {
			balance = balance;
		}
	return 0;
}

int Account::menu() // 2nd mwnu to select task to be done
{
	char Z;

	cout << "\n\t\t MENU" << endl;
	cout << "\t Please Select an Option " << endl;
	cout << "\t 1. Check Balance" << endl;
	cout << "\t 2. Deposit " << endl;
	cout << "\t 3. Withdraw " << endl;
	cout << "\t 4. Exit \n" << endl;

	cout << "\n\t Choice: ";
	cin >> Z;

	return Z;
}

int Account::savORche() // 1st menu to choose account type
{
	char q;

	start();

	cout << "\n\t Please Select Account Type " << endl;
	cout << "\n\t 1. Savings Account" << endl;
	cout << "\n\t 2. Chequing Account " << endl;
	cout << "\n\t 3. Cancel " << endl;

	cout << "\n\t Choice: ";
	cin >> q;

	return q;

}



SavingAccount::SavingAccount()
{
	interestRate = 0;
}

SavingAccount::SavingAccount(double init_balance, float rate):Account(init_balance)
{
	if (rate < (float)0) {
		rate = 0;
	}
	interestRate = rate;
}

void SavingAccount::setInterestRate(float ir)
{
	interestRate = ir;
}

float SavingAccount::getInterestRate()
{
	return interestRate;
}


double SavingAccount::calcinterest()
{
	return interestRate * getBalance();
}



ChequingAccount::ChequingAccount()
{
	transactionFee = 0;
}

ChequingAccount::ChequingAccount(double init_balance, double fee):Account(init_balance)
{
	if (fee < (double)0) {
		fee = 0;
	}
	transactionFee = fee;
}
void ChequingAccount::setTransactionFee(double tf)
{
	transactionFee = tf;
}
double ChequingAccount::getTransactionFee()
{
	return transactionFee;
}
bool ChequingAccount::withdraw(double amount)
{
	if (amount <= 0 || amount > balance) {
		return false;
	}
	balance -= amount;
	balance -= transactionFee;
	return true;
}



void Account::AssignReceipt(std::string acc_type, std::string tra_type, double tra_amt)
{
	log.push_back(Transaction(acc_type, tra_type,tra_amt));
}

std::vector<std::string> Account::report()
{
	std::vector<std::string> receipt;
	receipt.push_back("\n\n\t --Transaction Receipt-- ");
	

	for (auto ss : log) {
		receipt.push_back(ss.Report());

		receipt.push_back("\t------------------------------");
	}


	return receipt;
}






const int PASSLEN = 4; // constraint that keeps the pin length at max 4 charaters 

string passget();

void Account::start() // function to display the enter pin menu
{

	string password;
	string password2;
	cout << "\n\n";
	cout << "\tWelcome to Passley Art ABM";
	cout << "\n\n";
	cout << "\tEnter Your Pin: ";
	password = passget();
	system("cls");


	cout << "\n\n";
	cout << "\tPassley Art ABM";
	cout << "\n\n";
	cout << "\tPlease Re-Enter Your Pin: ";
	password2 = passget();



	if (password2 == password) {
		cout << "\n\n";
		cout << "\tPin Accepted";
		cout << "\n\n\n";
		system("pause");
		system("cls");

	}
	else {
		cout << "\n\n";
		cout << "\tPin Denied Try Again !!! \n\n";
		system("pause");
		system("cls");
		start();
	}
}  // End of Start Function




string passget() // function to get pin while maskin the pin input
{
	char password[PASSLEN], letter;
	int loop;
	int len;
	string password2;

	//Get pin and replace characters with ***----
	loop = 0;
	while (loop != PASSLEN)
	{
		password[loop] = '\0';
		loop++;
	}
	loop = 0;
	len = 0;
	letter = '\0';
	while (letter != '\r')
	{
		letter = _getch();
		if (letter == '\b' && password[0] == '\0')
		{
			loop = 0;
			len = 0;
		}
		else
		{
			if (letter == '\b' && password[0] != '\0')
			{
				cout << "\b";
				cout << " ";
				cout << "\b";
				loop--;
				password[loop] = '\0';
				len--;
			}
			else
			{
				if (isprint(letter) != 0 && loop < PASSLEN)
				{
					password[loop] = tolower(letter);
					cout << "*";
				}
				loop++;
				if (loop <= PASSLEN)
					len++;
			}
		}
	}

	//Convert Pin from character array to string
	loop = 0;
	len = len;
	password2 = "";
	while (loop != len)
	{
		password2 = password2 + password[loop];
		loop++;
	}

	return password2;
} // End of Function to get pin



