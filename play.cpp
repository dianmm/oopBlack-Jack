#include <iostream>
#include <ctime>
#include "card.h"
#include "deck.h"
#include"hand.h"
#include"player.h"
#include"diller.h"
using namespace std;
#include"play.h"
void Game::playing(){

	setlocale(LC_ALL, "Rus");
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
			cout << "игрок вийграл" << endl;
			break;

		}
		else
			if (currentGameStatus == Hand::GAME_LOSE) {
				cout << "игрок проиграл" << endl;
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
							cout << "игрок выйграл" << endl;
							break;
						}
						else
							if (dealerScore > playerScore) {
								cout << "дилер выйграл" << endl;
								break;
							}
							else
								if (dealerScore == playerScore) {
									cout << "ничья" << endl;
									break;
								}


					}
					if (currentGameStatus == Hand::GAME_WIN) {
						cout << "дилер выйграл" << endl;
						break;

					}
					if (currentGameStatus == Hand::GAME_LOSE) {
						cout << "дилер проиграл" << endl;
						break;
					}
				}
	}
}