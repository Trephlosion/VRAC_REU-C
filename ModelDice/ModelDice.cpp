// ModelDice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//You are making virtual game with a die rolling feature.
//
//Create a class called Dice that models a pair of dice.The class should have the following members :
//
//2 private integer variables to store the value of each die.
//A constructor that initializes each die to the value 1.
//A public function called roll that rolls each die and stores the result in the corresponding variable.
//A public function called getSum that returns the sum of the two dice.

#include <iostream>
#include <string>
#include <cstdlib>

#include "dice.h"


using namespace std;




//class Dice
//{
//public:
//	Dice() {
//		Die1Face = 1;
//		Die2Face = 1;
//	}
//
//	Dice(int f1, int f2) {
//		if (f1 < 0 || f1>6) {
//			cout << "\nsetting to default val" << endl << endl;
//			Die1Face = 1;
//		}
//			if(f2<0 || f2>6)
//		{
//			cout << "\nsetting to default val" << endl << endl;
//			Die2Face = 1;
//		}
//		Die1Face = f1;
//		Die2Face = f2;
//	}
//
//	
//
//	void rollDice() {
//		int i = 0;
//		int rando = (rand() % (10 - 1 + 1)) + 1;
//		for (i; i < rando; i++)
//		{
//			Die1Face = (rand() % (6 - 1 + 1)) + 1;
//			
//		}
//		cout << "\nDie 1's value is: " << Die1Face << endl;
//
//		int j=0;
//		for (j; j < rando; j++)
//		{
//			Die2Face++;
//			if (Die2Face > 6)
//			{
//				Die2Face = 1;
//			}
//		}
//		cout << "\nDie 2's value is: " << Die2Face << endl;
//
//	}
//
//	void randmultiRoll() {
//		int numRolls=0;
//		int rollfinal = (rand() % (10 - 1 + 1)) + 1;
//		for (numRolls; numRolls < rollfinal; numRolls++)
//		 {
//			rollDice();
//		}
//		
//	}
//
//	int getSum() {
//		cout << "\n\nDie Total: ";
//		return Die1Face + Die2Face;
//	}
//
//private:
//	int Die1Face;
//	int Die2Face;
//
//};

int main()
{
	Dice myDie;
	cout << myDie.getSum();
	
	Dice ourDie = Dice(9,5);

	myDie.rollDice();
	cout << myDie.getSum() << endl;

	ourDie.rollDice();
	cout << endl << ourDie.getSum();

	cout << "\n\n\nMultiRoll:\n";

	ourDie.randmultiRoll();
	cout << endl << ourDie.getSum() << " is the mutiroll total\n";
   
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
