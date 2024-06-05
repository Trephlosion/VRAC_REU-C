/* Challenge4_customCalculator.cpp : This file contains the 'main' function.Program execution begins and ends there.
* 
Problem Statement
Create 4 functions above your main function : add, subtract, multiply, and divide.Each function should take in two integers and return the result of the operation.

Then in your main function, create 2 integers and apply each function to them.Print out the result of each function
*/


#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void add() {
    int a, b;
    cout << "\nEnter two numbers to add.\nNumber 1: ";
    cin >> a;
    cout << "\nNumber 2: ";
    cin >> b;

    cout << "The sum of " << a << " and " << b << " is " << a + b << "\n";
}//end add()

void sub() {
    int a, b;
    cout << "\nEnter two numbers to subtract.\nNumber 1: ";
    cin >> a;
    cout << "\nNumber 2: ";
    cin >> b;

    cout << "The difference of " << a << " and " << b << " is " << a - b << "\n";
}//end add()

void mult() {
    int a, b;
    cout << "\nEnter two numbers to multiply.\nNumber 1: ";
    cin >> a;
    cout << "\nNumber 2: ";
    cin >> b;

    cout << "The product of " << a << " and " << b << " is " << a * b << "\n";
}//end add()

void div() {
    float a, b;
    cout << "\nEnter two numbers to divide.\nNumerator: ";
    cin >> a;
    cout << "\nDenominator: ";
    cin >> b;

    cout << "The quotient of " << a << " and " << b << " is " << a / b << "\n";
}//end add()

void exp() {
    int a, b;
    cout << "\nEnter two numbers to create a exponent.\nBase: ";
    cin >> a;
    cout << "\nExponent: ";
    cin >> b;

    cout << "The product of " << a << " to the power of " << b << " is " << pow(a,b) << "\n";
}//end add()


int main()
{
    int choice;
    cout << "\nWhat would you like to do? \n\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Exponent\n6) Stop\n\nYour Choice: ";
    cin >> choice;


    while (choice != 6) {
       
        switch (choice) {

        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mult();
            break;
        case 4:
            div();
            break;
        case 5:
            exp();
            break;

        default:
            cout << "\nPlease enter a valid number.\n";
            break;
        }
        cout << "\nWhat would you like to do? \n\n1) Add\n2) Subtract\n3) Multiply\n4) Divide\n5) Exponent\n6) Stop\n\nYour Choice: ";
        cin >> choice;
    }

    cout << "\nCalculation DONE!\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
