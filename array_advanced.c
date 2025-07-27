#include <stdio.h>

#define NUM_STUDENTS 5
#define PASSING_MARK 40

// --- Function Declarations  ---
void getMarks(int marksArray[], int size);
char calculateGrade(int mark);
void generateGradeCards(int marksArray[], int size);
double calculateAverageMark(int marksArray[], int size); //function to calculate the average mark


// --- Main Function ---
int main() {
    int studentMarks[NUM_STUDENTS];
    double averageMark; 

    getMarks(studentMarks, NUM_STUDENTS);
    generateGradeCards(studentMarks, NUM_STUDENTS);

    // NEW: Call the function to calculate and display the class average
    averageMark = calculateAverageMark(studentMarks, NUM_STUDENTS);
    printf("\n----------------------------------\n");
    printf("Class Average Mark: %.2f\n", averageMark);
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
    } else {
        return 'F';
    }
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
        sum = sum + marksArray[i]; // Add each mark to the sum
    }
    
    return (double)sum / size;
}
