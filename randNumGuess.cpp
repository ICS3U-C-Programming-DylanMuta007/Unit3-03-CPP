// Copyright (c) 2025 Dylan Mutabazi All rights reserved
//
// Created by Dylan Mutabazi
// Created March 2025
// This program makes the user guess a randomnumber between 0 and 9
#include <iostream>

int main() {
    // creates two variables
    int userGuess;
    int randomNumber;

    srand((unsigned)time((NULL)));  // initializes srand

    // assigns random number between 0 - 9 to randomNumber
    randomNumber = rand() % 9 + 1;

    // assigns user input to variable userGuess
    std::cout << "chose a random number between 0 - 9: ";
    std::cin >> userGuess;
    std::cout << "" << std::endl;

    // checks if userGuess == randomNumber
    if (userGuess == randomNumber) {
        // if it does it prints "good guess mate"
        std::cout << "Good guess mate!!!\n";

    } else {
        // if not prints "sorry, the correct guess was :"
        std::cout << "sorry, the correct guess was :";
        // shows correct answer
        std::cout << randomNumber << std::endl;
    }
}
