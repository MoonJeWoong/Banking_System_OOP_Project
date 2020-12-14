#include "Account.h"
#include "BankingCommonDecl.h"

ACCOUNT_DATA::ACCOUNT_DATA()
{
    this->account_num = 0;
    this->name=NULL;
    this->cash=0;
}

ACCOUNT_DATA::ACCOUNT_DATA(int account_num, const char *name, int cash)
{
    this->account_num=account_num;
    this->cash=cash;
    this->name = new char[strlen(name)+1];
    strcpy(this->name, name);
}

ACCOUNT_DATA::ACCOUNT_DATA(const ACCOUNT_DATA &copy) : account_num(copy.account_num), cash(copy.cash)
{
    this->name = new char[strlen(copy.name)+1];
    strcpy(this->name, copy.name);
}

void ACCOUNT_DATA::DepositCash(int cash) {this->cash+=cash;}

void ACCOUNT_DATA::WithdrawCash(int cash) {this->cash-=cash;}

int ACCOUNT_DATA::ShowAccNum() const {return account_num;}

char* ACCOUNT_DATA::ShowName() const {return name;}

int ACCOUNT_DATA::ShowCash() const {return cash;}

ACCOUNT_DATA::~ACCOUNT_DATA()
{
    delete []name;
}