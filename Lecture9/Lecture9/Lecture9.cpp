// Lecture9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This lecture is for memory management

#include <iostream>

class Gun {
    public:
        int* a = nullptr;
        int* b = nullptr;
        int d{};
        
        Gun() {
            std::cout << "Created a gun" << std::endl;
        }

        Gun(int a, int b) {
            this->a = new int;
            this->b = new int;
            
            *this->a = a;
            *this->b = b;

            std::cout << "Created a gun" << std::endl;
        }
        /*
        ~Gun() {
            std::cout << "Deleted a gun" << std::endl;
        }
        */
        ~Gun() {
            delete this->a;  //always make sure you delete the fields in classes they do not get deleted when class is deleted (this is why we use deconstructor)
            delete this->b;

            std::cout << "Deleted a gun" << std::endl;
        }
};

int main()
{
    int* a = new int;  //new keyword with typename allocates a new memory location and space in the heap, this allocation exists until the program is closed or the programmer uses delete
    *a = 10;
    std::cout << a << std::endl;
    std::cout << *a << std::endl;
    delete a;  //delete keyword is used to free the allocated memory location and space in the heap

    Gun* gun0 = new Gun;  //pointers are a must when managing memory

    delete gun0;

    Gun* gun1;
    {
        Gun* gun2 = new Gun;  //because this object is created and stored in heap it doesn't get deleted when the compiler goes out of curly brackets, these curly brackets create objects etc. in stack and when the curly brackets end things in them get deleted from stack but because we allocated heap memory it stays until we use delete or we close the program in this case
        gun1 = new Gun;  //we can also allocate heap memory like this
    }
    delete gun1;

    int count = 0;

    std::cout << "What is the size of array?" << std::endl;
    std::cin >> count;

    int* array = new int[count];  //in C++ you can't do this with stack memory because the compiler needs to know the array size to be able to create an array in stack, in order to do this we use heap memory

    std::cout << "Input the elements:" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cin >> array[i];
    }

    std::cout << "Elements of the arrray:";
    for (int i = 0; i < count; i++) {
        std::cout << array[i] << " ";
    }

    delete[] array;  //this is the syntax to delete array in heap

    Gun* gun3 = new Gun(10,10);

    delete gun3;

    std::shared_ptr<Gun> ptr = std::make_shared<Gun>();  //this is how you make a shared pointer, shared pointers can count and keep all the pointers which are pointing at the same object with this way you can decrease the possibility of dangling pointers
}