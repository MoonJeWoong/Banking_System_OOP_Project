#include <iostream>
#include "Withdrawal.h"

using std::cin;
using std::cout;

// ACCOUNT_DATA ��ü���� ������ ������ �迭�� �μ��� �޾ƾ� ��
void Withdrawal(ACCOUNT_DATA *arr, int acc_count)
{
    int with_id, cash, find=0;

    cout<<"\n[��  ��]\n";
    
    cout<<"����ID: ";
    cin>>with_id;

    cout<<"��ݾ�: ";
    cin>>cash;

    for(int i=0; i<acc_count; i++)
    {
        if(arr[i].account_num == with_id)
        {
            arr[i].cash -= with_id;
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