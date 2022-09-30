// Copyright (c) 2022 Patrice Pat-Odita All rights reserved.
//
// Created by: Patrice Pat-odita
// Created on: Sep 29 2022
// This program shows how local and global variables work

#include <iostream>

// global variable
int variableA = 25;

void localVariable() {
    // this shows what happens with local variables
    int variableA = 10;
    int variableB = 30;
    int variableC = variableA + variableB;
    std::cout << "Local variableA, variableB, variableC: " << variableA
              << " + " << variableB << " = " << variableC << std::endl;
}

void globalVariable() {
    // this shows what happens with global variables
    variableA = variableA + 1;
    int variableB = 30;
    int variableC = variableA + variableB;
    std::cout << "Local variableA, variableB, variableC: " << variableA
              << " + " << variableB << " = " << variableC << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
