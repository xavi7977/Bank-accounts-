HighInterestSavingsAccnt.h

#include <iostream>

#include <iomanip>

#include <string>

#include "SavingsAccnt.h"

using namespace std;

class HighInteresetSavingAccnt :

public SavingsAccnt

{

public:

HighInteresetSavingAccnt(int m_acntNum, string atName, double startBal)

: SavingsAccnt(m_acntNum, atName, startBal)

{

accntMinBal = 5000;

}

~HighInteresetSavingAccnt(void){}

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

void displayAccntSum()

{

   

MyBankAccount::displayAccntSum();

cout << setw(25) << "Interest rate: " << accntIntRate << "%" << endl;

cout << setw(25) << "Minimum Balance: $" << accntMinBal << endl << endl;

cout <<"============================================="<<endl;

}

protected:

double accntMinBal;

};




