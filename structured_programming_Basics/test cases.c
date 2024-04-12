#include <stdio.h>
int main()
{
    double balance,annualinterestRate;

    // Test case 1;
     balance = 3329;
    annualinterestRate = 0.2;
    double minimumpayment1 = (balance,annualinterestRate);
    printf("Test case 1:\n");
    printf("Lowest payment: %.310f\n",minimumpayment1);

   // Test case 2;
    balance = 4773;
    annualinterestRate - 0.2;
    double minimumpayment2 = (balance,annualinterestRate);
    printf("\nTest case 2:\n");
    printf("Lowest payment: %.440f\n",minimumpayment2);

   // Test case 3;
    balance = 3926;
    annualinterestRate = 0.2;
    double minimumpayment3 = (balance,annualinterestRate);
    printf("\nTest case 3:\n");
    printf("Lowest payment: %.360f\n",minimumpayment3);
    return 0;
}
