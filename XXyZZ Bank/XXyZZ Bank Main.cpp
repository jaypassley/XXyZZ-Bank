/*
Group Members: Nashorn Passley
				Latona Levy
				Dane Lazarus
				Kerry-ann Berbick
*/


#include "XXyZZ BK Head.h"
#include <iostream>
#include <Conio.h>

using namespace std;

void printTransacionStatus(bool status) {
	if (status) {
		cout << "\n\tTransaction successful" << endl;
	}
	else {
		cout << "\n\tError : Transaction failed" << endl;
	}
}

int main()
{


	//instances of ATM_ACC
	Account a1;
	SavingAccount s2;
	ChequingAccount c3;

	double bal;
	double interest;

	char choice;

	while ((choice = a1.savORche()) != '3')
	{
		switch (choice)
		{
		case '1': // option 1 to select saving accont
			while ((choice = a1.menu()) != '4')
			{
				switch (choice)
				{
				case '1': // option (one) check balance
					cout << "\n\tEnter Initial Balance: $";
					cin >> bal;
					s2.setBalance(bal);
					s2.setInterestRate(0.05);
					s2.check();
					cout << "\n\tAmount in Savings Account after Initialization : $" << s2.getBalance() << endl;

				 interest = s2.calcinterest();
					cout << "\n\tInterest Gained by Savings Account: $" << interest << endl;

					cout << "\n\tAdding Interest to Savings Account Balance..." << endl;
					s2.deposit(interest);
					cout << "\n\t Total Amount in Savings Account after transaction : $" << s2.getBalance() << endl;
					system("pause");
					system("cls");

					break;

				case'2': // option (two) deposit into account
					double dep_a;
					cout << "\n\tEnter Deposit Amount: $";
					cin >> dep_a;
					cout << "\n\tDepositing $"<< dep_a<<" in savingsaccount" << endl;
					printTransacionStatus(s2.deposit(dep_a));
					cout << "\n\tAmount in Savings Account after transaction : $" << s2.getBalance() << endl;
					system("pause");
					system("cls");
					break;

				case'3': // option (three) withdraw from account
					double wit_a;
					cout << "\n\tEnter Withdrawl Amount : $";
					cin >> wit_a;
					cout << "\n\tWithdrawing $"<<wit_a<<" from savingsaccount" << endl;
					printTransacionStatus(s2.withdraw(wit_a));
					cout << "\n\tAmount in Savings Account after transaction : $" << s2.getBalance() << endl;
					break;

				case '4': // option (four) exit the program
					exit(0);
					break;

					// display message if user does not make valid choice
				default:
					cout << "\n\tincorrect choice" << endl;
					cout << "\tenter new choice" << endl;
					system("pause");
					system("cls");
					break;
				}
			}

			break;

		case'2': // option 2 to select chequing account
			while ((choice = a1.menu()) != '4')
			{
				switch (choice)
				{
				case '1': // option one-check balance
					cout << "\n\tEnter Initial Balance: $";
					cin >> bal;
					c3.setBalance(bal);
					c3.check();
					cout << "\n\tAmount in Chequing Account after Initialization : $" << c3.getBalance() << endl;
					system("pause");
					system("cls");
					break;

				case'2': // option two-deposit into account
					double dep_a;
					cout << "\n\tEnter Deposit Amount: $";
					cin >> dep_a;
					cout << "\n\tDepositing $" << dep_a << " in chequing account" << endl;
					printTransacionStatus(c3.deposit(dep_a));
					cout << "\n\tAmount in chequing Account after transaction : $" << c3.getBalance() << endl;
					system("pause");
					system("cls");
					break;

				case'3': // option three-withdraw from account
					c3.setTransactionFee(10.50);
					double wit_a;
					cout << "\n\tEnter Withdrawl Amount : $";
					cin >> wit_a;
					cout << "\n\tWithdrawing $" << wit_a << " from chequing account" << endl;
					printTransacionStatus(c3.withdraw(wit_a));
					cout << "\n\tAmount in chequing Account after transaction : $" << c3.getBalance() << endl;
					system("pause");
					system("cls");
					break;

				case '4': // option four- exit the program
					exit(0);
					break;

					// display message if user does not make valid choice
				default:
					cout << "\n\tincorrect choice" << endl;
					cout << "\tenter new choice" << endl;
					system("pause");
					system("cls");
					break;
				}
			}

			break;

		case '3': // option four- exit the program
			exit(0);
			break;

			// display message if user does not make valid choice
		default:
			cout << "\n\tincorrect choice" << endl;
			cout << "\tenter new choice" << endl;
			system("pause");
			system("cls");
	//		break;
		}
	}


	return 0;


}