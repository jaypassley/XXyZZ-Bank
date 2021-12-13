/*
Group Members: Nashorn Passley
				Latona Levy

*/

#pragma once
#include <string>
class Transaction
{
private:
	std::string acc_type;
	std::string tra_type;
	double tra_amt;
public:
	Transaction(std::string acc_t, std::string tra_t, double tra_a) : acc_type(acc_t), tra_type(tra_t), tra_amt(tra_a){};
	std::string Report();
};

