// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This is program

#include <iostream>
#include <random>
#include <string>

main() {
    // this function uses a try statement
    std::string integer;
    int number;
    int randomNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,9]
    randomNumber = idist(rgen);

    // input
    std::cout << "Enter the number between 0-9: ";
    std::cin >> integer;

    // process & output
    try {
        number = std::stoi(integer);
        if (number < 0) {
            // output
            std::cout << "You need enter number 0-9" << std::endl;
        } else if (number > 9) {
            // output
            std::cout << "You need enter number 0-9" << std::endl;
        } else if (number = randomNumber) {
            // output
            std::cout << "You guessed correct!" << std::endl;
        } else {
            // output
            std::cout << "You guessed wrong! The number was "
            << randomNumber << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This was not a number";
    }

    std::cout << "" << std::endl;
    std::cout << "Thanks for playing" << std::endl;
}
