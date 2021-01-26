#pragma once
#include "Hand.h"
#include "deck.h"
class Dealer:public Hand {
public:
	void play(Deck&);
};

