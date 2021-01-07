#ifndef __ACCOUNT_EXPN_H__
#define __ACCOUNT_EXPN_H__

#include <iostream>
using std::cout;
using std::endl;

class WithdrawException
{
private:
    int balance;
public:
    WithdrawException(int money) : balance(money) { }
    void ShowException()
    {
        cout<<"오류 : 현재 예금되어 있는 금액("<<balance<<")을 초과하여 인출할 수 없습니다. 다시 진행해 주십시오."<<endl<<endl;
    }
    
};

class InputZeroException
{
public:
    void ShowException()
    {
        cout<<"오류 : 0원 미만의 금액으로 입출금을 진행하실 수 없습니다. 다시 입력해 주십시오"<<endl<<endl;
    }    
};


#endif