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