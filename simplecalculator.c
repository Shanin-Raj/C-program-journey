#include <stdio.h>

// code works in terminal ,by manually running the file with gcc simplecalculator.c -o simplecalculator.exe
// and then ./simplecalculator


int main() {
    // Declare variables for two numbers and their sum.
    int num1, num2, sum;

    // Get the first number from the user
    printf("Enter the first number: ");
    scanf("%d", &num1); 

    // Get the second number from the user
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Perform the addition using the '+' operator
    sum = num1 + num2;

    // Print the result.

    printf("The sum is: %d\n", sum);
    // if you want to add decimal numbers, you can use float or double

    return 0;
}