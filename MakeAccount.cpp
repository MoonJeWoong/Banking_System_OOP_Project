#include <iostream>
#include "account.h"

using std::cin;
using std::cout;

void Account_Handler::MakeAccount()
{
    int ID, cash;
    char name[20];

    cout<<"\n[���°���]\n";

    cout<<"����ID: ";
    cin>>ID;

    cout<<"�� ��: ";
    cin>>name;

    cout<<"�Աݾ�: ";
    cin>>cash;

    if(cash<0) {cout<<"�Աݾ��� 0���� Ŀ���մϴ�.\n"; return;}

    acc_list[acc_count] = new ACCOUNT_DATA(ID, name, cash);
    acc_count++;

    cout<<"���°��� �Ϸ�!\n";
}