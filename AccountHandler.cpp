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

    cout<<endl<<"[계좌종류선택]"<<endl;
    cout<<"1.보통예금계좌 2.신용신뢰계좌"<<endl<<"선택: ";
    cin>>choice;

    if(cin.fail() == 1) //cin에러 시 1(참)을 리턴, 정수형 외의 값이 입력되는 경우
    {
        cin.clear();            //cin객체 내부의 fail플래그 초기화
        cin.ignore(100, '\n');  //cin객체의 버퍼내용에서 최대길이 / 종료문자에 이르기 까지의 내용들 무시(제거)
        choice = 0;
    }

    if(choice==NORMAL) // 보통예금계좌
    {
        cout<<endl<<"[보통예금계좌 개설]"<<endl;
        cout<<"계좌ID: ";
        cin>>ID;

        cout<<"이 름: ";
        cin>>name;

        cout<<"입금액: ";
        cin>>cash;

        cout<<"이자율: ";
        cin>>interest_rate;

        if(cash<0) {cout<<"입금액이 0보다 커야합니다.\n"; return;}

        acc_list[acc_count] = new NormalAccount(ID, name, cash, interest_rate);
        acc_count++;
    }
    else if(choice==CREDIT) // 신용신뢰계좌
    {
        cout<<endl<<"[신용신뢰계좌 개설]"<<endl;
        cout<<"계좌ID: ";
        cin>>ID;

        cout<<"이 름: ";
        cin>>name;

        cout<<"입금액: ";
        cin>>cash;
        if(cash<0) {cout<<"입금액이 0보다 커야합니다.\n"; return;}

        cout<<"이자율: ";
        cin>>interest_rate;

        cout<<"신용등급(1toA, 2toB, 3toC): ";
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
    else /* 1,2 이외의 정수값이 입력된 경우 */
    {
        cout<<"잘못된 입력값입니다."<<endl;
    }

    cout<<"계좌개설 완료!\n";
}

void Account_Handler::Deposit()
{
    int dep_id, cash, find=0;

    cout<<"\n[입  금]\n";
    
    cout<<"계좌ID: ";
    cin>>dep_id;

    cout<<"입금액: ";
    cin>>cash;

    if(cash<0) {cout<<"입금액이 0보다 커야합니다.\n"; return;}

    for(int i=0; i<acc_count; i++)
    {
        if(acc_list[i]->ShowAccNum() == dep_id)
        {
            acc_list[i]->DepositCash(cash);
            find = 1;
            cout<<"입금완료!\n";
            break;
        }
    }

    if(find != 1)
    {
        cout<<"\n일치하는 계좌ID를 찾을 수 없습니다.\n";
    }

    // 인수로 받아온 배열에서 계좌ID가 존재하는지 확인하고 있으면 입금액 추가
    // 아니면 계좌정보없음 출력
}

void Account_Handler::Withdrawal()
{
    int with_id, cash, find=0;

    cout<<"\n[출  금]\n";
    
    cout<<"계좌ID: ";
    cin>>with_id;

    cout<<"출금액: ";
    cin>>cash;

    if(cash<0) {cout<<"금액이 0보다 커야합니다.\n"; return;}

    for(int i=0; i<acc_count; i++)
    {
        if(acc_list[i]->ShowAccNum() == with_id)
        {
            if(acc_list[i]->ShowCash()<cash) {cout<<"계좌에 잔액이 부족합니다.\n"; return;}

            acc_list[i]->WithdrawCash(cash);
            find = 1;
            cout<<"출금완료\n";
            break;
        }
    }

    if(find != 1)
    {
        cout<<"\n일치하는 계좌ID를 찾을 수 없습니다.\n";
    }

    // 인수로 받아온 배열에서 계좌ID가 존재하는지 확인하고 있으면 출금액 감소
    // 아니면 계좌정보없음 출력
}

int Account_Handler::ShowMenu()
{
    int choice=0;

    cout<<"\n----Menu----\n";
    cout<<"1. 계좌개설\n";
    cout<<"2. 입금\n";
    cout<<"3. 출금\n";
    cout<<"4. 계좌정보 전체 출력\n";
    cout<<"5. 프로그램 종료\n";
    cout<<"선택: ";

    cin>>choice;
    cout<<"\n";

    if(cin.fail() == 1) //cin에러 시 1(참)을 리턴, 정수형 외의 값이 입력되는 경우
    {
        cin.clear();            //cin객체 내부의 fail플래그 초기화
        cin.ignore(100, '\n');  //cin객체의 버퍼내용에서 최대길이 / 종료문자에 이르기 까지의 내용들 무시(제거)
        choice = 0;
    }

    return choice;
}

void Account_Handler::ShowAllAcc()
{
    for(int i=0; i<acc_count; i++)
    {
        cout<<"\n계좌ID: "<<acc_list[i]->ShowAccNum()<<"\n";
        cout<<"이 름: "<<acc_list[i]->ShowName()<<"\n";
        cout<<"잔 액: "<<acc_list[i]->ShowCash()<<"\n";
    }
}

Account_Handler::~Account_Handler()
{
    for(int i=0; i<acc_count; i++)
    {
        delete acc_list[i];
    }
    
}