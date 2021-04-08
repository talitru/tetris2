#pragma once

#include "Board.h"
#include "Figure.h"
enum menuKeys { START = '1', PAUSE = '2', INSTRUCTIO_KEYS = '8', EXIT = '9'};
enum { ESC = 27 };//escape
enum { RAND = 7 };

class TheGame
{
	Board GameBoard;
	Figure f;
public:
	TheGame() {}; //ctor
	void setBoard()
	{
		GameBoard.initBoard();
	}
	void randFigure();

	void RunGame();
	//void ChooseOption();
	void ContinueGame();
	void ShowInstructions();
	void ExitGame();
	void MoveFigure(char direction);

	//moves and rotation functions -אולי כדאי לשים אותם במחלקת שחקן
	void LPlayer_moveLeft();
	void LPlayer_moveRight();
	void RPlayer_moveLeft();
	void RPlayer_moveRight();

	void LPlayer_rotateRight();
	void LPlayer_rotateLeft();
	void RPlayer_rotateRight();
	void RPlayer_rotateLeft();

};