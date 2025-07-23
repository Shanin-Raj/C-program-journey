#include <stdio.h>

int main() {
    // NEW: A char variable to store the operator
    char operator;
    double num1, num2, result;

    // --- User Input ---
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any newline characters

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // --- The 'if-else if-else' Decision Block ---
    // The program checks these conditions one by one from the top.

    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } 
    else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } 
    else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } 
    else if (operator == '/') {
        result = num1 / num2;
        printf("Result: %.2f\n", result);
    } 
    else {
        // This 'else' block runs if none of the above conditions were true.
        printf("Error! Invalid operator.\n");
    }

    return 0;
}
