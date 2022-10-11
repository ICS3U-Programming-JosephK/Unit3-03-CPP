// Copyright (c) 2022 Immaculata HS All rights reserved.
//
// Created by: Joseph Kwon
// Created on: Oct 07 2022
// This program checks if a user's integer guess is correct

#include <iostream>
#include <random>

int main() {
    // initializing variables
    int secretNumber, userGuess;

    int guess;

    // assigning a random integer from 0-9 to secretNumber
    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    secretNumber = idist(rgen);

    // Asking for user's guess
    std::cout << "The secret number is between 0-9 \n";
    std::cout << "Enter your guess \n\n >> ";
    std::cin >> userGuess;
    std::cout << "\n"
              << std ::endl;

    // process, check if the user's guess matches the number
    // output string if statement is true
    if (secretNumber == userGuess) {
        std::cout << "Your guess is correct!";

    // process, check if the user's guess does not match the number
    } else {
        std::cout << "Your guess is correct! ";
        std::cout << secretNumber << "was the correct number \n";
        }
}
