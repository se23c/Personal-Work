
#include <iostream>
using namespace std;

int main() {
    double meal;
    cout << " Enter the total meal amount: ";
    cin >> meal;

    double tax;
    cout << " Enter the tax rate: ";
    cin >> tax;

    double tipRate;
    cout << " Enter the tip rate: ";
    cin >> tipRate;

    double totalBill = meal + (meal * tax) / 100 + (meal * tipRate) / 100;
    cout << " The total bill amount is: " << totalBill << endl;
    return 0;

}