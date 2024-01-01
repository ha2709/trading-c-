#include <iostream>
using namespace std;
#include <cmath>;
#include <iomanip>;
#include <setio
#include "divisor.h"
#include "multiplier.h"



int main() 
{
    // std::cout << "Hello, World" << std::endl;
    double principal = 0.0;
    const int monthsInYear = 12;
    const int percentDenominator =100;
    cout << "Enter the pricipal amount: ";
    cin >> principal;
    cout << "Eneter the principal amount: ";
    cin >> principal;
    double humanInterest = 0.0;
    cout << "Enter the interest rate: ";
    cin >> humanInterest;
    double interest = divisor(humanInterest,percentDenominator);
    int yearsOfLoan = 0;
    cout << "Enter the years of loan:";
    cin >> yearsOfLoan;
    double monthInterest = divisor(interest,monthsInYear);
    long monthOfLoan = multiplier( yearsOfLoan , monthsInYear);
    cout << principal << " " << interest << " " << yearsOfLoan << " " << monthInterest << " " << monthOfLoan << endl;
    double payment = 0.0;
    payment = principal *
                (monthInterest /
                    (1-  (pow((double) 1+ monthInterest,
                            (double) -monthOfLoan))));
    cout << "Payment: " << setiosflags(ios::fixed)
        << setprecision(2) << payment << endl;
    return 0;
}