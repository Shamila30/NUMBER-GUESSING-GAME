#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Generate a random number between 1 and 100
    int numberToGuess = std::rand() % 100 + 1;
    int userGuess = 0;
    int numberOfAttempts = 0;

    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    // Loop until the user guesses the correct number
    do {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        numberOfAttempts++;

        if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number in " << numberOfAttempts << " attempts." << std::endl;
        }

    } while(userGuess!= numberToGuess);
    return 0;
}
