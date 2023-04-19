// Lecture10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This lecture is about preprocess

#include <iostream>
#include "Library.h"  //with headers you don't have to put for example thousands of lines of code here you just write 1 line

#define NUM 1
#define SUM(NUM1,NUM2) (NUM1+NUM2)
#define DEBUG true

//int sum(int a, int b);  //even if we dont include the library just writing the functions name and then not doing anything works because the compiler goes through the files and finds the function if we don't write this however it won't work the compiler thinks it won't be able to find the function but it is actually able to 

int main()
{
        std::cout << SUM(NUM,NUM) << std::endl;

    #if DEBUG  //this works as the same as if-else
    #else
    #endif

    #ifdef DEBUG  //ifdef asks if there is a definition called DEBUG(could be another thing defined) the code inside will work
        std::cout << "Dev messages" << std::endl;
    #endif // DEBUG

    #ifndef DEBUG  //ifndef asks the opposite of ifdef, if there is a definition called DEBUG(could be another thing defined) the code inside won't work (NOTE:it is not bright like the ifdef one that means it won't work)
        std::cout << "Dev messages" << std::endl;
    #endif // !DEBUG

        std::cout << sum(10,10) << std::endl;

        Math math(20,25);
        std::cout << math.sum();
}