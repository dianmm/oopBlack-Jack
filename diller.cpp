
#include "diller.h"
#include <iostream>
void Dealer::play(Deck& fDeck) {
	//дилер берет карты пока не наберет 18 очков или больше
	do {
		//берем карту
		takeOneCard(fDeck);
		//если счет больше или равен 17, то выходим
	} while (calculateScore() < 17);	
	printHand();
	//мы подсчитываем счет диллера 
	std::cout << "; количество очков у дилера:  "<< calculateScore()<<std::endl;
	
}
