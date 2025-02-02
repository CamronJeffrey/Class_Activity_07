// Class_Activity_07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "This program acts as a leap year checker. \n";
    cout << "So please input a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            }
            else {
                cout << year << " is not a leap year." << endl;
            }
        }
        else {
            cout << year << " is a leap year." << endl;
        }
    }
    else {
        cout << year << " is not a leap year." << endl;
    }
}

