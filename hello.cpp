# include <iostream>
using namespace std;

int main() {
    std::cout << "Hello, World" << std::endl;
    double principal = 0.0;
    const int monthsInYear = 12;
    cout << "Enter the pricipal amount: ";
    cin >> principal;
    double interest = 0.05;
    int yearsOfLoan = 30;

    double monthInterest = interest/monthsInYear;
    long monthOfLoan = yearsOfLoan * monthsInYear;

    cout << principal << " " <<interest << " " << yearsOfLoan << " " << monthInterest << endl;

    return 0;
}