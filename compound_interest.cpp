#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double principal, annualRatePercentage, r;
    double totalAmount, compoundInterest;
    int compoundFrequency, years;
    int n, t;

    cout << "Enter initial principal: ";
    cin >> principal;

    cout << "Enter annual interest rate (in %): ";
    cin >> annualRatePercentage;

    cout << "Enter number of times interest is compounded per year: ";
    cin >> compoundFrequency;

    cout << "Enter number of years: ";
    cin >> years;

    r = annualRatePercentage / 100.0;
    n = compoundFrequency;
    t = years;

    totalAmount = principal * pow(1 + r / n, n * t);
    compoundInterest = totalAmount - principal;

    cout << fixed << setprecision(2);
    cout << "\n";
    cout << setw(27) << left << "Initial Principal:"
         << "$" << principal << endl;
    cout << setw(27) << left << "Interest Earned:"
         << "$" << compoundInterest << endl;
    cout << setw(27) << left << "Total Balance (A):"
         << "$" << totalAmount << endl;

    return 0;
}
