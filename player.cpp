#include "player.h"

void Player::play(Deck& fDeck, sf::RenderWindow& window) {
	char choice = 'y';
	while (choice != 'n') {

		takeOneCard(fDeck);
		printHand();
		drawHand(window);
		//создали новую переменную 
		int playerScore = calculateScore();
		std::cout << "количество твоих баллов:  " << calculateScore() << std::endl;
		//мы прерываем игру если очки игрока больше или равно 21
		if (playerScore >= 21) break;
		do {
			std::cout << " (нажми для продолжения, y - да, n - нет) " << std::endl;
			std::cin >> choice;
		} while (choice == 'a' && choice != 'n');
		std::cout << "Хочешь еще карту?" << std::endl;
	}
	
}