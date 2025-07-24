#include <stdio.h>

// --- Function Declaration  ---
// This tells the main function that a function named 'checkGuess' exists
// and what kind of data it expects and returns.
void checkGuess(int secretNumber, int playerGuess);


// The main function is where the program starts.
int main() {
   
    int secretNumber = 7; // this is the number we want the player to guess
    
    int playerGuess; // This is the player's guess, which we will get from user input.

    // --- Game Introduction ---
    printf("I have chosen a number between 1 and 10.\n");
    printf("Can you guess what it is?\n");

    // --- Get User Input ---
    printf("Enter your guess: ");
    scanf("%d", &playerGuess);

    // --- Function Call ---
    // Instead of putting the logic here, we call our function
    // and pass the necessary data to it.
    checkGuess(secretNumber, playerGuess);

    return 0;
}


// --- Function Definition ---
// This is the actual code for our function. It takes two integers as input.
// 'void' means this function does not return any value.
void checkGuess(int secretNumber, int playerGuess) {
    if (playerGuess == secretNumber) {
        printf("Congratulations! You guessed it correctly!\n");
    } 
    else if (playerGuess == secretNumber - 1 || playerGuess == secretNumber + 1) {
        printf("You are close!\n");
    }
    else if (playerGuess < secretNumber) {
        printf("Sorry, your guess is too low.\n");
    } else {
        printf("Sorry, your guess is too high.\n");
    }
}