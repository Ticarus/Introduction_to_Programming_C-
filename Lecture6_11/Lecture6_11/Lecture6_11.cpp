// Lecture6_11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Book {
    public:
        static int bookCount;
        
        Book() {
            bookCount++;
        }

        static int get() {
            return bookCount;
        }

};
int Book::bookCount = 0;

void test() {
    static int a = 0;  //static keyword gives the ability to persist in the memory even when the function is destroyed
    a++;
    std::cout << a << std::endl;
}

void bookTest() {
    static Book book;
}

int main()
{
    test();
    test();
    test();

    Book book0;
    Book book1;
    Book book2;
    Book book3;
    Book book4;

    std::cout << "Book Count:" << Book::bookCount << std::endl;

    bookTest();

    std::cout << Book::get() << std::endl;
}