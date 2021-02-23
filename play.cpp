#include <iostream>
#include <ctime>
#include "card.h"
#include "deck.h"
#include"hand.h"
#include"player.h"
#include"diller.h"
#include"GameScore.h"
//� ������� ���� ����� ����������� ���� ��� ������� �� �����
using namespace std;
#include"play.h"
void Game::playing(GameScore& game_score){

	setlocale(LC_ALL, "Rus");
	
	/// 
	
	/// 
	Deck my_deck;//����������� �� ��������� (��� ����������)
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
			cout << "����� �������" << endl;
			game_score.increasePlayerWins();
			break;

		}
		else
			if (currentGameStatus == Hand::GAME_LOSE) {
				cout << "����� ��������" << endl;
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
							cout << "����� �������" << endl; game_score.increasePlayerWins();
							break;
						}
						else
							if (dealerScore > playerScore) {
								cout << "����� �������" << endl; game_score.increaseDialerWins();
								break;
							}
							else
								if (dealerScore == playerScore) {
									cout << "�����" << endl; game_score.increaseDraw();
									break;
								}


					}
					if (currentGameStatus == Hand::GAME_WIN) {
						cout << "����� �������" << endl; game_score.increaseDialerWins();
						break;

					}
					if (currentGameStatus == Hand::GAME_LOSE) {
						cout << "����� ��������" << endl; game_score.increasePlayerWins();
						break;
					}
		 		}
		

		
	}game_score.printScore();

}