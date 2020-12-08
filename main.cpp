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
    ACCOUNT_DATA p[100];    // ���߿� ���� �޸� �Ҵ����� �ٲ㺸��!

    while(true)
    {
        choice = ShowMenu();
        
        switch(choice)
        {
            // ���°���
            case 1:
                MakeAccount(p, acc_count);
                acc_count++;
                continue;

            //�Ա�
            case 2:
                Deposit(p, acc_count);
                continue;

            //���
            case 3:
                Withdrawal(p, acc_count);
                continue;

            //�������� ��ü ���
            case 4:
                ShowAllAcc(p, acc_count);
                continue;

            //���α׷� ����
            case 5:
                cout<<"���α׷��� �����մϴ�.\n";
                return 0;
                break;

            default:
                cout<<"�������� �ٽ� ����ֽʽÿ�\n";
        }
    }

    return 0;
}