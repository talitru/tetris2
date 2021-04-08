#pragma once
#include <iostream>
#include "Point.h"
using namespace std;


//enum keysP1 {LEFT1='a',RIGHT1='d',DOWN1='x'};
//enum keysP2 { LEFT2 = 'j', RIGHT2 = 'l', DOWN2 = 'm' };
//enum { FREE_POS = ' ', INVALID_POS = '#' };
enum { ROWS = 18, COLS= 12 };

class Board
{
	int row=0;
	int col = 0;
	Point GameBoard[ROWS][COLS];
	//char GameBoard[ROWS][COLS];

	public:
		//ctor
		Board();
		void initBoard();
		void setRow(int R) { row = R; };
		void setCol(int C) { col = C; };
		Point* getBoardByRowCol() { return &GameBoard[row][col]; };
		//void printBoard();
		void printMenu(); // ��� ����� ���� false
		/*char getBoardCharByIndex(int x, int y)
		{
			return GameBoard[x][y];
		}*/

};
