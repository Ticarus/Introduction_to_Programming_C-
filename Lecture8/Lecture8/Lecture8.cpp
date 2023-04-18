// Lecture8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This lecture is for templates

#include <iostream>

template<typename T, typename U>
T max(T a, U b) {
    return (a >= b) ? a : b;
}

template<typename T>
class Math {
    public:
        T a{};
        T b{};

        T sum() {
            return a + b;
        }
};

class Gun{};
class Bullet{};

template<class T>
T* createObject() {
    T object;
    return &object;
}

template<typename T>
T* createObject(T* object) {
    return object;
}

int main()
{
    std::cout << createObject<Gun>() << std::endl;
    std::cout << createObject<Gun>(createObject<Gun>()) << std::endl;

    Gun gun;
    std::cout << createObject<Gun>(&gun) << std::endl;

    Math<int> math0;
    Math<float> math1;

    math0.a = 1;
    math0.b = 2;
    std::cout << math0.sum() << std::endl;

    math1.a = 1.2f;
    math1.b = 2.4f;
    std::cout << math1.sum() << std::endl;

    std::cout << max(10,5) << std::endl;
    std::cout << max(1.1f, 5.5f) << std::endl;
    std::cout << max<>(11,6) << std::endl;
    std::cout << max<int, float>(15,45.45) << std::endl;
}