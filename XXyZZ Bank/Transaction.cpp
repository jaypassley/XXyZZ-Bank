/*
Group Members: Nashorn Passley
                Latona Levy

*/

#include "Transaction.h"

std::string Transaction::Report()
{
    std::string receipt;
    receipt += "\n\t   Account Type: ";
    receipt += acc_type;
    receipt += "\n\t   Transaction Type: ";
    receipt += tra_type;
    receipt += "\n\t   Amount: ";
    receipt += std::to_string(tra_amt);
    



    return receipt;

}
