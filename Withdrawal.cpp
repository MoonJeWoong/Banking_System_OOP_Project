#include <iostream>
#include "Withdrawal.h"

using std::cin;
using std::cout;

// ACCOUNT_DATA 객체들을 값으로 가지는 배열을 인수로 받아야 함
void Withdrawal(ACCOUNT_DATA *arr, int acc_count)
{
    int with_id, cash, find=0;

    cout<<"\n[출  금]\n";
    
    cout<<"계좌ID: ";
    cin>>with_id;

    cout<<"출금액: ";
    cin>>cash;

    for(int i=0; i<acc_count; i++)
    {
        if(arr[i].account_num == with_id)
        {
            arr[i].cash -= with_id;
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