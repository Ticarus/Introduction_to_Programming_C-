// Lecture6_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

class Ak47 : public Gun{  //This is inheritance in C++ (Ak47 inherits from Gun)
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

class Glock : public Gun{   //This is inheritance in C++ (Glock inherits from Gun)
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

class M1 : public Gun{  //This is inheritance in C++ (M1 inherits from Gun)
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

int main()
{
    Ak47 ak47;
    ak47.name = "Ak47 new design";
    //ak47.value = 20;  //protected data fields can only be used in the inheriting class

    Ak47* ak47Ptr = &ak47;  //This is a pointer
    ak47Ptr->name = "Test";
    ak47Ptr->shoot();

    Ak47& ak47Ref = ak47;  //This is a refference
    ak47Ref.name = "Test";

    test(ak47, &ak47);
    test(ak47Ref, ak47Ptr);

    M1 m1;
    m1.magCapacity = 30;
}
