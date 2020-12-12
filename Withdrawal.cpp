#include <iostream>
#include "account.h"

using std::cin;
using std::cout;

// ACCOUNT_DATA ��ü���� ������ ������ �迭�� �μ��� �޾ƾ� ��
void Account_Handler::Withdrawal()
{
    int with_id, cash, find=0;

    cout<<"\n[��  ��]\n";
    
    cout<<"����ID: ";
    cin>>with_id;

    cout<<"��ݾ�: ";
    cin>>cash;

    if(cash<0) {cout<<"�ݾ��� 0���� Ŀ���մϴ�.\n"; return;}

    for(int i=0; i<acc_count; i++)
    {
        if(acc_list[i]->ShowAccNum() == with_id)
        {
            if(acc_list[i]->ShowCash()<cash) {cout<<"���¿� �ܾ��� �����մϴ�.\n"; return;}

            acc_list[i]->WithdrawCash(cash);
            find = 1;
            cout<<"��ݿϷ�\n";
            break;
        }
    }

    if(find != 1)
    {
        cout<<"\n��ġ�ϴ� ����ID�� ã�� �� �����ϴ�.\n";
    }

    // �μ��� �޾ƿ� �迭���� ����ID�� �����ϴ��� Ȯ���ϰ� ������ ��ݾ� ����
    // �ƴϸ� ������������ ���
}