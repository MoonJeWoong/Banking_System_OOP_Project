#include <iostream>
#include "MakeAccount.h"

using std::cin;
using std::cout;

void MakeAccount(ACCOUNT_DATA *arr, int acc_count)
{
    cout<<"\n[계좌개설]\n";

    cout<<"계좌ID: ";
    cin>>arr[acc_count].account_num;

    cout<<"이 름: ";
    cin>>arr[acc_count].name;

    cout<<"입금액: ";
    cin>>arr[acc_count].cash;

    cout<<"계좌개설 완료!\n";
}