#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class ACCOUNT_DATA
{
private:
    int account_num;
    char *name;
    int cash;

public:
    ACCOUNT_DATA();
    ACCOUNT_DATA(int account_num, const char *name, int cash);
    ACCOUNT_DATA(const ACCOUNT_DATA &copy);

    virtual void DepositCash(int cash);
    void WithdrawCash(int cash);
    int ShowAccNum() const;
    char* ShowName() const;
    int ShowCash() const;
    virtual ~ACCOUNT_DATA();
    
};

#endif