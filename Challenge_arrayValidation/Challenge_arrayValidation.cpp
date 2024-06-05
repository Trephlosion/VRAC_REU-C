/* Challenge_arrayValidation.cpp : This file contains the 'main' function.Program execution begins and ends there.
* 
* 
* 
* Create a function called sumsToTen which takes two arguements (an integer array and its size) and returns true only if the arrays contents sum to 10. Otherwise, return false.

Call this function in main and print out the result.
*/

#include <iostream>
#include <cstdlib>


int sumsToTen(int a[], int s)
{
    int tot = 0;
    for (int i = 0; i < s; i++)
    {
        tot += a[i];
    }

    if (tot == 10) {
        return 1;
    }
    return 0;
}

int main()
{
    //int size = rand(1,10);
    
    int arr[] = {0,5,9,5,6,3};

   std::cout << sumsToTen(arr, 5);

     
   
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
