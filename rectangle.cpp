// !/usr/bin/env python3
// Copyright [2021] Rohnin Barrette"  [legal/copyright]
// Created by: Rohnin Barrette
// Created on: Sept 2021
// This is a program that calculates the
// area and perimiter of a rectangle with user input.

#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "Enter lenght of the rectangle (mm): ";
    std::cin >> length;
    std::cout << "Enter width of the rectangle (mm): ";
    std::cin >> width;

    // process
    area = length * width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "perimeter is " << perimeter << " mm. " << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
