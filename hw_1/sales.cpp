#include <iostream>
using namespace std;

int main () { 

    int userInput1;
    cout << " Welcome to the sale application of East Coast Division " << endl;
    cout << " Please enter the total sales of the year: ";
    cin >> userInput1;

    float userPercent;
    cout << " Please enter the percentage of sales: ";
    cin >> userPercent;

    float totalSales = userInput1 * (userPercent / 100);
    cout << " The total sales of the year is: " << totalSales << endl;
    return 0;


}