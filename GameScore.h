#pragma once
//������� ����
//������� ����� ��� ����� ����
class GameScore {
private:
	//����� �������
	int playerWins;
	//����� �������
	int dialerWins;
	//�����
	int draw;
	//player1�
	//currentGameStatus�
public:
	GameScore();
	//���� ����� ������
	void increasePlayerWins();
	int getPlayerWins();
	//���� ����� ������

	void increaseDialerWins();
	int getDialerWins();
	//���� ���� �����

	void increaseDraw();
	int getDraw();
	void printScore();
};

