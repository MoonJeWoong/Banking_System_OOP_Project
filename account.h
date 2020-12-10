#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <cstring>

class ACCOUNT_DATA
{
private:
    int account_num;
    char *name;
    int cash;

public:
    ACCOUNT_DATA()
    {
        this->account_num = 0;
        this->name=NULL;
        this->cash=0;
    }

    ACCOUNT_DATA(int account_num, char *name, int cash)
    {
        this->account_num=account_num;
        this->cash=cash;
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    ACCOUNT_DATA(const ACCOUNT_DATA &copy) : account_num(copy.account_num), cash(copy.cash)
    {
        this->name = new char[strlen(copy.name)+1];
        strcpy(this->name, copy.name);
    }

    void DepositCash(int cash) {this->cash+=cash;}

    void WithdrawCash(int cash) {this->cash-=cash;}

    int ShowAccNum() const {return account_num;}

    char* ShowName() const {return name;}

    int ShowCash() const {return cash;}

    ~ACCOUNT_DATA()
    {
        delete []name;
    }
    
};

#endif