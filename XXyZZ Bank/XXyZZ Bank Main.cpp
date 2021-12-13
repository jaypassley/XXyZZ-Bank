/*
Group Members: Nashorn Passley
				Latona Levy

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

	// objects to pass to transaction
	string type_acc;
	string type_tra;
	double amt_tran;


	


	char choice;

	while ((choice = a1.savORche()) != '3')
	{
		switch (choice)
		{
		case '1': // option 1 to select saving accont
			type_acc = "Savings";
			while ((choice = a1.menu()) != '4')
			{
				switch (choice)
				{
				case '1': // option (one) check balance
					type_tra = "Check Balance";
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

					amt_tran = s2.getBalance();
					a1.AssignReceipt(type_acc, type_tra, amt_tran);

					for (auto t : a1.report()) {
						cout << t << "\n";
					}

					system("pause");
					system("cls");


					break;

				case'2': // option (two) deposit into account
					type_tra = "Deposit";
					double dep_a;
					cout << "\n\tEnter Deposit Amount: $";
					cin >> dep_a;
					cout << "\n\tDepositing $"<< dep_a<<" in savingsaccount" << endl;
					printTransacionStatus(s2.deposit(dep_a));
					cout << "\n\tAmount in Savings Account after transaction : $" << s2.getBalance() << endl;

					amt_tran = dep_a;

					a1.AssignReceipt(type_acc, type_tra, amt_tran);

					for (auto t : a1.report()) {
						cout << t << "\n";
					}

					system("pause");
					system("cls");
					break;

				case'3': // option (three) withdraw from account
					type_tra = "Withdraw";
					double wit_a;
					cout << "\n\tEnter Withdrawl Amount : $";
					cin >> wit_a;
					cout << "\n\tWithdrawing $"<<wit_a<<" from savingsaccount" << endl;
					printTransacionStatus(s2.withdraw(wit_a));
					cout << "\n\tAmount in Savings Account after transaction : $" << s2.getBalance() << endl;

					amt_tran = wit_a;

					a1.AssignReceipt(type_acc, type_tra, amt_tran);

					for (auto t : a1.report()) {
						cout << t << "\n";
					}

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
			type_acc = "Chequing";
			while ((choice = a1.menu()) != '4')
			{
				switch (choice)
				{
				case '1': // option one-check balance
					type_tra = "Check Balance";
					cout << "\n\tEnter Initial Balance: $";
					cin >> bal;
					c3.setBalance(bal);
					c3.check();
					cout << "\n\tAmount in Chequing Account after Initialization : $" << c3.getBalance() << endl;
		 

					amt_tran = c3.getBalance();
					a1.AssignReceipt(type_acc, type_tra, amt_tran);

					for (auto t : a1.report()) {
						cout << t << "\n";
					}

					system("pause");
					system("cls");
					break;

				case'2': // option two-deposit into account
					type_tra = "Deposit";
					double dep_a;
					cout << "\n\tEnter Deposit Amount: $";
					cin >> dep_a;
					cout << "\n\tDepositing $" << dep_a << " in chequing account" << endl;
					printTransacionStatus(c3.deposit(dep_a));
					cout << "\n\tAmount in chequing Account after transaction : $" << c3.getBalance() << endl;

					amt_tran = dep_a;

					a1.AssignReceipt(type_acc, type_tra, amt_tran);

					for (auto t : a1.report()) {
						cout << t << "\n";
					}

					system("pause");
					system("cls");
					break;

				case'3': // option three-withdraw from account
					type_tra = "Withdraw";
					c3.setTransactionFee(10.50);
					double wit_a;
					cout << "\n\tEnter Withdrawl Amount : $";
					cin >> wit_a;
					cout << "\n\tWithdrawing $" << wit_a << " from chequing account" << endl;
					printTransacionStatus(c3.withdraw(wit_a));
					cout << "\n\tAmount in chequing Account after transaction : $" << c3.getBalance() << endl;

					amt_tran = wit_a;

					a1.AssignReceipt(type_acc, type_tra, amt_tran);

					for (auto t : a1.report()) {
						cout << t << "\n";
					}

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
			break;
		}
	}


	return 0;


}