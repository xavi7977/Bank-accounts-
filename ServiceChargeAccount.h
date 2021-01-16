ServiceChargeAccount.h

#include <iostream>

#include <iomanip>

#include <string>

#include "MyCheckingAccount.h"

using namespace std;

const int ALLOWEDCHECKS=5;

const double SERVICE_CHARGE=10.0l;

class ServiceChargeAccount :

public MyCheckingAccount

{

public:

ServiceChargeAccount(int m_acntNum, string atName, double startBal)

: MyCheckingAccount(m_acntNum, atName, startBal)

{

accntIntRate = 0;

accntChecksRem = ALLOWEDCHECKS;

accntMinBal = 0;

}

~ServiceChargeAccount(void){}

void write_Check(double depAmt)

{

if (accntChecksRem == 0)

{

cout << "NO CHECKS REMAINING" << endl;

return;

}

if (custBal - depAmt < 0)

{

cout << "LOW BALANCE" << endl;

return;

}

accntChecksRem--;

custBal -= depAmt;

}

void displayAccntSum()

{

     

MyBankAccount::displayAccntSum();

cout << setw(25) << "REMAINING CHECKS: " << accntChecksRem << endl;

cout << setw(25) << "MONTHLY SERVICE CHARGE: $" << SERVICE_CHARGE << endl;

    

cout <<"============================================="<<endl;

}

};

File Name: NoServiceChargeAccount.h

#include <iostream>

#include <iomanip>

#include <string>

#include "MyCheckingAccount.h"

using namespace std;

class NoServiceChargeAccount :

public MyCheckingAccount

{

public:

NoServiceChargeAccount(int m_acntNum, string atName, double startBal)

: MyCheckingAccount(m_acntNum, atName, startBal)

{

accntIntRate = 2.5;

accntChecksRem = -1;

accntMinBal = 500;

}

~NoServiceChargeAccount(void){}

void write_Check(double depAmt)

{

if (custBal - depAmt < 0)

{

cout << "LOW BALANCE" << endl;

return;

}

custBal -= depAmt;

}

void displayAccntSum()

{

   

MyBankAccount::displayAccntSum();

cout << setw(25) << "Interest rate: " << accntIntRate << "%" << endl;

cout << setw(25) << "Minimum Balance: $" << accntMinBal << endl;   

cout <<"============================================="<<endl;

}

};


