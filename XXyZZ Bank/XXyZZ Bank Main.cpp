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
		cout << "\nTransaction successful" << endl;
	}
	else {
		cout << "nError : Transaction failed" << endl;
	}
}

int main()
{


	//instances of ATM_ACC
	Account a1;
	//SavingAccount s2;
	//ChequingAccount c3;

	double bal;

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
				case '1': // option one-check balance
					cout << "\n Enter Initial Balance: $";
					cin >> bal;
					a1.setBalance(bal);
					a1.check();
					cout << "\n Your Balance is: $" << a1.getBalance() << "\n";
					//s2.setInterestrate(0.05);
					//s2.calcinterest();
					break;

				case'2': // option two-deposit into account

					cout << "Depositing 1000 in savingsaccount" << endl;
					printTransacionStatus(a1.deposit(1000));
					cout << "\nAmount in Savings Account after transaction :" << a1.getBalance() << endl;

					//a1.deposit();
					break;

				case'3': // option three-withdraw from account
					//a1.withdraw();
					break;

				case '4': // option four- exit the program
					exit(0);
					break;

					// display message if user does not make valid choice
				default:
					cout << "incorrect choice" << endl;
					cout << "enter new choice" << endl;
					system("pause");
					system("cls");
					break;
				}
			}

			break;

	//	case'2': // option 2 to select chequing account
	//		while ((choice = a1.menu()) != '4')
	//		{
	//			switch (choice)
	//			{
	//			case '1': // option one-check balance
	//				a1.getBalance();
	//				break;

	//			case'2': // option two-deposit into account
	//				a1.deposit();
	//				break;

	//			case'3': // option three-withdraw from account
	//				c3.setTransactionFee(10.50);
	//				a1.withdraw();
	//				break;

	//			case '4': // option four- exit the program
	//				exit(0);
	//				break;

	//				// display message if user does not make valid choice
	//			default:
	//				cout << "incorrect choice" << endl;
	//				cout << "enter new choice" << endl;
	//				system("pause");
	//				system("cls");
	//				break;
	//			}
	//		}

	//		break;

	//	case '3': // option four- exit the program
	//		exit(0);
	//		break;

	//		// display message if user does not make valid choice
	//	default:
	//		cout << "incorrect choice" << endl;
	//		cout << "enter new choice" << endl;
	//		system("pause");
	//		system("cls");
	//		break;
		}
	}


	return 0;


}