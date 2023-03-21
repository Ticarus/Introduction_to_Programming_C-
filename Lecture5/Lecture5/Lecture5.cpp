// Lecture5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iterator>  //To be able to use std::size

//using namespace std; //in order to not put std everytime use this 

void arrays();
void arraysForLoop();
void arraysNestedForLoop();
void arraysElementCount();
void test(int array[3], int size, char cArray[4]);  //Not the best practice
void test2(char* cArray);       //Does the same as test() but you know it gives the memory address of the array when you look at it

int main()
{
    int array[3]{ 1,2,3 };
    int size = 3;

    char cArray[]{ "Eren" };

    test(array, size, cArray);
    test2(cArray);
}

void arrays() {
    int grades[5] = { 10, 50, 100, 70, 80 };
    int highScores[5];      //Always give a default value!!
    int scores[5]{};  
    int* ptr = grades + 1;      //grades[1]

    std::cout << grades[2] << "\n";
    std::cout << highScores[2] << "\n";     //Always give a default value!!
    std::cout << scores[2] << "\n";

    std::cout << grades << "\n";
    std::cout << *grades << "\n";

    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";
}

void arraysForLoop() {
    int grades[3]{ 10,20,30 };

    for (int i = 0; i < 3; i++) {
        std::cout << "-----\n";
        std::cout << grades[i] << "\n";
    }

    std::cout << "-----\n";
}

void arraysNestedForLoop() {
    int number[3][2]{ {1,2},{4,5},{7,8} };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; i < 2 ; j++) {
            std::cout << number[i][j] << std::endl;    //It works strangely 
        }
    }
}

void arraysElementCount() {
    int number[3][2]{ {1,2},{4,5},{7,8} };

    std::cout << std::size(number[0]);
}

void test(int array[3], int size, char cArray[4]) {     //Not the best practice
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << std::endl;
    }
    std::cout << cArray << std::endl;
}

void test2(char* cArray) {      //Does the same as test() but you know it gives the memory address of the array when you look at it
    std::cout << cArray << std::endl;
}