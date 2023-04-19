// Lecture11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This lecture is about libraries
//C++ standard library site:cppreference.com
#include <iostream>
#include <string>
#include <fstream>

using namespace std;  //this means that I'll be using everything inside std so add them for me 

int main()
{
    string text= "Hello String!";
    
    cout << text << endl;

    cout << text.empty() << endl;

    text.insert(5, " this is a ");

    cout << text << endl;

    text.append(" the attachment");

    cout << text << endl;

    string* write = new string;
    ofstream* file = new ofstream("file.txt");

    if (file->is_open()) {
        cin >> *write;
        *file << *write;
        file->close();
    }
}