#include "account.h"

int ShowMenu();
void ShowAllAcc(ACCOUNT_DATA* arr[], int acc_count);

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};