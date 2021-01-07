#include "Account.h"
#include "BankingCommonDecl.h"

ACCOUNT_DATA::ACCOUNT_DATA()
{
    this->account_num = 0;
    this->name=NULL;
    this->cash=0;
}

ACCOUNT_DATA::ACCOUNT_DATA(int account_num, String name, int cash)
{
    this->account_num=account_num;
    this->cash=cash;
    this->name = name;
}

ACCOUNT_DATA::ACCOUNT_DATA(const ACCOUNT_DATA &copy) : account_num(copy.account_num), cash(copy.cash)
{
    this->name = name;
}

ACCOUNT_DATA& ACCOUNT_DATA::operator=(const ACCOUNT_DATA &obj)
{
    account_num = obj.account_num;
    cash = obj.cash;
    name = obj.name;
    return *this;
}

void ACCOUNT_DATA::DepositCash(int cash) {this->cash+=cash;}

void ACCOUNT_DATA::WithdrawCash(int cash) {this->cash-=cash;}

int ACCOUNT_DATA::ShowAccNum() const {return account_num;}

String ACCOUNT_DATA::ShowName() const {return name;}

int ACCOUNT_DATA::ShowCash() const {return cash;}

// ACCOUNT_DATA::~ACCOUNT_DATA()
// {
//     delete []name;
// }