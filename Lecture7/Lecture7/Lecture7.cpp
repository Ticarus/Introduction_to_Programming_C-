// Lecture7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//This lecture is for exceptions

class X {
    private:
        std::string message;

    public:
        X(const std::string msg) : message(msg){}

        std::string print() {
            return this->message;
        }
};

std::string error(std::string msg) {
    return msg;
}

double division(int a, int b) {
    //try-catch could be used in other functions or classes it doesn't have to be at where throw is at
    if (b < 1) {
        throw - 1;
    }

    if (a < 1) {
        //throw false;
        //throw X("Hello");
        throw error("Hello 123");
    }
    /*
    try {
        if (b < 1) {
            throw - 1;
        }

        if (a < 1) {
            //throw false;
            //throw X("Hello");
            throw error("Hello 123");
        }

        return a / b;
    }catch (int err) {
        std::cout << err << "Can't divide with 0" << std::endl;
    }catch (bool) {
        std::cout << "Don't use 0" << std::endl;
    }catch (X err) {
        std::cout << err.print() << std::endl;
    }catch (std::string err) {
        std::cout << err << std::endl;
    }
    */
}

int main()
{
    try {
        std::cout << division(0, 3);
    }
    catch (int err) {
        std::cout << err << "Can't divide with 0" << std::endl;
    }
    catch (bool) {
        std::cout << "Don't use 0" << std::endl;
    }
    catch (X err) {
        std::cout << err.print() << std::endl;
    }
    catch (std::string err) {
        std::cout << err << std::endl;
    }
}
