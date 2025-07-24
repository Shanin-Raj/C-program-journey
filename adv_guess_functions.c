#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

// --- Function Declarations (Prototypes) ---

// This function now returns an integer.
int checkGuess(int secretNumber, int playerGuess); 

// --- Main Function ---
int main() {
    // --- Variables ---
    int secretNumber;
    int playerGuess;
    int guessResult;

    // --- Generate a Random Secret Number ---
    // 'srand(time(0))' seeds the random number generator.
    // This ensures you get a different random number each time you play.
    // The secret number remains same for the duration of the game.
    srand(time(0)); 
    secretNumber = (rand() % 10) + 1; // Generates a random number between 1 and 10
    
    // you can get random number between 1 and 100 by changing the above line to:
    // secretNumber = (rand() % 100) + 1;

    // --- Game Introduction ---
    printf("I have chosen a number between 1 and 10.\n");
    printf("You have multiple tries to guess it.\n");

    // --- Game Loop ---
    // This loop will continue as long as the guess is not correct.
    // By using a do-while loop it ensure the player gets at least one guess.
    // The loop will break when the player guesses correctly.
    do {
        // Get User Input
        printf("\nEnter your guess: ");
        scanf("%d", &playerGuess);

        // Call our function and store the returned value
        // The function will return 0 if the guess is correct,
        // -1 if the guess is too low, and 1 if the guess is too high.

        guessResult = checkGuess(secretNumber, playerGuess);

        // Main function decides what message to print based on the return value
        if (guessResult == 1) {
            printf("Sorry, your guess is too high.\n");
        } else if (guessResult == -1) {
            printf("Sorry, your guess is too low.\n");
        }

    } while (guessResult != 0); // Loop continues until checkGuess returns 0

    // This line only runs after the loop is broken (when the guess is correct).
    printf("\nCongratulations! You guessed it correctly! The number was %d.\n", secretNumber);

    return 0;
}


// --- Function Definition ---
// This function now returns an int instead of void.
int checkGuess(int secretNumber, int playerGuess) {
    if (playerGuess == secretNumber) {
        return 0; // Return 0 if the guess is correct
    } else if (playerGuess < secretNumber) {
        return -1; // Return -1 if the guess is too low
    } else {
        return 1;  // Return 1 if the guess is too high
    }
}
