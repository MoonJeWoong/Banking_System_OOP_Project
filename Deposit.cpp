#include <iostream>
#include "account.h"

using std::cout;
using std::cin;

// ACCOUNT_DATA ��ü���� ������ ������ �迭�� �μ��� �޾ƾ� ��
void Account_Handler::Deposit()
{
    int dep_id, cash, find=0;

    cout<<"\n[��  ��]\n";
    
    cout<<"����ID: ";
    cin>>dep_id;

    cout<<"�Աݾ�: ";
    cin>>cash;

    if(cash<0) {cout<<"�Աݾ��� 0���� Ŀ���մϴ�.\n"; return;}

    for(int i=0; i<acc_count; i++)
    {
        if(acc_list[i]->ShowAccNum() == dep_id)
        {
            acc_list[i]->DepositCash(cash);
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