
#include "diller.h"
#include <iostream>
void Dealer::play(Deck& fDeck) {
	//����� ����� ����� ���� �� ������� 18 ����� ��� ������
	do {
		//����� �����
		takeOneCard(fDeck);
		//���� ���� ������ ��� ����� 17, �� �������
	} while (calculateScore() < 17);	
	printHand();
	//�� ������������ ���� ������� 
	std::cout << "; ���������� ����� � ������:  "<< calculateScore()<<std::endl;
	
}
