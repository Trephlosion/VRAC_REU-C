// Challenge_arrayValidation2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// 
// You are part of a programming team tasked with validating data as it passes through a system of applications. Your job is to make sure the data is in correct format before it is passed to the next part of the system.
//
//The data is an array of integers.
//
//In order for the data to be valid, it must meet the following 3 criteria:
//
//The array must contain exactly 5 elements.
//The array must contain only positive integers.
//The sum of the array must be 10.
//

#include <iostream>

bool sizeCheck(int a[])
{
    if (sizeof(a) != 5)
    {
        return 0;
    }

    return 1;
}


bool valueCheck(int a[])
{
    for (int i = 0; i < sizeof(a); i++)
    {
        if (a[i] < 0) {
            return 0;
        }
    }
    return 1;
}

bool sumsToTen(int a[])
{
    int tot = 0;
    for (int i = 0; i < sizeof(a); i++)
    {
        tot += a[i];
    }

    if (tot == 10) {
        return 1;
    }
    return 0;
}


bool isValid(int arr[]) {
    if (sizeCheck(arr) && valueCheck(arr) && sumsToTen(arr)) {
        return 1;
    }
    return 0;

}


int main(){

    int siz, num;

   /* std::cout << "\nEnter array size: ";

    std::cin >> siz;*/

    

    int array[5];

    for (int i = 0; i < 5; i++) {

        std::cout << "\nEnter num. ";

        std::cin >> num;

        array[i] = num;

        
    }


    if (isValid(array)) {
        std::cout << "\nARRAY VALID!\n";
    }
    else {
        std::cout << "\nINVALID ARRAY.\n";
    }
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
