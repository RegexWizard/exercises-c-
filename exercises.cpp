#include <iostream>

using namespace std;

int main () {
    double sales = 95000;
    double state_tax = 4; // IN PERCENT
    double county_tax = 2; // IN PERCENT

    double salestate = sales * (state_tax / 100);
    double salecounty = sales * (county_tax / 100);

    double resultIncome = sales - (salestate + salecounty);

    cout << "Income: $" << resultIncome << endl
         << "State-Tax: $" << salestate << endl
         << "County-Tax: $" << salecounty << endl
         << "Total-Tax: $" << (salestate + salecounty) << endl;

    return 0;
}