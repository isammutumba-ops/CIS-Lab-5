#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double loanAmount, annualRate;
    double monthlyRate, rateFactor;
    double monthlyPayment, totalPaidBack, totalInterest;
    int totalPayments;

    cout << "Enter loan amount: ";
    cin >> loanAmount;

    cout << "Enter annual interest rate (in %): ";
    cin >> annualRate;

    cout << "Enter total number of monthly payments: ";
    cin >> totalPayments;

    monthlyRate = (annualRate / 100.0) / 12.0;
    rateFactor = pow(1 + monthlyRate, totalPayments);

    monthlyPayment = loanAmount * monthlyRate * rateFactor
                     / (rateFactor - 1);

    totalPaidBack = monthlyPayment * totalPayments;
    totalInterest = totalPaidBack - loanAmount;

    cout << fixed << setprecision(2);
    cout << "\n";
    cout << setw(27) << left << "Loan Amount:"
         << "$" << loanAmount << endl;
    cout << setw(27) << left << "Monthly Payment:"
         << "$" << monthlyPayment << endl;
    cout << setw(27) << left << "Total Amount Paid:"
         << "$" << totalPaidBack << endl;
    cout << setw(27) << left << "Total Interest Paid:"
         << "$" << totalInterest << endl;

    return 0;
}