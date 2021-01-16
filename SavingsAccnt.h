SavingsAccnt.h

#include <iostream>

#include <iomanip>

#include <string>

#include "MyBankAccount.h"

using namespace std;

class SavingsAccnt :

public MyBankAccount

{

public:

SavingsAccnt(int m_acntNum, string atName, double startBal)

: MyBankAccount(m_acntNum, atName, startBal)

{

accntIntRate = 3.99;

}

~SavingsAccnt(void)

{

}

void accntWithdraw(double depAmt)

{

if (custBal-depAmt < 0)

{

cout << "LOW BALANCE" << endl;

return;

}

custBal -= depAmt;

}

void displayAccntSum()

{

   

MyBankAccount::displayAccntSum();

cout << setw(25) << "Interest rate: " << accntIntRate << "%" << endl << endl;

cout <<"============================================="<<endl;

}

void displayAccntStat()

{

displayAccntSum();

   

}

protected:

double accntIntRate;

};
