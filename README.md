#structured_programming_Basics/binary search.c
Input:

Upon running the program, you will be prompted to enter the number of elements in the array and then the elements themselves.
After entering the array elements, you will be asked to enter the value you want to search for.
Output:

If the key is found in the array, the program will print its value and location (index).
If the key is not found, it will print a message indicating so.
Sample Input/Output:
mathematica
Copy code
Enter number of elements: 5
Enter 5 integers: 1 2 3 4 5
Enter value to find: 3
3 found at location 3
mathematica
Copy code
Enter number of elements: 3
Enter 3 integers: 10 20 30
Enter value to find: 15
Not found! 15 is not present in the list.
Notes:
Ensure that the array elements are sorted in ascending order for binary search to work correctly.
This program assumes that the input array does not contain duplicate elements.
The array size is limited to 100, you can adjust this according to your needs.
The program utilizes the binary search algorithm efficiently, making it suitable for searching large sorted arrays.



#structured_programming_Basics/sum.c
input:

Upon running the program, you will be prompted to enter a three-digit number.
Output:

The program will compute the sum of the digits of the entered number and print the result.
Sample Input/Output:
mathematica
Copy code
Enter a three digit number: 123
Sum of digits = 6
mathematica
Copy code
Enter a three digit number: 456
Sum of digits = 15
Notes:
The program assumes that the user will input a valid three-digit number.
It calculates the sum of digits by extracting each digit using the modulo operator (%) and then dividing the number by 10.
The sum is accumulated in the sum variable and printed at the end.
This program efficiently computes the sum of digits for three-digit numbers using a simple loop.

#structured_programming_Basics/time_table.c
input:


Upon running the program, you will be prompted to enter an integer for which you want to generate the multiplication table.
Output:

The program will generate and print the multiplication table for the entered integer, displaying results from 1 to 12.
Sample Input/Output:
bash
Copy code
Enter an integer: 7
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
7 * 11 = 77
7 * 12 = 84
Notes:
The program assumes that the user will input a valid integer.
It generates the multiplication table by iterating from 1 to 12 and printing the result of multiplying the input integer with each number.
The table is formatted nicely for readability.
This program efficiently generates multiplication tables for any integer input within the given range.

#structured_programming_Basics/test case
input:
Input:

Upon running the program, you will be prompted to enter an integer for which you want to generate the multiplication table.
Output:

The program will generate and print the multiplication table for the entered integer, displaying results from 1 to 12.
Sample Input/Output:
bash
Copy code
Enter an integer: 7
7 * 1 = 7
7 * 2 = 14
7 * 3 = 21
7 * 4 = 28
7 * 5 = 35
7 * 6 = 42
7 * 7 = 49
7 * 8 = 56
7 * 9 = 63
7 * 10 = 70
7 * 11 = 77
7 * 12 = 84
Notes:
The program assumes that the user will input a valid integer.


# Structure_programming_Basics\problem2.c

This C code defines a function to calculate the minimum monthly payment required to pay off a loan within a specified number of months, considering the interest rate. Here's a breakdown of the code:

1. minimum_monthly_payment Function:

Takes four arguments:
prev_balance: The previous balance of the loan (initial balance for the first call).
mpr: The minimum monthly payment rate as a decimal (e.g., 0.02 for 2%).
r: The annual interest rate as a decimal (e.g., 0.18 for 18%).
months: The total number of months to simulate the payment schedule.
Calculates the monthly interest rate: monthly_interest_rate = r / 12.0;
Initializes the minimum_monthly_payment based on the initial balance and rate.
Calculates the unpaid balance after the first minimum payment: monthly_unpaid_balance = prev_balance - minimum_monthly_payment;
Updates the balance for the first month considering interest: updated_balance = monthly_unpaid_balance + (monthly_interest_rate * monthly_unpaid_balance);
Uses a for loop to iterate through each month:
Checks if the updated balance becomes non-positive (loan paid off):
If yes, prints a message indicating the number of months needed to pay off the loan and slightly increases the minimum payment (to account for potential rounding errors) before exiting the loop using break.
Otherwise, calculates the minimum payment again for each month based on the previous balance.
Prints the minimum payment and remaining balance for each month.
Updates the unpaid balance and total balance for the next month considering the minimum payment and interest.
Returns the final updated balance (which might be slightly positive due to rounding errors).
2. main Function:

Declares variables for balance, minimum payment rate, annual interest rate, previous balance (used for calculations), and number of months.
Prompts the user to enter the initial loan balance, validates the input to be a positive number, and handles invalid input with an error message and program termination.
Stores the initial balance in prev_balance.
Repeats the same process for minimum payment rate, annual interest rate, and number of months, ensuring positive values and handling errors.
Calls the minimum_monthly_payment function, passing the initial values and simulating the payment schedule for the specified number of months.
Returns 0 to indicate successful program execution.

# structure_Programming_Basics\remainder.c

The provided C code calculates the division of two numbers entered by the user and prints the result. However, it has a potential issue when dividing by zero. Here's a breakdown with an improvement:

Explanation:

Header Inclusion:

#include <stdio.h>: This line includes the standard input/output library, providing functions like printf for printing and scanf for getting user input.
Variable Declaration:

float a, b, c;: Declares three floating-point variables a, b, and c. a and b will store the numbers entered by the user, and c will store the result of the division.
User Input:

printf("Enter the two number\n");: Prompts the user to enter two numbers.
scanf("%f%f",&a,&b);: Reads the two floating-point numbers entered by the user and stores them in a and b using the scanf function.
Division and Check for Remainder:

c = (a / b);: Calculates the division of a by b and stores the result in c.
Important Improvement:

Handle Division by Zero: It's crucial to check for division by zero before performing the calculation. You can add an if statement to handle this case:

C
if (b == 0) {
    printf("Error: Cannot divide by zero.\n");
} else {
    c = (a / b);
    // Rest of the code to print the result or handle remainder
}
Use code with caution.
Conditional Printing:

if (c == 1) { ... } else { ... }: This conditional statement checks the value of c.
If c is equal to 1 (indicating no remainder), it prints a message stating there's no remainder and the answer using printf.
Otherwise (if there's a remainder), it prints a message indicating the remainder using printf.
Program Termination:

return 0;: This line indicates successful program termination and returns a value of 0 to the operating system.
It generates the multiplication table by iterating from 1 to 12 and printing the result of multiplying the input integer with each number.
The table is formatted nicely for readability.
This program efficiently generates

  

