#include "Hand.h"
#include "card.h"
void Hand:: printHand() {
	int size = m_hand.size();
	for (int i = 0; i < size; i++) m_hand[i].print_card();
}
void Hand::takeOneCard(Deck& fDeck) {
	Card temp = fDeck.pop();
	m_hand.push_back(temp);
}
int Hand::calculateScore() {
	int size = m_hand.size();
	int score = 0;
	for (int i = 0; i < size; i++) {
		score = score + m_hand[i].get_score();
		//если на руке есть туз и можно добавить 10
		if (m_hand[i].get_rank() == Card::CARD_A && score + 10 <= 21) {
			score += 10;
		}
	}
	return score;
}
Hand::Gamestatus Hand::checkGameStatus() {
	int score = this->calculateScore();
	if (score < 21)  return Hand::GAME_CONTINUE;
	else
		if (score == 21)return Hand::GAME_WIN;
		else return Hand::GAME_LOSE;
}
void Hand::drawHand(sf::RenderWindow& window) {
	int x0 = 50;
	int y0 = 50;
	int size = m_hand.size();
	for (int i = 0; i < size; i++) {
		int newX = x0 + i * 1.2 * m_hand[i].getWidth();
		m_hand[i].drawCard(window);
	}
}