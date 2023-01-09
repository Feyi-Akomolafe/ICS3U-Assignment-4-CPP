// Copyright (c) 2021 Feyi AKomolafe All rights reserved

// Created by: Feyi Akomolafe
// Created on: November 2022
// This program is assignment 4

#include <iomanip>
#include <iostream>

int main() {
    // This is the assignment 4 function

    int units;
    float final_price;
    int price = 100;
    float sub_to;
    float total;
    float HST = 1.13;
    std::string items;

    // Input
    std::cout << "How many units would you like: ";
    std::cin >> items;
    std::cout << "" << std::endl;

    // Process and Output
    try {
        units = std::stoi(items);
        if (units >= 1000) {
            final_price = (price - (price * 0.1));
        } else {
            final_price = price;
        }
        sub_total = (units * final_price);
        total = (sub_total * HST);
        std::cout << "The total is $" << std::fixed
                  << std::setprecision(2) << std::setfill('0') << total << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
