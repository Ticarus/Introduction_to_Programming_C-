// Lecture6_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Calculate {
    public:
        int height;
        int width;
        int area;

        void input() {
            std::cout << "Input height: ";
            std::cin >> height;

            std::cout << "Input width: ";
            std::cin >> width;
        }

        void calculate() {
            area = height * width;
            std::cout << area;
        }
};

int main()
{
    Calculate cal;
    cal.input();
    cal.calculate();
}
