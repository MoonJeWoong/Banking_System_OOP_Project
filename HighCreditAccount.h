#ifndef __HIGH_CREDIT_ACC_H__
#define __HIGH_CREDIT_ACC_H__

#include "NormalAccount.h"
#include "String.h"

class HighCreditAccount : public NormalAccount
{
private:
    int credit_rate;
public:
    HighCreditAccount(int account_num, String name, int cash, int interest_rate, int credit_rate)
        :NormalAccount(account_num, name, cash, interest_rate), credit_rate(credit_rate)
    { }

    virtual void DepositCash(int cash)
    {
        NormalAccount::DepositCash(cash);
        ACCOUNT_DATA::DepositCash((int)(cash*(credit_rate/100.0)));
    }
};

#endif
