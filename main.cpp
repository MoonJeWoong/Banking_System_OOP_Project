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
            // ���°���
            case MAKE:
                handler.MakeAccount();
                continue;

            //�Ա�
            case DEPOSIT:
                handler.Deposit();
                continue;

            //���
            case WITHDRAW:
                handler.Withdrawal();
                continue;

            //�������� ��ü ���
            case INQUIRE:
                handler.ShowAllAcc();
                continue;

            //���α׷� ����
            case EXIT:
                cout<<"���α׷��� �����մϴ�.\n";
                return 0;
                break;

            default:
                cout<<"�������� �ٽ� ����ֽʽÿ�\n";
        }
    }

    return 0;
}