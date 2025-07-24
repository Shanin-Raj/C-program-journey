#include <stdio.h>

int main() {
    // NEW: A char variable to store the operator
    char operator;
    double num1, num2, result;

    // --- User Input ---
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // space before %c is to consume any newline characters

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // --- The 'if-else if-else' Decision Block ---
    // The program checks these conditions one by one from the top.
    // We can use switch functionality here, but for simplicity, we will use if-else statements.

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
//for using switch functionality, we can use the following code
 
    // --- NEW: The 'switch' Statement ---
    // The switch statement evaluates the 'operator' variable.
/*  switch(operator) {
        // It then jumps to the 'case' that matches the value.
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break; // 'break' exits the switch statement.

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

        // The 'default' case runs if no other case matches.
        default:
            printf("Error! Invalid operator.\n");
    }*/
