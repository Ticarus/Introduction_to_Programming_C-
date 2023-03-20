// Lecture4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void BasicCalculatorV1();
void BasicCalculatorV2();
void ForLoopTest();
void WhileLoopTest();
void ContinueTest();

int main()
{
    BasicCalculatorV2();
}

void BasicCalculatorV1() {
    int choice;
    int a = 0;
    int b = 0;
    bool runAgain;
    char runAgainChoice;

    do{
        std::cout << "Input your desired operation:\n1) Summation\n2) Subtraction\n3) Multiplication\n4) Division\n";
        std::cin >> choice;

        if (choice >= 1 && choice <= 4) {
            std::cout << "Input first number: ";
            std::cin >> a;
            std::cout << "Input second number: ";
            std::cin >> b;

            if (choice == 1) {
                std::cout << "Summation: " << (a + b) << "\n";
            }
            else if (choice == 2) {
                std::cout << "Subtraction: " << (a - b) << "\n";
            }
            else if (choice == 3) {
                std::cout << "Multiplication: " << (a * b) << "\n";
            }
            else if (choice == 4) {
                std::cout << "Division: " << (a / b) << "\n";
                std::cout << "Remainder: " << (a % b) << "\n";
            }
        }
        else {
            std::cout << "Input error!";
        }

        std::cout << "Do you want to use the calculator again? Y/N: ";
        std::cin >> runAgainChoice;

        if (runAgainChoice == 'Y' || runAgainChoice == 'y') {
            runAgain = true;
        }
        else if (runAgainChoice == 'N' || runAgainChoice == 'n') {
            runAgain = false;
        }
        else {
            std::cout << "Invalid input!";
            break;
        }

    }while (runAgain);

    
}

void BasicCalculatorV2() {
    int choice;
    int a = 0;
    int b = 0;

    std::cout << "Input your desired operation:\n1) Summation\n2) Subtraction\n3) Multiplication\n4) Division\n";
    std::cin >> choice;
    
    if (choice < 1 || choice > 4) {
        goto stop;
    }

    std::cout << "Input first number: ";
    std::cin >> a;
    std::cout << "Input second number: ";
    std::cin >> b;

    switch (choice) {
    case 1: 
        std::cout << "Summation: " << (a + b) << "\n";
        break;
    case 2: 
        std::cout << "Subtraction: " << (a - b) << "\n";
        break;
    case 3: 
        std::cout << "Multiplication: " << (a * b) << "\n";
        break;
    case 4: 
        std::cout << "Division: " << (a / b) << "\n";
        std::cout << "Remainder: " << (a % b) << "\n";
        break;
    default: 
        std::cout << "Invalid Choice!";
    }

stop:
    std::cout << "Stopped!";
}

void ForLoopTest() {
    for (int i = 0; i < 100; i+=2) {
        std::cout << "O-L-" << i << "\n";
        for (int j = 0; j < i; j++) {
            std::cout << "I-L-" << j << "\n";
        }
    }
}

void WhileLoopTest() {
    int i = 0;
    
    while (i <= 10) {
        std::cout << i << "\n";
        i++;
    }
}

void ContinueTest() {
    int input;
    int i = 0;

    while (i < 10) {
        std::cout << i << "\n" << "Confirm output number by typing it again in order to continue" << "\n";
        std::cin >> input;
        if (input == i) {
            i++;
            continue;
            i++;
        }
        else {
            std::cout << "Confirmation failed exiting the program!";
            break;
        }
    }
}