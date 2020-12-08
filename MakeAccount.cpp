#include <iostream>
#include "MakeAccount.h"

using std::cin;
using std::cout;

void MakeAccount(ACCOUNT_DATA* arr[], int acc_count)
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

    arr[acc_count] = new ACCOUNT_DATA(ID, name, cash);

    cout<<"계좌개설 완료!\n";
}