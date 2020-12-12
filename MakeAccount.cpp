#include <iostream>
#include "account.h"

using std::cin;
using std::cout;

void Account_Handler::MakeAccount()
{
    int ID, cash;
    char name[20];

    cout<<"\n[계좌개설]\n";

    cout<<"계좌ID: ";
    cin>>ID;

    cout<<"이 름: ";
    cin>>name;

    cout<<"입금액: ";
    cin>>cash;

    if(cash<0) {cout<<"입금액이 0보다 커야합니다.\n"; return;}

    acc_list[acc_count] = new ACCOUNT_DATA(ID, name, cash);
    acc_count++;

    cout<<"계좌개설 완료!\n";
}