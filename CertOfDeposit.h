CertOfDeposit.h

#include <iostream>

#include <iomanip>

#include <string>

#include "MyBankAccount.h"

using namespace std;

class CertOfDeposit :

public MyBankAccount

{

public:

CertOfDeposit(int mactNum, string name, double actIntBal, int matMon)

: MyBankAccount(mactNum, name, actIntBal)

{

accntMautMonth = matMon;

accntCurrMonth = 1;

accntIntRate = 4.75;

}

~CertOfDeposit(void){}

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

cout << setw(25) << "Interest rate: " << accntIntRate << "%" << endl ;

cout << setw(25) << "Maturity Months: " << accntMautMonth << endl ;

cout << setw(25) << "Current Month: " << accntCurrMonth << endl;

cout << endl << setw(60) << setfill('-') << "" << setfill(' ') << endl;

}

void displayAccntStat()

{

displayAccntSum();

   

}

private:

double accntIntRate;

int accntMautMonth;

int accntCurrMonth;

};
