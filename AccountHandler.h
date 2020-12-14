#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "Account.h"

class Account_Handler
{
private:
    ACCOUNT_DATA* acc_list[50];
    int acc_count;
public:
    Account_Handler();

    void MakeAccount();

    void Deposit();

    void Withdrawal();

    int ShowMenu();

    void ShowAllAcc();

    ~Account_Handler();
};
#endif