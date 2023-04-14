// Lecture6_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Encapsulation introduction lecture
#include <iostream>

class Payment {
private:
    float price;
    std::string currency;
public:
    void setPrice(float p) {
        if (p > 0) {
            price = p;
        }
        else {
            price = 0.1;
        }
    }

    void setCurrency(std::string c) {
        currency = c;
    }

    void pay() {
        std::cout << price << currency <<"Payment received" << std::endl;
    }
};

int main()
{
    Payment pay;
    pay.setPrice(50.40);
    pay.setCurrency("TL");
    pay.pay();

    pay.setPrice(-50.40);
    pay.pay();
}

