#include <iostream>
#include "Deposit.h"

using std::cout;
using std::cin;

// ACCOUNT_DATA ��ü���� ������ ������ �迭�� �μ��� �޾ƾ� ��
void Deposit(ACCOUNT_DATA *arr[], int acc_count)
{
    int dep_id, cash, find=0;

    cout<<"\n[��  ��]\n";
    
    cout<<"����ID: ";
    cin>>dep_id;

    cout<<"�Աݾ�: ";
    cin>>cash;

    for(int i=0; i<acc_count; i++)
    {
        if(arr[i]->ShowAccNum() == dep_id)
        {
            arr[i]->DepositCash(cash);
            find = 1;
            cout<<"�ԱݿϷ�!\n";
            break;
        }
    }

    if(find != 1)
    {
        cout<<"\n��ġ�ϴ� ����ID�� ã�� �� �����ϴ�.\n";
    }

    // �μ��� �޾ƿ� �迭���� ����ID�� �����ϴ��� Ȯ���ϰ� ������ �Աݾ� �߰�
    // �ƴϸ� ������������ ���
}