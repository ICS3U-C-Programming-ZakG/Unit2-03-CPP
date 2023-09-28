// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Date Created: Sep. 28, 2023
// This program calculates the circumference of a circle using
// user-given radius in cm and TAU.

#include <iostream>

int main() {
    // Declare constants
    const float TAU = 6.28;

    // Declare variables
    float radius, circumference;

    // Get radius from user
    std::cout << "Please enter a radius (cm): ";
    std::cin >> radius;

    // Calculate circumference
    circumference = radius * TAU;

    // Display circumference
    std::cout << "\n";
    std::cout << "Circumference: " << circumference << "cm" << std::endl;
}
