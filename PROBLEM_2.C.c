#include <stdio.h>

float minimum_monthly_payment(float prev_balance, float mpr, float r, int months) {
    float monthly_interest_rate = r / 12.0;
    float minimum_monthly_payment = mpr * prev_balance;
    float monthly_unpaid_balance = prev_balance - minimum_monthly_payment;
    float updated_balance = monthly_unpaid_balance + (monthly_interest_rate * monthly_unpaid_balance);

    for (int i = 1; i <= months; i++) {
        if (updated_balance <= 0) {
            printf("Paid off in %d months.\n", i-1);
            minimum_monthly_payment++;
            break;
        }

        minimum_monthly_payment = mpr * prev_balance;
        printf("The minimum monthly payment for month %d is %.2f\n", i, minimum_monthly_payment);
        printf("The remaining balance after month %d is %.2f\n", i, updated_balance);

        monthly_unpaid_balance = updated_balance - minimum_monthly_payment;
        updated_balance = monthly_unpaid_balance + (monthly_interest_rate * monthly_unpaid_balance);
    }

    return updated_balance;
}

int main() {
    float balance, mpr, r, prev_balance;
    int months;

    printf("Enter the balance:\n");
    if (scanf("%f", &balance) != 1 || balance < 0) {
        printf("Invalid input. Balance must be a positive number.\n");
        return 1;
    }
    prev_balance = balance;

    printf("Enter the minimum monthly payment rate:\n");
    if (scanf("%f", &mpr) != 1 || mpr < 0) {
        printf("Invalid input. Minimum monthly payment rate must be a positive number.\n");
        return 1;
    }

    printf("Enter the annual interest rate:\n");
    if (scanf("%f", &r) != 1 || r < 0) {
        printf("Invalid input. Annual interest rate must be a positive number.\n");
        return 1;
    }

    printf("Enter the number of months to simulate:\n");
    if (scanf("%d", &months) != 1 || months < 0) {
        printf("Invalid input. Number of months must be a positive integer.\n");
        return 1;
    }

    minimum_monthly_payment(prev_balance, mpr, r, months);

    return 0;
}
