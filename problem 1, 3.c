#include <stdio.h>
#include <math.h>

// Function to calculate the minimum fixed monthly payment
double calculatePayments(double rate, double loan, int payments) {
    double mPayments;
    mPayments = loan * (rate * pow(1 + rate, payments)) / (pow(1 + rate, payments) - 1);
    return mPayments;
}

int main() {
    double principal, annualInterestRate, monthlyInterestRate, monthlyPayment;
    int months = 12;

    printf("Enter the outstanding balance on the credit card: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (as a decimal): ");
    scanf("%lf", &annualInterestRate);

    monthlyInterestRate = annualInterestRate / 12.0;

    // Calculate the minimum fixed monthly payment
    monthlyPayment = calculatePayments(monthlyInterestRate, principal, months);

    printf("Lowest Payment: %.2lf\n", monthlyPayment);

    return 0;
}

