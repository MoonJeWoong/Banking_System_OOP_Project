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
            // ���°���
            case MAKE:
                MakeAccount(p, acc_count);
                acc_count++;
                continue;

            //�Ա�
            case DEPOSIT:
                Deposit(p, acc_count);
                continue;

            //���
            case WITHDRAW:
                Withdrawal(p, acc_count);
                continue;

            //�������� ��ü ���
            case INQUIRE:
                ShowAllAcc(p, acc_count);
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