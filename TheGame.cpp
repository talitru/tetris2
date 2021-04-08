
#include "TheGame.h"
#include "Board.h"
#include "Figure.h"
#include <conio.h>
#include <iostream>

char LeftPlayerKeys[10] = { 'a','A','d','D','s','S','w','W','x','X'};
char RightPlayerKeys[10] = { 'j','J','l','L','k','K','i','I','m','M' };


void TheGame::RunGame()//TODO- àîåø ìäéåú îåãôñ ìåç åìäúçéì îùç÷
{
	char key_char=0;
	int x1 = 5;//(COLS/ 2)-1;
	int y1 = 1;
	int x2 = 18;//(COLS + 2+(COLS/2)-1);
	int y2 = 1;

	while (key_char!=EXIT&&key_char!=ESC)
	{

		if (_kbhit())
		{

			key_char = _getch();
			if (key_char== INSTRUCTIO_KEYS)
			{
			   ShowInstructions();
			}
			else if (key_char == START)
			{
				randFigure();
				while(key_char != EXIT && key_char != ESC)
				{

					GameBoard.setRow(x1);
					GameBoard.setCol(y1);
					gotoxy(x1, y1);

					f.printFigure(GameBoard.getBoardByRowCol(), x1, y1);  //אמור להדפיס את הצןרה הראשונה בלוח אחד
					Sleep(200);

					GameBoard.setRow(x2);
					GameBoard.setCol(y2);
					if ((y2 < ROWS) && y2 != 1)
					{
						gotoxy(14, y2 - 1);
						cout << "            ";
					}
					gotoxy(x2, y2);    //ובלוח השני

					f.printFigure(GameBoard.getBoardByRowCol(), x2, y2);
					Sleep(200);

					if (y1 < ROWS - 1)
					{
						gotoxy(1, y1);
						cout << "            ";
					}


					y1++;
					y2++;

					if ((y1 > ROWS - 1) || (y2 > ROWS - 1))
					{
						y1 = y2 = 1;
						randFigure();
					}

					if (_kbhit())
					{
						key_char = _getch();
						bool isVlidDirection = false;
						for (int i : LeftPlayerKeys)
						{
							if (LeftPlayerKeys[i] == key_char)
							{
								isVlidDirection = true;
								MoveFigure(key_char);
						
							}
						}

					}



				}//מסתיים while פנימי

			} //איזה מקש הוקש?

		} // האם הוקש מקש?

	} //מסתיים while חיצוני

	
}

void TheGame::MoveFigure(char direction) // קוראת לפונקציות תזוזה לפי המקשים
{
	if (direction == 'A' || direction == 'a')
	{
		LPlayer_moveLeft(); 
	}


	if (direction == 'D' || direction == 'd')
	{
		LPlayer_moveRight();
	}

	if (direction == 'L' || direction == 'l')
	{
		LPlayer_rotateRight();
	}
	if (direction == 'L' || direction == 'l')
	{
		LPlayer_rotateLeft();
	}

	if (direction == 'J' || direction == 'j')
	{
		RPlayer_moveLeft();
	}
	if (direction == 'L' || direction == 'l')
	{
		RPlayer_moveRight();
	}
	if (direction == 'K' || direction == 'k')
	{
		RPlayer_rotateRight();
	}
	if (direction == 'I' || direction == 'i')
	{
		RPlayer_rotateLeft();
	}
}


void TheGame::randFigure()
{
	int randFigure= rand() % RAND; //0-6
	switch (randFigure)
	{
	case 0:
	{
		f.SetSerialNum(SHAPES::l);
		f.initFigureBySerialNum();
		break;

	}
	case 1:
	{
		f.SetSerialNum(SHAPES::L);
		f.initFigureBySerialNum();
		break;
	}
	case 2:
	{
		f.SetSerialNum(SHAPES::J);
		f.initFigureBySerialNum();
		break;
	}
	case 3:
	{
		f.SetSerialNum(SHAPES::O);
		f.initFigureBySerialNum();
		break;
	}
	case 4:
	{
		f.SetSerialNum(SHAPES::S);
		f.initFigureBySerialNum();
		break;
	}
	case 5:
	{
		f.SetSerialNum(SHAPES::Z);
		f.initFigureBySerialNum();
		break;
	}
	case 6:
	{
		f.SetSerialNum(SHAPES::RT);
		f.initFigureBySerialNum();
		break;
	}
	}
}

//moves
void TheGame::LPlayer_moveLeft()
{

}
void TheGame::LPlayer_moveRight()
{

}
void TheGame::RPlayer_moveLeft()
{

}
void TheGame::RPlayer_moveRight()
{

}
//rotation
void TheGame::LPlayer_rotateRight()
{

}
void TheGame::LPlayer_rotateLeft()
{

}
void TheGame::RPlayer_rotateRight()
{

}
void TheGame::RPlayer_rotateLeft()
{

}


void TheGame::ContinueGame()//TODO- ìäîùéê àú äîùç÷ îäî÷åí ùáå òöøðå
{
	system("cls");
}
void TheGame::ShowInstructions()
{
	std::cout <<endl <<"Goal: You have to make full horizontal lines with the different shaped blocks that fall into the game area.Full lines will then disappear and Increases the chance of winning the game" << endl;
	std::cout << "The player whose board is filled first loses, the other player wins";
	std::cout << "Controls:" << endl << "Player 1(The left player):" << endl << "'a' or 'A' key : move block to the left" << endl << "'d' or 'D' key : move block to the right" << endl << "'s' or 'S' key : rotate block clockwise" << endl << "'w' or 'W' key : rotate block counterclockwise" << endl << "'x' or 'X' key : move block down";
	std::cout << "Controls:" << endl << "Player 2(The right player):" << endl << "'j' or 'J' key : move block to the left" << endl << "'l' or 'L' key : move block to the right" << endl << "'k' or 'K' key : rotate block clockwise" << endl << "'i' or 'I' key : rotate block counterclockwise" << endl << "'m' or 'M' key : move block down"<<endl;
}
void TheGame::ExitGame()
{
	system("cls");//not sure
	

}




//void TheGame::ChooseOption()
//{
//	char menuKeyPressed=0;
//	bool isPressed = false;
//	while (!isPressed)
//	{
//		if (_kbhit())
//		{	
//			menuKeyPressed = _getch();
//
//			if (menuKeyPressed == INSTRUCTIO_KEYS)
//				ShowInstructions();
//			else if (menuKeyPressed == START)//TODO
//			{
//				isPressed = true;
//				StartGame();
//				
//			}
//		}
//	}
//}