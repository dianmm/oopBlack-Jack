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
	char choice='a'; 
	while (choice == 'a') {
		game.playing();
		do {
			cout << "хочешь еще сыграть(нажми для продолжения a-продолжить,n-выйти)";
			cin >> choice;
		} while ( choice != 'a' &&  choice !='n');
		if (choice == 'n')
			cout << "досвидание" << endl;

	}
	


	
}

