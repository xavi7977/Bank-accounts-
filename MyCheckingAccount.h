MyCheckingAccount.h

#ifndef _CHECKING_ACCOUNT_H

#define _CHECKING_ACCOUNT_H

#include <iostream>

#include <iomanip>

#include <string>

#include "MyBankAccount.h"

using namespace std;

class MyCheckingAccount :public MyBankAccount

{

public:

MyCheckingAccount(int m_acntNum, string atName, double startBal)

: MyBankAccount(m_acntNum, atName, startBal)

{

}

~MyCheckingAccount(void){}

virtual void write_Check(double depAmt) = 0;

void accntWithdraw(double depAmt)

{

if (custBal-depAmt < 0)

{

cout << "LOW BALANCE" << endl;

return;

}

if (custBal - depAmt < accntMinBal)

{

cout << "WITHDRAW DENIED DUE TO MINIMUM BALANCE VIOLATION" << endl;

return;

}

custBal -= depAmt;

}

void displayAccntStat()

{

displayAccntSum();

   

}

protected:

double accntIntRate;

int accntChecksRem;

double accntMinBal;

};

#endif
