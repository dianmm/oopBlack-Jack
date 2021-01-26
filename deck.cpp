#include "deck.h"
#include "card.h"
#include <iostream>
Deck::Deck() {
    for (int j = 0; j < Card::MAX_SUITS; j++) {
        for (int k = 0; k < Card::MAX_RANK; k++) {
            //������� ����� � �������� � � ������
            m_deck.push_back(Card::Card(static_cast<Card::CardRank>(k), static_cast<Card::CardSuits>(j)));
        }
    }
}
void Deck::swap(Card& a, Card& b) {
    Card temp;
    temp = a;
    a = b;
    b = temp;
}
void Deck::shuffle() {
    const int numberOfShuffles = 5;
    for (int j = 0; j < numberOfShuffles; j++) {
        //������ ������
        for (int i = 0; i < deck_size; i++) {
            //������� ����� �� ��������� �������
            int randomCard = rand() % deck_size;
            //�������� ������� ������� � �������� ��������� �����
            swap(m_deck[i], m_deck[randomCard]);
        }
    }
}
void Deck::print_deck() {
    int size = m_deck.size();
    for (int i = 0; i < size; i++)
        m_deck[i].print_card();
    //std::cout << m_deck[i];
//<< m_deck
}
Card Deck::pop() {
    int lastCard = m_deck.size() - 1;
    Card temp = m_deck[lastCard];
    m_deck.pop_back();
    return temp;
}