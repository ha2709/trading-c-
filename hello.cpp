#include <iostream>
using namespace std;
#include "divisor.h"


double multiplier(double fristNum, double secondNum)
{
    return fristNum * secondNum;
}

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

    return 0;
}