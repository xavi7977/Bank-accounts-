HighInterestCheckAccount.h

#include <iostream>

#include <iomanip>

#include <string>

#include "NoServiceChargeAccount.h"

using namespace std;

class HighInteresetCheckAccount :

public NoServiceChargeAccount

{

public:

HighInteresetCheckAccount(int m_acntNum, string atName, double startBal)

: NoServiceChargeAccount(m_acntNum, atName, startBal)

{

accntIntRate = 5.0;

accntChecksRem = -1;

accntMinBal = 1000;

}

~HighInteresetCheckAccount(void){}

};
