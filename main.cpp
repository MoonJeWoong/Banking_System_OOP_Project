#include <iostream>
#include "account.h"

using std::cout;
using std::cin;

int main(void){

    enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};
    
    int choice;
    Account_Handler handler;

    while(true)
    {
        choice = handler.ShowMenu();
        
        switch(choice)
        {
            // 계좌개설
            case MAKE:
                handler.MakeAccount();
                continue;

            //입금
            case DEPOSIT:
                handler.Deposit();
                continue;

            //출금
            case WITHDRAW:
                handler.Withdrawal();
                continue;

            //계좌정보 전체 출력
            case INQUIRE:
                handler.ShowAllAcc();
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