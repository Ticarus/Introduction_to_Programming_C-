#include <iostream>

int main()
{
   /*
    int num1 = 5;
    int num2 = 10;
    int sum = num1 + num2;
    
    std::cout << sum;
   
    char d = 'a';

    std::cout << d;

    char c = 120;

    std::cout << c;

    char a = 10;
    char b = 10;

    std::cout << a + b;

  
    unsigned short x{65535};
    std::cout << "x value : " << x << '\n';

    x = 65536;
    std::cout << "new value of x : " << x << "\n";

    x = 65537;
    std::cout << "x last value : " << x << '\n';
  

    unsigned int x{ 3 };
    unsigned int y{ 5 };
    //Because both of them are unsigned integer compiler thinks the esult will be an unsigned int too
    std::cout << x - y << '\n';
    

    float f{ 123456789.0f };
    std::cout << f << '\n';

    double d{123456789.0};
    std::cout << d << '\n';


    int8_t d = 115; //C++ thinks this is character

    int8_t a = 20;  //because C++ knows that it is going to be summed it is not changing the numbers to characters
    int8_t b = 30;

    std::cout << d << '\n';
    std::cout << a + b << '\n';

   

    unsigned char d = 6; //C++ thinks they are not characters but numbers because they are being summed
    char a = 6;

    std::cout << a + d << '\n';

    */

    /*
    bool a = 1;

    std::cout << sizeof(a);
    */

    /*
    auto d = "test";
    std::cout << d;
    */
    /*
    auto d = 1.25;
    std::cout << d;
    */
    
    /*
    //(Literal Constants)
    bool isActive = true;
    std::cout << "hello world!";

    //(Symbolic Constants)
    double x{ 4 };
    x = 15;
    const double pi{ 3.14 };
    //pi = 3.55;
    */

    /*
    //closed conversion
    int a = 10;
    a = 1.4;

    std::cout << a;
    

    //open conversion
    int b = 10;
    b = static_cast<int>(5.9);
    std::cout << b;

    char ch{ 97 };
    std::cout << static_cast<int>(ch);
    */

    int a = 10;
    
    /*
    int* aPtr = &a; //This is how you can store memory address Ptr = Pointer 
    int * aPtr = &a; //These 3 are the same btw
    int* aPtr = &a;
    

    std::cout << *aPtr << '\n';
    std::cout << aPtr << '\n';
    std::cout << &aPtr << '\n';
    */

    std::cout << &*&*&*&*&*&*&a; //This could go on forever
}
