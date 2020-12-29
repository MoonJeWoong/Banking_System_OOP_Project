#ifndef __NORMAL_ACC_H__
#define __NORMAL_ACC_H__

#include "account.h"
#include "String.h"

class NormalAccount : public ACCOUNT_DATA
{
private:
    int interest_rate;
public:
    NormalAccount(int account_num, String name, int cash, int interest_rate)
        : ACCOUNT_DATA(account_num, name, cash), interest_rate(interest_rate)
    { }
    virtual void DepositCash(int cash)
    {
        ACCOUNT_DATA::DepositCash(cash);
        ACCOUNT_DATA::DepositCash((int)(cash*(interest_rate/100.0)));
    }
};
#endif
