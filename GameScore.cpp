#include"GameScore.h"
#include<iostream>
/*#include <iostream>
#include <ctime>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "diller.h"
#include "play.h"
#include <io.h>
#include <fcntl.h>*/
GameScore::GameScore() {
	playerWins = 0;
	dialerWins=0;
	draw=0;
	

}
//////////////
void GameScore::increasePlayerWins() {
	playerWins++;


}
int GameScore::getPlayerWins() {
	return playerWins;
}
/// ///////////////
void  GameScore::increaseDialerWins() {
	dialerWins++;
}
int  GameScore::getDialerWins() {
	return dialerWins;
}
///////////////////
void  GameScore::increaseDraw() {
	draw++;
}
int  GameScore::getDraw() {
	return draw;
}
void GameScore::printScore(){
	std::cout << "���� ����� ������:" << dialerWins << std::endl;
	std::cout << "���� ����� ������:" << playerWins<< std::endl;
	std::cout << "������: " << draw << std::endl;
}