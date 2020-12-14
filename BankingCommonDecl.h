#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__

#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;

namespace CreditRate
{
    enum{Crd_A=7, Crd_B=4, Crd_C=2};
}

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

enum {NORMAL=1, CREDIT=2};

#endif