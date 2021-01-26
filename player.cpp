#include "player.h"

void Player::play(Deck& fDeck) {
	char choice = 'y';
	while (choice != 'n') {
		takeOneCard(fDeck);
		printHand();
		//создали новую переменную 
		int playerScore = calculateScore();
		std::cout << "количество твоих баллов:  " << calculateScore() << std::endl;
		//мы прерываем игру если очки игрока больше или меньше 21
		if (playerScore >= 21) break;
		std::cout << "Хочешь еще карту?";
		std::cout << " (нажми для продолжения, y - да, n - нет) ";
		std::cin >> choice;
	}
}