#include "Show.h"
#include <iostream>

using std::cin;
using std::cout;

int ShowMenu()
{
    int choice=0;

    cout<<"\n----Menu----\n";
    cout<<"1. ���°���\n";
    cout<<"2. �Ա�\n";
    cout<<"3. ���\n";
    cout<<"4. �������� ��ü ���\n";
    cout<<"5. ���α׷� ����\n";
    cout<<"����: ";

    cin>>choice;
    cout<<"\n";

    if(cin.fail() == 1) //cin���� �� 1(��)�� ����, ������ ���� ���� �ԷµǴ� ���
    {
        cin.clear();            //cin��ü ������ fail�÷��� �ʱ�ȭ
        cin.ignore(100, '\n');  //cin��ü�� ���۳��뿡�� �ִ���� / ���Ṯ�ڿ� �̸��� ������ ����� ����(����)
        choice = 0;
    }

    return choice;
}

void ShowAllAcc(ACCOUNT_DATA *arr, int acc_count)
{
    for(int i=0; i<acc_count; i++)
    {
        cout<<"\n����ID: "<<arr[i].account_num<<"\n";
        cout<<"�� ��: "<<arr[i].name<<"\n";
        cout<<"�� ��: "<<arr[i].cash<<"\n";
    }
}