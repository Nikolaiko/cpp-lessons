#include "dealer.h"

GameDealer::GameDealer(int firstPlayerSecret[4]) {
	triesCount = 0;
	for (int i = 0; i < 5; ++i) {
        firstPlayerDigits[i] = firstPlayerSecret[i];
	}
}

GameDealer::TryToGuess(int player1Attempt[4]) {
	
}
