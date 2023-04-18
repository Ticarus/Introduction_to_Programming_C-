// Lecture6_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//const object
//const method
//const variable 
//const parameter
//const pointer
//return const

class Gun {
private:
    int value = 10;
public:
    /*
    int get() const {  //if const is written like this it means you can't change this class' value 
        value = 600;
        return value;
    }
    */
    int const * get() {  
        return &value;
    }

    int getValue() {
        return value;
    }
};

int main()
{
    Gun gun;
    const int* a = gun.get();

    std::cout << gun.getValue();
}
