// Game Stats
// Demonstrates declaring and initializing variables
#include <iostream>
using namespace std;
int main()
{
	// defining variables of different types
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;
	short lives, aliensKilled;
	
	// assigning initial values to the types, aka initialising them.
	score = 0;
	distance = 1200.76;
	playAgain = ’y’;
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	
	// defining a variable and initialiizing it 
	double engineTemp = 6572.89;
	
	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "playAgain: " << playAgain << endl;
	//skipping shieldsUp since you don’t generally print Boolean values
	
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;
	
	int fuel;
	cout << "\nHow much fuel do you have? (enter a whole number) ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	
	// with `typedef` you can create a convenient shortcut
	// for multi part types like `unsigned short int`
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	return 0;
}