#include <iostream>
#include "Deposit.h"

using std::cout;
using std::cin;

// ACCOUNT_DATA 객체들을 값으로 가지는 배열을 인수로 받아야 함
void Deposit(ACCOUNT_DATA *arr[], int acc_count)
{
    int dep_id, cash, find=0;

    cout<<"\n[입  금]\n";
    
    cout<<"계좌ID: ";
    cin>>dep_id;

    cout<<"입금액: ";
    cin>>cash;

    for(int i=0; i<acc_count; i++)
    {
        if(arr[i]->ShowAccNum() == dep_id)
        {
            arr[i]->DepositCash(cash);
            find = 1;
            cout<<"입금완료!\n";
            break;
        }
    }

    if(find != 1)
    {
        cout<<"\n일치하는 계좌ID를 찾을 수 없습니다.\n";
    }

    // 인수로 받아온 배열에서 계좌ID가 존재하는지 확인하고 있으면 입금액 추가
    // 아니면 계좌정보없음 출력
}