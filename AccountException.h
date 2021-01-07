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
        cout<<"���� : ���� ���ݵǾ� �ִ� �ݾ�("<<balance<<")�� �ʰ��Ͽ� ������ �� �����ϴ�. �ٽ� ������ �ֽʽÿ�."<<endl<<endl;
    }
    
};

class InputZeroException
{
public:
    void ShowException()
    {
        cout<<"���� : 0�� �̸��� �ݾ����� ������� �����Ͻ� �� �����ϴ�. �ٽ� �Է��� �ֽʽÿ�"<<endl<<endl;
    }    
};


#endif