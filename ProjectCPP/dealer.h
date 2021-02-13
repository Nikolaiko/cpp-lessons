class GameDealer {
	public:
		int triesCount;
		
		
		GameDealer(int firstPlayerSecret[4]);
		TryToGuess(int player1Attempt[4]);
		
	private:
		int firstPlayerDigits[4];
};
