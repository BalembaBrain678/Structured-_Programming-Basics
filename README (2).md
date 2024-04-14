
# Structured_programming_basics

4)
 Reverse.c

This C program reads a 3-digit number from the user and prints its reverse.

 How to Compile and Run

1. Make sure you have a C compiler installed (e.g., gcc).
On the task bar click on compile and run

Program Description

1. The program prompts the user to enter a 3-digit number.
2. It reads the input from the user.
3. The program calculates the reverse of the number.
4. Finally, it prints the reversed number.

 Example Usage

Enter a 3-digit number: 123
Reversed number: 321

5)
Magic-number.c
In this program:

The user inputs a 3-digit number.
The program extracts the individual digits from the input.
It calculates the sum and product of those digits.
Finally, it determines whether the input number is a “magic number” (where the sum of the digits equals their product).
How to Compile and Run

1. Make sure you have a C compiler installed (e.g., gcc).
On the task bar click on compile and run

Example Usage

Enter a 3-digit number: 123
It is a magic number
Enter a 3-digit number: 333
It is not a magic number

6)
Character.c
This C program reads a character from the user and then determines whether it is a capital letter, a small case letter, a digit, or a special symbol. The logic is based on the ASCII values of the characters. If the character falls into one of the specified categories, the corresponding message is printed. Otherwise, it is considered a special symbol. 

How to Compile and Run

1. Make sure you have a C compiler installed (e.g., gcc).
On the task bar click on compile and run

Example Usage

Enter a letter : T
It is a capital letter
Enter a letter: t
It is a small letter
Enter a letter: %
It is a special symbol
Enter a letter: 3
It is a digit


8)
Power.c
This program calculates the result of x raised to the power of y.
It defines a function power that computes the power using a loop.
The user inputs values for x and y, and the program displays the result.

How to Compile and Run

1. Make sure you have a C compiler installed (e.g., gcc).
On the task bar click on compile and run
Problem 1
3) 
The calculate Payments function computes the monthly payment using the following formula: [ \text{monthly Payments} = \frac{\text{loan} \cdot (\text{rate} \cdot (1 + \text{rate})^{\text{payments}})}{(1 + \text{rate})^{\text{payments}} - 1} ]
rate: Monthly interest rate (annual interest rate divided by 12).
loan: Outstanding balance on the credit card.
payments: Number of monthly payments (usually 12 for a year).
In the main function:
The user is prompted to input the outstanding balance (principal) and the annual interest rate (as a decimal).
The monthly interest rate is calculated by dividing the annual interest rate by 12.
The calculate Payments function is called with the appropriate parameters.
The result (minimum fixed monthly payment) is printed with two decimal places.



