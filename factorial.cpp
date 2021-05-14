// Copyright (c) 2021 Jenoe Balote All Rights Reserved
//
// Created by: Jenoe Balote
// Created on: May 2021
// This program runs a factorial loop for positive integers

#include <iostream>
#include <string>

main() {
    // this function runs the "factorial loop" program
    std::string stringInteger;
    int numInteger;
    int loopCounter = 1;
    int product = 1;

    // input
    std::cout << "Welcome!" << std::endl;
    std::cout << "Enter a positive integer: ";
    std::cin >> stringInteger;

    // process
    try {
        numInteger = std::stoi(stringInteger);
        if (numInteger >= 0) {
            do {
                product = product * loopCounter;
                loopCounter = loopCounter + 1;
            } while (loopCounter <= numInteger);
            std::cout << numInteger << " ! = " << product << std::endl;
        } else if (numInteger < 0) {
            std::cout << "That integer is a negative number!" << std::endl;
        }
    }
    catch (std::invalid_argument) {
    // output
        std::cout << "" << stringInteger << " is invalid data." << std::endl;
    }
    std::cout << ""<< std::endl;
    std::cout << "Thanks for participating!"<< std::endl;
}
