#include <iostream>
#include "MakeAccount.h"

using std::cin;
using std::cout;

void MakeAccount(ACCOUNT_DATA* arr[], int acc_count)
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

    arr[acc_count] = new ACCOUNT_DATA(ID, name, cash);

    cout<<"���°��� �Ϸ�!\n";
}