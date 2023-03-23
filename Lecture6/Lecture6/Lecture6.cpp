// Lecture6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Math {
public:
    int a;
    int b;
    int result = 0;

    void sum() {
        this->result = this->a + this->b;
    }

    void print() {
        std::cout << this->result << std::endl;
    }
};

int sum(int a, int b);
void print(int p);

int main()
{
    //Procedural 
    int a = 10;
    int b = 20;
    std::cout << a + b << std::endl;

    //Functional
    print(sum(a, b));

    //Object Oriented
    Math mat;
    mat.a = 10;
    mat.b = 20;
    mat.sum();
    mat.print();
}

int sum(int a, int b) {
    return a + b;
}

void print(int p) {
    std::cout << p << std::endl;
}