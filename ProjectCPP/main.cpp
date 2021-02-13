#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#include "dealer.h"


int main(int argc, char** argv) {
	srand(time(0));
	
	int randomDigits[4];
	for (int i = 0; i < 4; i++) {
		randomDigits[i] = (rand() % 9) + 1;
		cout << randomDigits[i];		
	}
		
	
	string turnTryInput;	
	int turnTryInt[4];
	
	GameDealer dealer = GameDealer(randomDigits);
						
	cout << "ֲגוהטעו 4 צטפנû\n";		
	cin >> turnTryInput;
	
	for (int i = 0; i < 4; i++) {				
		turnTryInt[i] = turnTryInput[i] - '0';
		if (turnTryInt[i] == randomDigits[i]) {
			cout << "Correct";
		}
	}			
	
	
	
	return 0;
}
