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
#include <SFML/Graphics.hpp>

using namespace std;
int main() {
	Game game;                                                  
	char choice='a'; 
	sf::RenderWindow window(sf::VideoMode(800, 600), "black Jack");
	GameScore game_score;
	//Card card1;
	/*while (choice == 'a') {
		game.playing(game_score, window);
		do {
			cout << "хочешь еще сыграть?нажми для продолжения a-продолжить,n-выйти)";
			cin >> choice;*/
	while (window.isOpen()) {

		window.clear(sf::Color(250, 220, 100, 0));
		//window.draw(card1.getSprite());
		window.display();
	}
		/*} while ( choice != 'a' &&  choice !='n');
		if (choice == 'n')
			cout << "досвидание" << endl;
	}*/
	
	//window.clear(sf::Color(250, 220, 100, 0));
	//window.display();

}

