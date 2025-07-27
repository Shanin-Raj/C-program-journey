#include <stdio.h>

int main() {
    
    int age = 25;

    // --- Declaring a Pointer ---
    // A pointer variable that will store the address of an integer.
    // The '*' tells C that this is a pointer.
    int *pAge = NULL; // Initialize pointer to NULL
    // --- Using the '&' (address-of) operator ---
    // We are storing the memory address of the 'age' variable in our pointer.
    pAge = &age;

    // --- Printing the values ---
    printf("--- Let's look at the values ---\n");

    // 1. The value of the normal variable
    printf("Value of 'age': %d\n", age);

    // 2. The memory address where 'age' is stored
    // We use %p, the format specifier for printing memory addresses.
    printf("Memory address of 'age' (using &age): %p\n", &age);

    // 3. The value of the pointer variable (which is the address of 'age')
    printf("Value of pointer 'pAge' (it holds an address): %p\n", pAge);

    // --- Using the '*' (dereference) operator ---
    // This means "go to the address stored in pAge and get the value there."
    printf("\n--- Using the dereference operator '*' ---\n");
    printf("Value at the address pointed to by pAge (using *pAge): %d\n", *pAge);

    return 0;
}
