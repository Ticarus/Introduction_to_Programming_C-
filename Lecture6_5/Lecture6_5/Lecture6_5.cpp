// Lecture6_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Gun {
public:
    std::string name;
    int magCap;
    std::string color;
};

class Ak47 : public Gun {
public:
    bool isFullAuto;
    int strapLength;
    bool hasScope;

    void fire() {

    }
};

class Pistol : public Gun {
public:
    int slideSkin;

    void shoot() {

    }
};

class M4 : public Gun {
public:
    bool isFullAuto;
    int strapLength;
    int slidePosition;

    void shoot() {

    }
};

void show(Gun* gunPtr) {  //Doing an upcast operation here to be able to use the same function for different types of guns
    std::cout << gunPtr->name << std::endl;
}

int main()
{
    Ak47 ak47;
    ak47.name = "Ak47";

    show(&ak47);

    Pistol pistol;
    pistol.name = "Glock";

    show(&pistol);

    M4 m4;
    m4.name = "M4";

    show(&m4);
}

