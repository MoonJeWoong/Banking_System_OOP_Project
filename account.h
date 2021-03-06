#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class ACCOUNT_DATA
{
private:
    int account_num;
    String name;
    int cash;

public:
    ACCOUNT_DATA();
    ACCOUNT_DATA(int account_num, String name, int cash);
    ACCOUNT_DATA(const ACCOUNT_DATA &copy);
    ACCOUNT_DATA& operator=(const ACCOUNT_DATA &obj);

    virtual void DepositCash(int cash);
    void WithdrawCash(int cash);
    int ShowAccNum() const;
    String ShowName() const;
    int ShowCash() const;
    // virtual ~ACCOUNT_DATA();
};

#endif