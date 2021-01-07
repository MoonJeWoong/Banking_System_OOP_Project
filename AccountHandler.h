#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "Account.h"
#include "BoundCheckArray.h"
#include "String.h"

class Account_Handler
{
private:
    // BoundCheckArray<ACCOUNT_DATA*> acc_list(50);
    // 객체의 멤버 변수를 직접 초기화하는 표현에서 간단한 식은 허용이 되지만,
    // 멤버 변수가 객체인 경우 해당 객체의 디폴트 생성자 이외의 호출은 허용되어 있지 않다.
    BoundCheckArray<ACCOUNT_DATA*> acc_list;
    int acc_count;
public:
    Account_Handler();

    void MakeAccount();

    void Deposit();

    void Withdrawal();

    int ShowMenu();

    void ShowAllAcc();

    ~Account_Handler();
};
#endif