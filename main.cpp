#include <iostream>
#include <ctime>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "diller.h"
#include "play.h"
#include "GameScore.h"
#include <io.h>
#include <fcntl.h>

using namespace std;
int main() {
	Game game;                                                  
	char choice='a'; 
	GameScore game_score;
	while (choice == 'a') {
		game.playing(game_score);
		do {
			cout << "хочешь еще сыграть(нажми для продолжения a-продолжить,n-выйти)";
			cin >> choice;
		} while ( choice != 'a' &&  choice !='n');
		if (choice == 'n')
			cout << "досвидание" << endl;

	}
	


	
}

