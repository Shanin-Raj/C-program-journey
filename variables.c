#include <stdio.h>

int main() {
    // for integers
    int age = 25;

    // for numbers with decimal points.
    float weight = 68.5; 

    // for more precise decimal numbers.
    double pi = 3.14159265359;

    // for a single character.
    char letter = 'S';

    //  "format specifiers" 
    // %d for int, %f for float/double, %c for char.
    printf("Age: %d\n", age);
    printf("Weight: %f kg\n", weight);
    printf("The value of Pi: %f\n", pi);
    printf("letter: %c\n", letter);

    return 0;
}