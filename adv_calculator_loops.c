#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // --- The 'while' Loop ---
    // while(1) creates an infinite loop. The program will keep running
    // until we tell it to 'break'.
    while (1) {
        // We add a new option 'q' to quit the program.
        printf("\nEnter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);

        // --- Exit Condition ---
        // If the user enters 'q', we break out of the infinite loop.
        if (operator == 'q') {
            break;
        }

        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        // --- The 'switch' Statement is used ---
        switch(operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;

            case '-':
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;

            case '*':
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;

            case '/':
                if (num2 == 0) {
                    printf("Error! Cannot divide by zero.\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;

            default:
                printf("Error! Invalid operator.\n");
        }
    }

    printf("Calculator turning off. Goodbye!\n");

    return 0;
}