// copyright (c) 2020 Joshua Yeung All rights reserved

// Created by: Joshua Yeung
// Created on September 2021
// This program calculates the area and perimeter of a rectangle
// with radius inputted from the user

#include <iostream>

int main() {
    // this function calculates the area and perimeter of a rectangle
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter length of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process
    area = length * width;
    perimeter = 2 * (length + width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm² " << std::endl;
    std::cout << "Perimeter is " << perimeter << " mm " << std::endl;
    
    std::cout << "\ndone" << std::endl;
}
