// Lecture6_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Gun {
protected:
    int value;
public:
    std::string name;
    int magCapacity;

    Gun() {
        std::cout << "Gun created" << std::endl;
    }

    ~Gun() {
        std::cout << "Gun destroyed" << std::endl;
    }
};

class Ak47 : public Gun {  //This is inheritance in C++ (Ak47 inherits from Gun)
public:
    bool isFullAuto;
    int strapLength;
    bool hasScope;

    void shoot() {
        value = 20;
    }

    Ak47() {
        std::cout << "Ak47 created" << std::endl;
    }

    ~Ak47() {
        std::cout << "Ak47 destroyed" << std::endl;
    }
};

class Glock : public Gun {   //This is inheritance in C++ (Glock inherits from Gun)
public:
    int slideDesign;

    void shoot() {
        //
    }

    Glock() {
        std::cout << "Glock created" << std::endl;
    }

    ~Glock() {
        std::cout << "Glock destroyed" << std::endl;
    }
};

class M1 : public Gun {  //This is inheritance in C++ (M1 inherits from Gun)
public:
    bool isFullAuto;
    int strapLength;
    bool slidePosition;

    void shoot() {
        //
    }

    M1() {
        std::cout << "M1 created" << std::endl;
    }

    ~M1() {
        std::cout << "M1 destroyed" << std::endl;
    }
};

void test(Ak47& ak47, Ak47* ak47Ptr) {
    
}

void test(Ak47* ak47Ptr) {
    std::cout << ak47Ptr->hasScope << std::endl;
}

int main()
{
    /*
    Ak47 ak47;
    ak47.name = "test";

    Gun* gunPtr = &ak47;  //This is upscaling

    gunPtr->name = "hello";

    std::cout << ak47.name << std::endl;

    return 0;
    */

    /*
    Ak47 ak47;
    ak47.name = "test";
    ak47.isFullAuto = 1;

    Gun* gunPtr = &ak47;  //This is upscaling

    Ak47* ak47Ptr = (Ak47*) gunPtr;  //This is downscaling (be careful when doing it always make sure that there is allocated memory for it, always know what you are doing)

    std::cout << ak47Ptr->isFullAuto << std::endl;

    return 0;
    */
    
    Glock glock;

    test((Ak47*)&glock);  //This could be called sideways casting (dangerous like downcasting if you are going to use it know what you are doing 100%)

    return 0;
}
