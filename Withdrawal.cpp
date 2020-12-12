#include <iostream>
#include "account.h"

using std::cin;
using std::cout;

// ACCOUNT_DATA 객체들을 값으로 가지는 배열을 인수로 받아야 함
void Account_Handler::Withdrawal()
{
    int with_id, cash, find=0;

    cout<<"\n[출  금]\n";
    
    cout<<"계좌ID: ";
    cin>>with_id;

    cout<<"출금액: ";
    cin>>cash;

    if(cash<0) {cout<<"금액이 0보다 커야합니다.\n"; return;}

    for(int i=0; i<acc_count; i++)
    {
        if(acc_list[i]->ShowAccNum() == with_id)
        {
            if(acc_list[i]->ShowCash()<cash) {cout<<"계좌에 잔액이 부족합니다.\n"; return;}

            acc_list[i]->WithdrawCash(cash);
            find = 1;
            cout<<"출금완료\n";
            break;
        }
    }

    if(find != 1)
    {
        cout<<"\n일치하는 계좌ID를 찾을 수 없습니다.\n";
    }

    // 인수로 받아온 배열에서 계좌ID가 존재하는지 확인하고 있으면 출금액 감소
    // 아니면 계좌정보없음 출력
}