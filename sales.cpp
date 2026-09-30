#include <iostream>
using namespace std;

int main() {

    int sales;
    cout << " Enter the total sales of the company: ";
    cin >> sales;

    int porcentage;
    cout << " Enter the porcentage of sales: ";
    cin >> porcentage;

    int result = (sales * porcentage) / 100;
    cout << " The result of the sales porcentage is: " << result << endl;
    return 0;
}