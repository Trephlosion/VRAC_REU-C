#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


class Dice
{
//public:
//	Dice(){};
//
//	Dice(int f1, int f2){};
//
//	void rollDice(){};
//
//	void randmultiRoll(){};
//
//	int getSum(){};
//
public:
		Dice() {
			Die1Face = 1;
			Die2Face = 1;
		}
	
		Dice(int f1, int f2) {
			if (f1 < 0 || f1>6) {
				cout << "\nsetting to default val" << endl << endl;
				Die1Face = 1;
			}
				if(f2<0 || f2>6)
			{
				cout << "\nsetting to default val" << endl << endl;
				Die2Face = 1;
			}
			Die1Face = f1;
			Die2Face = f2;
		}
	
		
	
		void rollDice() {
			int i = 0;
			int rando = (rand() % (10 - 1 + 1)) + 1;
			for (i; i < rando; i++)
			{
				Die1Face = (rand() % (6 - 1 + 1)) + 1;
				
			}
			cout << "\nDie 1's value is: " << Die1Face << endl;
	
			int j=0;
			for (j; j < rando; j++)
			{
				Die2Face++;
				if (Die2Face > 6)
				{
					Die2Face = 1;
				}
			}
			cout << "\nDie 2's value is: " << Die2Face << endl;
	
		}
	
		void randmultiRoll() {
			int numRolls=0;
			int rollfinal = (rand() % (10 - 1 + 1)) + 1;
			for (numRolls; numRolls < rollfinal; numRolls++)
			 {
				rollDice();
			}
			
		}
	
		int getSum() {
			cout << "\n\nDie Total: ";
			return Die1Face + Die2Face;
		}

private:
	int Die1Face;
	int Die2Face;

}; 
