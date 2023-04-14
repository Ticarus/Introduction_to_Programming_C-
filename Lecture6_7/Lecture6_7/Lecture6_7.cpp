// Lecture6_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Gun {
    public:
        std::string name;
        int magCap;
        std::string color;

        virtual void shoot() = 0;  //This is a virtual method, to be able to use a method multiple times with different subclasses
};

class Ak47 : public Gun{
    public:
        bool isFullAuto;
        int strapLength;
        bool hasScope;

        void giveName(/*Ak47* this*/std::string name) {  //C++ adds that this and programmer can't do that it is illegal and C++ will give an error
            this->name = "Ak47";
            //name = name;  //If you do it like this, it would confuse the compiler
            this->name = name;
        }

        void shoot() { 
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

void doShoot(Gun* gunPtr) {
    gunPtr->shoot();
}

int main()
{
    Ak47 ak47;
    Pistol pistol;
    M4 m4;

    doShoot(&ak47);
    doShoot(&pistol);
    doShoot(&m4);
}
