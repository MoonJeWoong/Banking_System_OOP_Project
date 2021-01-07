#ifndef __ACCOUNT_HANDLER_H__
#define __ACCOUNT_HANDLER_H__

#include "Account.h"
#include "BoundCheckArray.h"
#include "String.h"

class Account_Handler
{
private:
    // BoundCheckArray<ACCOUNT_DATA*> acc_list(50);
    // ��ü�� ��� ������ ���� �ʱ�ȭ�ϴ� ǥ������ ������ ���� ����� ������,
    // ��� ������ ��ü�� ��� �ش� ��ü�� ����Ʈ ������ �̿��� ȣ���� ���Ǿ� ���� �ʴ�.
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