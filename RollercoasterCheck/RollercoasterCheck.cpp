// RollercoasterCheck.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;







int main()
{
    int height, choice = 1;
    bool cool;
    char coolness;

    while (choice != 9) {

    cout << "Welcome to the Rollercoaster Check!\nPress 1 to continue and 9 to end.\n";
    cin >> choice;


        cout << "\n\nEnter your height in inches: ";
        cin >> height;


        cout << "\nAre you cool?\n Enter Y/N.\nCoolness: ";
        cin >> coolness;

        coolness = toupper(coolness);

        if (coolness == 'Y')
        {
            cool = 1;
        }
        else if (coolness == 'N')
        {
            cool = 0;
        }


        if (height >= 48) {

            if (height <= 80) {

                if (cool) {
                    cout << "\n You are eligeble to ride.\n";
                }
                else
                {
                    cout << "\nYou are not eligeble to ride due to being: not cool enough.\n";
                }
            }
            else
            {
                cout << "\nYou are not eligeble to ride due to being: too tall.\n";
            }
        }
        else
        {
            cout << "\nYou are not eligeble to ride due to being: too short\n";
        }
       
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
