#include <iostream>
#include <ctime>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "diller.h"
#include "play.h"
#include <io.h>
#include <fcntl.h>

using namespace std;
int main() {
	Game game;
	char haha='a'; 
	while (haha == 'a') {
		game.playing();
		do {
			cout << "хочешь еще сыграть(нажми для продолжения a-продолжить,n-выйти)";
			cin >> haha;
		} while ( haha != 'a' &&  haha !='n');
		if (haha == 'n')
			cout << "досвидание" << endl;

	}
	


	
}

