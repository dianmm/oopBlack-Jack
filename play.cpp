#include <iostream>
#include <ctime>
#include "card.h"
#include "deck.h"
#include"hand.h"
#include"player.h"
#include"diller.h"
#include"GameScore.h"
//я создала файл чтобы переместить сюда все решение из мейна
using namespace std;
#include"play.h"
void Game::playing(GameScore& game_score){

	setlocale(LC_ALL, "Rus");
	
	/// 
	
	/// 
	Deck my_deck;//конструктор по умолчанию (без параметров)
	srand(time(0));
	my_deck.shuffle();
	//my_deck.print_deck();
	Player player1;
	Dealer dealer;
	
	Hand::Gamestatus currentGameStatus = Hand::GAME_CONTINUE;
	while (true) {
		player1.play(my_deck);
		currentGameStatus = player1.checkGameStatus();
		if (currentGameStatus == Hand::GAME_WIN) {
			cout << "игрок выйграл" << endl;
			game_score.increasePlayerWins();
			break;

		}
		else
			if (currentGameStatus == Hand::GAME_LOSE) {
				cout << "игрок проиграл" << endl;
				game_score.increaseDialerWins();
				break;
			}
			else
				if (currentGameStatus == Hand::GAME_CONTINUE) {
					dealer.play(my_deck);
					currentGameStatus = dealer.checkGameStatus();

					if (currentGameStatus == Hand::GAME_CONTINUE) {

						int playerScore = player1.calculateScore();
						int dealerScore = dealer.calculateScore();
						if (playerScore > dealerScore) {
							cout << "игрок выйграл" << endl; game_score.increasePlayerWins();
							break;
						}
						else
							if (dealerScore > playerScore) {
								cout << "дилер выйграл" << endl; game_score.increaseDialerWins();
								break;
							}
							else
								if (dealerScore == playerScore) {
									cout << "ничья" << endl; game_score.increaseDraw();
									break;
								}


					}
					if (currentGameStatus == Hand::GAME_WIN) {
						cout << "дилер выйграл" << endl; game_score.increaseDialerWins();
						break;

					}
					if (currentGameStatus == Hand::GAME_LOSE) {
						cout << "дилер проиграл" << endl; game_score.increasePlayerWins();
						break;
					}
		 		}
		

		
	}game_score.printScore();

}