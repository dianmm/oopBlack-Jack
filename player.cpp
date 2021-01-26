#include "player.h"

void Player::play(Deck& fDeck) {
	char choice = 'y';
	while (choice != 'n') {
		takeOneCard(fDeck);
		printHand();
		//������� ����� ���������� 
		int playerScore = calculateScore();
		std::cout << "���������� ����� ������:  " << calculateScore() << std::endl;
		//�� ��������� ���� ���� ���� ������ ������ ��� ������ 21
		if (playerScore >= 21) break;
		std::cout << "������ ��� �����?";
		std::cout << " (����� ��� �����������, y - ��, n - ���) ";
		std::cin >> choice;
	}
}