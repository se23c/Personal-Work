// I got this one confuse with the bill.cpp one this is the the BILL.CPP

#include <iostream>
using namespace std;

int main () {
    double purchase;
    cout << " Enter the total purchase amount: ";
    cin >> purchase;

    double stateTax;
    cout << " Enter the state tax rate: ";
    cin >> stateTax;

    double countyTax;
    cout << " Enter the county tax rate: ";
    cin >> countyTax;

    double totalTax = stateTax + countyTax;
    double totalTaxAmount = purchase + (purchase * totalTax) / 100;

    cout << " The total tax rate is: " << totalTax << endl;
    cout << " The total tax amount is: " << totalTaxAmount << endl;
    return 0;
}