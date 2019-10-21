// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Jaeyoon Lee
// Created on: Oct 2019
// This program display sum of 1 to user integer

#include <iostream>

main() {
    // this function display sum of 1 to user integer
    int positiveInteger;
    int loopCounter = 0;
    int result = 0;

    // input
    std::cout << "Enter the number you want to add from 1: ";
    std::cin >> positiveInteger;

    // process
    while (loopCounter <= positiveInteger) {
        result = result + loopCounter;
        loopCounter = loopCounter + 1;
    } std::cout << "Sum of 1 to " << positiveInteger << " is " << result << std::endl;
}