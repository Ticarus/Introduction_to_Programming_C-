// Lecture6_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Gun {
public:
    std::string name;
    int magCap;
    std::string color;

    void shoot() {
        std::cout << "Gun sound" << std::endl;
    }
};
class Ak47 : public Gun {
public:
    bool isFullAuto;
    int strapLength;
    bool hasScope;
    //This is overriding
    void shoot() {
        Gun::shoot();  //This part calls Gun class' method
        std::cout << "bam bam" << std::endl;
    }
};

class Pistol : public Gun {
public:
    int slideSkin;

    void shoot() {
        std::cout << "bum bum" << std::endl;
    }
};

class M4 : public Gun {
public:
    bool isFullAuto;
    int strapLength;
    int slidePosition;

    void shoot() {
        std::cout << "bom bom" << std::endl;
    }
};

int main()
{
    Ak47 ak47;

    ak47.shoot();
}
