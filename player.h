#pragma once
#include "Hand.h"
#include "deck.h"
#include <SFML/Graphics.hpp>
//#include <vector>
class Player: public Hand {
public:
	void play(Deck&, sf::RenderWindow&);
	//sf::RenderWindow
};

