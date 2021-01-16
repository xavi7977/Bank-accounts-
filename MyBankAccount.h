MyBankAccount.h

#ifndef _BANK_ACCOUNT_H

#define _BANK_ACCOUNT_H

#include <iostream>

#include <iomanip>

#include <string>

using namespace std;

class MyBankAccount

{

public:

MyBankAccount(int mactNum, string name, double actIntBal)

{

bAccntNum = mactNum;

bName = name;

custBal = actIntBal;

}

~MyBankAccount(void){}

string getBankCustName()

{

return bName;

}

int getBankCustAccntNum()

{

return bAccntNum;

}

double getBankCustAccntBalance()

{

return custBal;

}

void accntDeposit(double depAmt)

{

custBal += depAmt;

cout << "$" << depAmt << " DEPOSITED." << endl;

}

virtual void accntWithdraw(double depAmt) = 0;

virtual void displayAccntStat() = 0;

virtual void displayAccntSum()

{

cout <<"============================================="<<endl;

cout << endl << setw(25) << "" << "Account Summary" << endl << endl;

cout << setw(25) << "Name: " << bName << endl;

cout << setw(25) << "Account #: " << bAccntNum << endl;

cout << setw(25) << "Current Balance: $" << custBal << endl;

}

public:

string bName;

int bAccntNum;

double custBal;

};

#endif
