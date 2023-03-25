// Lecture6_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Payment {
    public:
        float amount;
        std::string currency;

        Payment() { //Constructor
            std::cout << "Started" << std::endl;
        }

        Payment(bool f) { //Constructor
            amount = 1.2;
            currency = "tl";
        }

        Payment(bool f, std::string a) { //Constructor
            amount = 1.2;
            currency = "tl";
            std::cout << a << std::endl;
        }

        ~Payment() { //Destructor(can't take any parameters)
            std::cout << "Finished" << std::endl;
        }

        void pay() {
            std::cout << "Payment received" << std::endl;
        }
};

int main()
{
    Payment pay;
    pay.amount = 10.20;
    pay.currency = "tr";
    pay.pay();
}
