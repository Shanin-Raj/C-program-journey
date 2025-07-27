#include <stdio.h>

// --- Constant Definitions ---
//Using defines to set constants for the number of students and passing mark.
// This makes it easier to change these values in one place if needed.
#define NUM_STUDENTS 5
#define PASSING_MARK 40

// --- Functions ---
void getMarks(int marksArray[], int size);
char calculateGrade(int mark);
void generateGradeCards(int marksArray[], int size);


// --- Main Function ---
int main() {
    // We now store integer marks instead of char grades.
    int studentMarks[NUM_STUDENTS];

    // Get the marks from the user.
    getMarks(studentMarks, NUM_STUDENTS);

    // Generate and display the grade cards for all students.
    generateGradeCards(studentMarks, NUM_STUDENTS);

    return 0;
}


// --- Function Definitions ---

/*
 *  Gets numerical marks from the user and stores them in an array.
 *  "marksArray"-The integer array to store the marks in.
 *  "size"-The number of students.
 */
void getMarks(int marksArray[], int size) {
    printf("Please enter the numerical marks (0-100) for %d students:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marksArray[i]);
    }
}

/**
 * Converts a numerical mark into a letter grade.
 *  "mark" The numerical mark to convert.
 *  The corresponding character letter grade.
 */
char calculateGrade(int mark) {
    if (mark >= 90) {
        return 'S';
    } else if (mark >= 80) {
        return 'A';
    } else if (mark >= 70) {
        return 'B';
    } else if (mark >= 60) {
        return 'C';
    } else if (mark >= 50) {
        return 'D';
    } else if (mark >= PASSING_MARK) {
        return 'E';
    }
    else {
        return 'F'; // Fail
    }
}

/*
 * Generates and prints a grade card for each student.
 * marksArray The integer array containing the marks.
 * size The number of students.
 */
void generateGradeCards(int marksArray[], int size) {
    printf("\n--- Student Grade Cards ---\n");
    for (int i = 0; i < size; i++) {
        // For each student, get their mark.
        int currentMark = marksArray[i];
        // Calculate their letter grade by calling function.
        char currentGrade = calculateGrade(currentMark);

        // Print the formatted grade card.
        printf("Student %d: Mark = %d, Grade = %c", i + 1, currentMark, currentGrade);

        // Add the Pass/Fail status.
        if (currentMark >= PASSING_MARK) {
            printf(" (Result: Passed)\n");
        } else {
            printf(" (Result: Failed)\n");
        }
    }
}
