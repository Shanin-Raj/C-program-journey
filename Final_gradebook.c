#include <stdio.h>

// --- Constant Definitions ---
#define NUM_STUDENTS 5
#define PASSING_MARK 40

// --- Function Declarations (Prototypes) ---
void getMarks(int marksArray[], int size);
char calculateGrade(int mark);
void generateGradeCards(int marksArray[], int size);
double calculateAverageMark(int marksArray[], int size);
int findHighestMark(int marksArray[], int size); // NEW
int findLowestMark(int marksArray[], int size);  // NEW


// --- Main Function ---
int main() {
    int studentMarks[NUM_STUDENTS];
    double averageMark;
    int highestMark, lowestMark; // NEW variables

    getMarks(studentMarks, NUM_STUDENTS);
    generateGradeCards(studentMarks, NUM_STUDENTS);

    averageMark = calculateAverageMark(studentMarks, NUM_STUDENTS);
    
    // NEW: Call functions to find highest and lowest marks
    highestMark = findHighestMark(studentMarks, NUM_STUDENTS);
    lowestMark = findLowestMark(studentMarks, NUM_STUDENTS);

    // --- Final Report ---
    printf("\n----------------------------------\n");
    printf("        CLASS REPORT\n");
    printf("----------------------------------\n");
    printf("Class Average Mark: %.2f\n", averageMark);
    printf("Highest Mark in Class: %d\n", highestMark);
    printf("Lowest Mark in Class: %d\n", lowestMark);
    printf("----------------------------------\n");

    return 0;
}


// --- Function Definitions ---

void getMarks(int marksArray[], int size) {
    printf("Please enter the numerical marks (0-100) for %d students:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marksArray[i]);
    }
}

char calculateGrade(int mark) {
    if (mark >= 90) return 'S';
    if (mark >= 80) return 'A';
    if (mark >= 70) return 'B';
    if (mark >= 60) return 'C';
    if (mark >= 50) return 'D';
    return 'F';
}

void generateGradeCards(int marksArray[], int size) {
    printf("\n--- Student Grade Cards ---\n");
    for (int i = 0; i < size; i++) {
        int currentMark = marksArray[i];
        char currentGrade = calculateGrade(currentMark);
        printf("Student %d: Mark = %d, Grade = %c", i + 1, currentMark, currentGrade);
        if (currentMark >= PASSING_MARK) {
            printf(" (Result: Passed)\n");
        } else {
            printf(" (Result: Failed)\n");
        }
    }
}

double calculateAverageMark(int marksArray[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marksArray[i];
    }
    return (double)sum / size;
}

/**
 * @brief NEW: Finds the highest mark in an array.
 * @param marksArray The integer array containing the marks.
 * @param size The number of marks in the array.
 * @return The highest mark.
 */
int findHighestMark(int marksArray[], int size) {
    // Assume the first student has the highest mark to start.
    int maxMark = marksArray[0];
    // Loop from the second student onwards.
    for (int i = 1; i < size; i++) {
        // If we find a mark that is higher than our current max...
        if (marksArray[i] > maxMark) {
            // ...update our max to this new higher mark.
            maxMark = marksArray[i];
        }
    }
    return maxMark;
}


int findLowestMark(int marksArray[], int size) {
    // Assume the first student has the lowest mark to start.
    int minMark = marksArray[0];
    // Loop from the second student onwards.
    for (int i = 1; i < size; i++) {
        // If we find a mark that is lower than our current min...
        if (marksArray[i] < minMark) {
            // ...update our min to this new lower mark.
            minMark = marksArray[i];
        }
    }
    return minMark;
}
