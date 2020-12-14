#include "AccountHandler.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "BankingCommonDecl.h"

using std::cin;
using std::cout;
using std::endl;

Account_Handler::Account_Handler() : acc_count(0) { }

void Account_Handler::MakeAccount()
{
    int ID, cash, interest_rate, credit_rate, choice=0;
    char name[20];

    cout<<endl<<"[������������]"<<endl;
    cout<<"1.���뿹�ݰ��� 2.�ſ�ŷڰ���"<<endl<<"����: ";
    cin>>choice;

    if(cin.fail() == 1) //cin���� �� 1(��)�� ����, ������ ���� ���� �ԷµǴ� ���
    {
        cin.clear();            //cin��ü ������ fail�÷��� �ʱ�ȭ
        cin.ignore(100, '\n');  //cin��ü�� ���۳��뿡�� �ִ���� / ���Ṯ�ڿ� �̸��� ������ ����� ����(����)
        choice = 0;
    }

    if(choice==NORMAL) // ���뿹�ݰ���
    {
        cout<<endl<<"[���뿹�ݰ��� ����]"<<endl;
        cout<<"����ID: ";
        cin>>ID;

        cout<<"�� ��: ";
        cin>>name;

        cout<<"�Աݾ�: ";
        cin>>cash;

        cout<<"������: ";
        cin>>interest_rate;

        if(cash<0) {cout<<"�Աݾ��� 0���� Ŀ���մϴ�.\n"; return;}

        acc_list[acc_count] = new NormalAccount(ID, name, cash, interest_rate);
        acc_count++;
    }
    else if(choice==CREDIT) // �ſ�ŷڰ���
    {
        cout<<endl<<"[�ſ�ŷڰ��� ����]"<<endl;
        cout<<"����ID: ";
        cin>>ID;

        cout<<"�� ��: ";
        cin>>name;

        cout<<"�Աݾ�: ";
        cin>>cash;
        if(cash<0) {cout<<"�Աݾ��� 0���� Ŀ���մϴ�.\n"; return;}

        cout<<"������: ";
        cin>>interest_rate;

        cout<<"�ſ���(1toA, 2toB, 3toC): ";
        cin>>credit_rate;

        switch(credit_rate)
        {
            case 1:
                credit_rate = CreditRate::Crd_A;
                break;
            case 2:
                credit_rate = CreditRate::Crd_B;
                break;
            case 3:
                credit_rate = CreditRate::Crd_C;
                break;
            default:
                break;
        }

        acc_list[acc_count] = new HighCreditAccount(ID, name, cash, interest_rate, credit_rate);
        acc_count++;
    }
    else /* 1,2 �̿��� �������� �Էµ� ��� */
    {
        cout<<"�߸��� �Է°��Դϴ�."<<endl;
    }

    cout<<"���°��� �Ϸ�!\n";
}

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

int Account_Handler::ShowMenu()
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

void Account_Handler::ShowAllAcc()
{
    for(int i=0; i<acc_count; i++)
    {
        cout<<"\n����ID: "<<acc_list[i]->ShowAccNum()<<"\n";
        cout<<"�� ��: "<<acc_list[i]->ShowName()<<"\n";
        cout<<"�� ��: "<<acc_list[i]->ShowCash()<<"\n";
    }
}

Account_Handler::~Account_Handler()
{
    for(int i=0; i<acc_count; i++)
    {
        delete acc_list[i];
    }
    
}