#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
class Card
{
public:
	enum CardSuits {
		CARD_DIAMONDS,//бубны
		CARD_HEARTS,//черви
		CARD_SPADES,//пики
		CARD_CLUBS,//крести
		MAX_SUITS//конец перечисления
	};
	enum CardRank {
		CARD_A,
		CARD_2,//0
		CARD_3,//1
		CARD_4,//2
		CARD_5,//3
		CARD_6,
		CARD_7,
		CARD_8,
		CARD_9,
		CARD_10,
		CARD_J,//JACK - валет,10
		CARD_Q,//QUEEN - дама,11
		CARD_K,//KING - король,12
		
		MAX_RANK
	};
	Card();
	Card(CardRank, CardSuits);
	void print_card();
	int get_score();
	friend std::ostream& operator<<(std::ostream&, Card&);
	CardRank get_rank(); 
	CardSuits get_suit(); 
	sf::Sprite& getSprite();
	float getWidth() {
		return cardWidth;
	}
	float getHeight() {
		return cardHeight;
	}
	void drawCard(sf::RenderWindow&);
private:
	CardRank m_rank;
	CardSuits m_suit;
	float x, y;
	static  float cardWidth;
		static  float cardHeight;
	sf::Texture cardTexture;
	sf::Image cardImage;
	sf::Sprite cardSprite;
};
