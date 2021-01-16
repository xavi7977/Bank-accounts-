: main.cpp

#include <iostream>

#include <iomanip>

#include <string>

#include "CertOfDeposit.h"

#include "HighInterestCheckAccount.h"

#include "HighInterestSavingsAccnt.h"

#include "ServiceChargeAccount.h"

using namespace std;

void testServiceCheckAccnt()

{

ServiceChargeAccount myact(100,"David Cameron", 2000);

char inp=0;

double amnt;

cout << "Performing operations on Service Charge Checking Account" << endl << endl;

cout << "Account Initial Information:" << endl;

myact.displayAccntSum();

cout << endl;

while (inp != 'x')

{

cout << "Choose Operation:" << endl;

cout << "1 - Perform Withdrawal" << endl;

cout << "2 - Perform Deposit" << endl;

cout << "3 - Display Summary" << endl;

cout << "4 - Display Monthly Statement" << endl;

cout << "5 - Write check" << endl;

cout << "x - Quit" << endl;

cout << "Enter your choice: ";

cin >> inp;

switch (inp)

{

case '1':

cout << "Enter amount: ";

cin >> amnt;

myact.accntWithdraw(amnt);

break;

case '2':

cout << "Enter amount: ";

cin >> amnt;

myact.accntDeposit(amnt);

break;

case '3':

myact.displayAccntSum();

break;

case '4':

myact.displayAccntStat();

break;

case '5':

cout << "Enter amnt: ";

cin >> amnt;

myact.write_Check(amnt);

break;

case '6':

break;

case 'x':

break;

default:

cout << "WRONG INPUT" << endl;

break;

}

myact.displayAccntSum();

cout << endl;

}

}

void testNoServiceCheckAccnt()

{

NoServiceChargeAccount myact(100,"David Cameron", 2000);

char inp=0;

double amnt;

cout << "Performing Operation on Checking Account with No Service Charge" << endl << endl;

cout << "Account Initial Information:" << endl;

myact.displayAccntSum();

cout << endl;

while (inp != 'x')

{

cout << "Choose Operation:" << endl;

cout << "1 - Perform Withdrawal" << endl;

cout << "2 - Perform Deposit" << endl;

cout << "3 - Display Summary" << endl;

cout << "4 - Display Monthly Statement" << endl;

cout << "5 - Write check" << endl;

cout << "x - Quit" << endl;

cout << "Enter your choice: ";

cin >> inp;

switch (inp)

{

case '1':

cout << "Enter amount: ";

cin >> amnt;

myact.accntWithdraw(amnt);

break;

case '2':

cout << "Enter amount: ";

cin >> amnt;

myact.accntDeposit(amnt);

break;

case '3':

myact.displayAccntSum();

break;

case '4':

myact.displayAccntStat();

break;

case '5':

cout << "Enter amount: ";

cin >> amnt;

myact.write_Check(amnt);

break;

case '6':

break;

case 'x':

break;

default:

cout << "WRONG INPUT" << endl;

break;

}

myact.displayAccntSum();

cout << endl;

}

}

void testHighInterestCheckAccnt()

{

HighInteresetCheckAccount myact(100,"David Cameron", 2000);

char inp=0;

double amnt;

cout << "Performing Operation on High Interest Checking Account" << endl << endl;

cout << "Account Initial Information:" << endl;

myact.displayAccntSum();

cout << endl;

while (inp != 'x')

{

cout << "Choose Operation:" << endl;

cout << "1 - Perform Withdrawal" << endl;

cout << "2 - Perform Deposit" << endl;

cout << "3 - Display Account Summary" << endl;

cout << "4 - Display Monthly Account Statement" << endl;

cout << "5 - Write a check" << endl;

cout << "x - Quit" << endl;

cout << "Enter your choice: ";

cin >> inp;

switch (inp)

{

case '1':

cout << "Enter amount: ";

cin >> amnt;

myact.accntWithdraw(amnt);

break;

case '2':

cout << "Enter amount: ";

cin >> amnt;

myact.accntDeposit(amnt);

break;

case '3':

myact.displayAccntSum();

break;

case '4':

myact.displayAccntStat();

break;

case '5':

cout << "Enter amount: ";

cin >> amnt;

myact.write_Check(amnt);

break;

case '6':

break;

case 'x':

break;

default:

cout << "WRONG INPUT" << endl;

break;

}

myact.displayAccntSum();

cout << endl;

}

}

void testSavingsAccnt()

{

SavingsAccnt myact(100,"David Cameron", 2000);

char inp=0;

double amnt;

cout << "Performing Operation on Savings Account" << endl << endl;

cout << "Account Initial Information:" << endl;

myact.displayAccntSum();

cout << endl;

while (inp != 'x')

{

cout << "Choose Operation:" << endl;

cout << "1 - Perform Withdrawal" << endl;

cout << "2 - Perform Deposit" << endl;

cout << "3 - Display Account Summary" << endl;

cout << "4 - Display Monthly Account Statement" << endl;

cout << "x - Quit" << endl;

cout << "Enter your choice: ";

cin >> inp;

switch (inp)

{

case '1':

cout << "Enter amount: ";

cin >> amnt;

myact.accntWithdraw(amnt);

break;

case '2':

cout << "Enter amount: ";

cin >> amnt;

myact.accntDeposit(amnt);

break;

case '3':

myact.displayAccntSum();

break;

case '4':

myact.displayAccntStat();

break;

case 'x':

break;

default:

cout << "WRONG INPUT" << endl;

break;

}

myact.displayAccntSum();

cout << endl;

}

}

void testHighInterestSavingsAccnt()

{

HighInteresetSavingAccnt myact(123,"John Doe", 8000);

char inp=0;

double amnt;

cout << "Performing Operation on High Interest Savings Account" << endl << endl;

cout << "Account Initial Information:" << endl;

myact.displayAccntSum();

cout << endl;

while (inp != 'x')

{

cout << "Choose Operation:" << endl;

cout << "1 - Perform Withdrawal" << endl;

cout << "2 - Perform Deposit" << endl;

cout << "3 - Display Account Summary" << endl;

cout << "4 - Display Monthly Account Statement" << endl;

cout << "x - Quit" << endl;

cout << "Enter choice: ";

cin >> inp;

switch (inp)

{

case '1':

cout << "Enter amount: ";

cin >> amnt;

myact.accntWithdraw(amnt);

break;

case '2':

cout << "Enter amount: ";

cin >> amnt;

myact.accntDeposit(amnt);

break;

case '3':

myact.displayAccntSum();

break;

case '4':

myact.displayAccntStat();

break;

case 'x':

break;

default:

cout << "WRONG INPUT" << endl;

break;

}

myact.displayAccntSum();

cout << endl;

}

}

void testCOD()

{

CertOfDeposit myact(123,"John Doe", 10000, 6);

char inp=0;

double amnt;

cout << "Performing Operation on Certificate Of Deposit" << endl << endl;

cout << "Account Initial Information:" << endl;

myact.displayAccntSum();

cout << endl;

while (inp != 'x')

{

cout << "Choose Operation:" << endl;

cout << "1 - Perform Withdrawal" << endl;

cout << "2 - Perform Deposit" << endl;

cout << "3 - Display Account Summary" << endl;

cout << "4 - Display Monthly Account Statement" << endl;

cout << "x - Quit" << endl;

cout << "Enter your choice: ";

cin >> inp;

switch (inp)

{

case '1':

cout << "Enter amount: ";

cin >> amnt;

myact.accntWithdraw(amnt);

break;

case '2':

cout << "Enter amount: ";

cin >> amnt;

myact.accntDeposit(amnt);

break;

case '3':

myact.displayAccntSum();

break;

case '4':

myact.displayAccntStat();

break;

case 'x':

break;

default:

cout << "WRONG INPUT" << endl;

break;

}

myact.displayAccntSum();

cout << endl;

}

}

int main()

{

char inp;

cout << "Program to Perform Operation on Various Bank Accounts" << endl << endl;

cout << "Select a Bank Account" << endl;

cout << "1 - CHECKING ACCOUNT WITH SERVICE CHARGE" << endl;

cout << "2 - CHECKING ACCOUNT WITH NO SERVICE CHARGE "<< endl;

cout << "3 - CHECKING ACCOUNT WITH HIGH INTEREST" << endl;

cout << "4 - SAVINGS ACCOUNT" << endl;

cout << "5 - SAVINGS ACCOUNT WITH HIGH INTEREST" << endl;

cout << "6 - CERTIFICATE OF DEPOSIT" << endl;

cout << "Enter your choice: ";

cin >> inp;

switch (inp)

{

case '1':

testServiceCheckAccnt();

break;

case '2':

testNoServiceCheckAccnt();

break;

case '3':

testHighInterestCheckAccnt();

break;

case '4':

testSavingsAccnt();

break;

case '5':

testHighInterestSavingsAccnt();

break;

case '6':

testCOD();

break;

default:

cout << "WRONG INPUT" << endl;

break;

}

system("pause");

return 0;

}
