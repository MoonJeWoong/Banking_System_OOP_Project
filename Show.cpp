#include "Show.h"
#include <iostream>

using std::cin;
using std::cout;

int ShowMenu()
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

void ShowAllAcc(ACCOUNT_DATA *arr, int acc_count)
{
    for(int i=0; i<acc_count; i++)
    {
        cout<<"\n계좌ID: "<<arr[i].account_num<<"\n";
        cout<<"이 름: "<<arr[i].name<<"\n";
        cout<<"잔 액: "<<arr[i].cash<<"\n";
    }
}