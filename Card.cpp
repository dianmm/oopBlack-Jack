#include "card.h"
#include <iostream>
#include <io.h>
#include <fcntl.h>

Card::Card(){
	m_suit = CARD_DIAMONDS;
	m_rank = CARD_2;
	}
Card::Card(CardRank f_rank, CardSuits f_suit) {
	m_rank = f_rank;
	m_suit = f_suit;
}
void Card::print_card(){
	//_setmode(_fileno(stdout), _O_U8TEXT);
	//вывод достоинства
	if (m_rank == CARD_2) std::cout << 2;
	else
    if (m_rank == CARD_3) std::cout << 3;
    else
	if (m_rank == CARD_4) std::cout << 4;
	else
	if (m_rank == CARD_5) std::cout << 5;
	else
	if (m_rank == CARD_6) std::cout << 6;
	else
	if (m_rank == CARD_7) std::cout << 7;
	else
	if (m_rank == CARD_8) std::cout << 8;
	else
	if (m_rank == CARD_9) std::cout << 9;
	else
	if (m_rank == CARD_10) std::cout << 10;
	else
	if (m_rank == CARD_J) std::cout << 'В';
	else
	if (m_rank == CARD_Q) std::cout << 'Д';
	else
	if (m_rank == CARD_K) std::cout << 'K';
	else
	if (m_rank == CARD_A) std::cout << 'Т';
	
	//вывод масти
	//хотели сделать значки, но они не хотят
	
	//int wmain(int argc, wchar_t* argv[])
		// _setmode(_fileno(stdout), _O_U16TEXT);

	//бубны
		if (m_suit == CARD_DIAMONDS) std::cout << " бубна" << ' ';
		else
			//черви
			if (m_suit == CARD_HEARTS) std::cout << " черви" << ' ';
		//пики
			else
				if (m_suit == CARD_SPADES) std::cout << " пики" << ' ';
				else
					//крести
					if (m_suit == CARD_CLUBS) std::cout << " крести" << ' ';
	
	
}
Card::CardRank Card::get_rank() {
	return m_rank;
}
Card::CardSuits Card::get_suit() {
	return m_suit;
}

int Card::get_score() {        
if (m_rank == CARD_2) return 2;
else
if (m_rank == CARD_3) return 3;
else
if (m_rank == CARD_4) return 4;
else
if (m_rank == CARD_5) return 5;
else
if (m_rank == CARD_6) return 6;
else
if (m_rank == CARD_7) return 7;
else
if (m_rank == CARD_8) return 8;
else
if (m_rank == CARD_9) return 9;
else
if (m_rank == CARD_10) return 10;
else
if (m_rank == CARD_J) return 10;
else
if (m_rank == CARD_Q) return 10;
else
if (m_rank == CARD_K) return 10;
else
if (m_rank == CARD_A) return 11;
}

std::ostream& operator<<(std::ostream& out, Card& fCard) {
if (fCard.get_rank() == Card::CARD_2) std::cout << 2;
else
if (fCard.get_rank() == Card::CARD_3) out << 3;
else
if (fCard.get_rank() == Card::CARD_4) out << 4;
else
if (fCard.get_rank() == Card::CARD_5) out << 5;
else
if (fCard.get_rank() == Card::CARD_6) out << 6;
else
if (fCard.get_rank() == Card::CARD_7) out << 7;
else
if (fCard.get_rank() == Card::CARD_8) out << 8;
else
if (fCard.get_rank() == Card::CARD_9) out << 9;
else
if (fCard.get_rank() == Card::CARD_10)out << 10;
else
if (fCard.get_rank() == Card::CARD_J) out << 'В';
else
if (fCard.get_rank() == Card::CARD_Q) out << 'Д';
else
if (fCard.get_rank() == Card::CARD_K) out << 'K';
else
if (fCard.get_rank() == Card::CARD_A) out << 'Т';

	//вывод масти
	 if (fCard.get_suit() == Card::CARD_DIAMONDS) out << 'D' << std::endl;
	 else
     if (fCard.get_suit() == Card::CARD_HEARTS) out << 'H' << std::endl;
	 else
	 if (fCard.get_suit() == Card::CARD_SPADES) out << 'S' << std::endl;
	 else
	 if (fCard.get_suit() == Card::CARD_CLUBS) out << 'C' << std::endl;
	 return out;
}