#include <iostream>
#include "MakeAccount.h"
#include "Withdrawal.h"
#include "Deposit.h"
#include "Show.h"

using std::cout;
using std::cin;

int main(void){
    
    int choice;
    int acc_count = 0;
    ACCOUNT_DATA p[100];    // 나중에 동적 메모리 할당으로 바꿔보자!

    while(true)
    {
        choice = ShowMenu();
        
        switch(choice)
        {
            // 계좌개설
            case 1:
                MakeAccount(p, acc_count);
                acc_count++;
                continue;

            //입금
            case 2:
                Deposit(p, acc_count);
                continue;

            //출금
            case 3:
                Withdrawal(p, acc_count);
                continue;

            //계좌정보 전체 출력
            case 4:
                ShowAllAcc(p, acc_count);
                continue;

            //프로그램 종료
            case 5:
                cout<<"프로그램을 종료합니다.\n";
                return 0;
                break;

            default:
                cout<<"선택지를 다시 골라주십시오\n";
        }
    }

    return 0;
}