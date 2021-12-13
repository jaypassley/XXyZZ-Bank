#pragma once

/*
Group Members: Nashorn Passley
                Latona Levy

*/

#include <string>
#include <vector>
#include "Transaction.h"

class Account
{
protected:
    double balance;
    std::vector<Transaction> log;
public:
    Account();
    Account(double init_balance);
    void setBalance(double b);
    double getBalance();
    bool deposit(double amount);
    bool withdraw(double amount);

    void AssignReceipt(std::string acc_type, std::string tra_type, double tra_amt);
    std::vector<std::string>report();



    int check();
    int menu();
    int savORche();
    void start();
};

class SavingAccount : public Account {
private:
    float interestRate;
public:
    SavingAccount();
    SavingAccount(double init_balance, float rate);
    void setInterestRate(float ir);
    float getInterestRate();
    double calcinterest();
};


class ChequingAccount : public Account {
private:
    double transactionFee;
public:
    ChequingAccount();
    ChequingAccount(double init_balance, double fee);
    void setTransactionFee(double tf);
    double getTransactionFee();
    bool withdraw(double amount);
};


