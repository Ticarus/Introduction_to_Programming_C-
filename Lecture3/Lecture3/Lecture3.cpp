// Lecture3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using fint = int(*)(int, int);      //about callback function (lookup in the internet)

//declaration and definition

//declarations(start)
void message();  
void message(char msg);
void message(char msg1, char msg2);
void message(char msg1, int num1, char msg2, float num2);
void sum(int num1, int num2);
void sum(int num1, int num2, int num3);
int summation(int num1, int num2);  
int summation(int num1, int num2, int num3);
int summation(int num1, int num2, int num3, int num4);
int summation(int num1, int num2, int num3, int num4, int num5);
void print(std::string text = "No string parameter", int num = 0, bool isOn = false);
int get(int(*fint)(int, int));      //about callback function (lookup in the internet)
int getSum(fint f);     //about callback function (lookup in the internet)
inline int subtraction(int num1, int num2);
//declaration(end)

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int b = get(summation);     //about callback function (lookup in the internet)
    int c = getSum(summation);      //about callback function (lookup in the internet)
    
    message();
    message('A');
    message('A','b');
    message('A', 420, 'b', 3.14);
    sum(1, 2);
    sum(1, 2, 3);
    std::cout << summation(1, 2) << "\n";
    std::cout << summation(1, 2, 3) << "\n";
    std::cout << summation(1, 2, 3, 4) << "\n";
    std::cout << summation(1, 2, 3, 4, 5) << "\n";
    std::cout << summation(num1, num2, num3, num4, num5) << "\n";
    print();
    print("Hello", 420, true);
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << subtraction(num1, num2);
}

//definitions(start)
void message() {
    std::cout << "Hello World!\n";
}

void message(char msg) {
    std::cout << msg << "\n";
}

void message(char msg1, char msg2) {
    std::cout << msg1 << msg2 << "\n";
}

void message(char msg1, int num1, char msg2, float num2) {
    std::cout << msg1 << " " << num1 << " " << msg2 << " " << num2 << "\n";
}

void sum(int num1, int num2) {
    std::cout << num1 + num2 << "\n";
}

void sum(int num1, int num2, int num3) {
    std::cout << num1 + num2 + num3 << "\n";
}

int summation(int num1, int num2) {
    return num1 + num2;
}

int summation(int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

int summation(int num1, int num2, int num3, int num4) {
    message();
    message('S');
    return num1 + num2 + num3 + num4;
}

int summation(int num1, int num2, int num3, int num4, int num5) {
    message();
    message('S');
    std::cout << summation(1, 2) << "\n";
    return num1 + num2 + num3 + num4 /*+ num5*/;
}

void print(std::string text, int num, bool isOn) {
    std::cout << text << "\n" << num << "\n" << isOn << "\n";
}

int get(int(*fint)(int, int)) {     //about callback function (lookup in the internet)
    int a = fint(5, 5);
    return a;
}

int getSum(fint f) {    //about callback function (lookup in the internet)
    int a = f(10, 10);
    return a;
}

inline int subtraction(int num1, int num2) {    //this is an inline function it doesn't create a whole function and parameters just copies the code inside the function
    return num1 - num2;
}
//definitions(end)