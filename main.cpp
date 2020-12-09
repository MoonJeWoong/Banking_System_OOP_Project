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
    ACCOUNT_DATA* p[10];

    while(true)
    {
        choice = ShowMenu();
        
        switch(choice)
        {
            // 계좌개설
            case MAKE:
                MakeAccount(p, acc_count);
                acc_count++;
                continue;

            //입금
            case DEPOSIT:
                Deposit(p, acc_count);
                continue;

            //출금
            case WITHDRAW:
                Withdrawal(p, acc_count);
                continue;

            //계좌정보 전체 출력
            case INQUIRE:
                ShowAllAcc(p, acc_count);
                continue;

            //프로그램 종료
            case EXIT:
                cout<<"프로그램을 종료합니다.\n";
                return 0;
                break;

            default:
                cout<<"선택지를 다시 골라주십시오\n";
        }
    }

    return 0;
}