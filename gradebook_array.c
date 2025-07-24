#include <stdio.h>

int main() {
    // ---  Array Declaration for Characters ---
    // This creates an array named 'grades' that can hold 5 characters.
    //for numbers we can use int grades[5];
    char grades[5];
    int i; 
    

    // --- Get Input using a 'for' loop ---
    printf("Please enter 5 student letter grades (A, B, C, D, S):\n");

    for (i = 0; i < 5; i++) {
        printf("Enter grade for student %d: ", i + 1);
        
        // We use %c to read a single character.
        // The space before %c is important! It consumes any leftover whitespace
        // (like the Enter key press) from the previous input.
        scanf(" %c", &grades[i]);
    }

    // --- Print Output using another 'for' loop ---
    printf("\n--- The grades you entered are: ---\n");
    for (i = 0; i < 5; i++) {
       
        // We use %c to print a single character.
        printf("Student %d: %c\n", i + 1, grades[i]);
    }

    return 0;
}

