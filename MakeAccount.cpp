#include <iostream>
#include "MakeAccount.h"

using std::cin;
using std::cout;

void MakeAccount(ACCOUNT_DATA *arr, int acc_count)
{
    cout<<"\n[���°���]\n";

    cout<<"����ID: ";
    cin>>arr[acc_count].account_num;

    cout<<"�� ��: ";
    cin>>arr[acc_count].name;

    cout<<"�Աݾ�: ";
    cin>>arr[acc_count].cash;

    cout<<"���°��� �Ϸ�!\n";
}