#pragma once

/*
Group Members: Nashorn Passley
                Latona Levy

*/

#include <string>

class Account
{
protected:
    double balance;
    void log();
public:
    Account();
    Account(double init_balance);
    void setBalance(double b);
    double getBalance();
    bool deposit(double amount);
    bool withdraw(double amount);
    void report();

    int check();
    int menu();
    int savORche();
    void start();
};

//class SavingAccount : public Account {
//    float interestRate;
//public:
//    SavingAccount();
//    SavingAccount(double init_balance, float rate);
//    double calcinterest();
//    void setInterestrate(float ra);
//    float getInterestrate();
//
//
//};


//class ChequingAccount : public Account {
//    double transactionFee;
//public:
//    ChequingAccount();
//    ChequingAccount(double init_balance, double fee);
//    void withdraw();
//    void setTransactionFee(double fe);
//    double getTransactionFee();
//};
