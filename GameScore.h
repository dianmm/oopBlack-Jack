#pragma once
//создали файл
//создали класс для счета игры
class GameScore {
private:
	//игрок выйграл
	int playerWins;
	//дилер выйграл
	int dialerWins;
	//ничья
	int draw;
	//player1ж
	//currentGameStatusж
public:
	GameScore();
	//счет побет игрока
	void increasePlayerWins();
	int getPlayerWins();
	//счет побед дилера

	void increaseDialerWins();
	int getDialerWins();
	//счет если ничья

	void increaseDraw();
	int getDraw();
	void printScore();
};

