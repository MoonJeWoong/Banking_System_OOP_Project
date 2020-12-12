#include <iostream>
#include "account.h"

using std::cout;
using std::cin;

// ACCOUNT_DATA 객체들을 값으로 가지는 배열을 인수로 받아야 함
void Account_Handler::Deposit()
{
    int dep_id, cash, find=0;

    cout<<"\n[입  금]\n";
    
    cout<<"계좌ID: ";
    cin>>dep_id;

    cout<<"입금액: ";
    cin>>cash;

    if(cash<0) {cout<<"입금액이 0보다 커야합니다.\n"; return;}

    for(int i=0; i<acc_count; i++)
    {
        if(acc_list[i]->ShowAccNum() == dep_id)
        {
            acc_list[i]->DepositCash(cash);
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