//#include "io_utils.h"
#include "Figure.h"

#include <conio.h>
#include"TheGame.h"
using namespace std;
   
// �������� ChooseOption() ������� �� ������ ������ �� ��� ����� ���� ������� �� ��� �� ����� ��� 
// �� ����� �� �� ������� ����� �� ������ ���� ������� RUNGAME


int main()
{
	
	TheGame Game;
	Game.RunGame();

	//char menuKeyPressed = 0;
	//bool isPressed = false;
	//while (!isPressed)
	//{
	//	if (_kbhit())
	//	{
	//		menuKeyPressed = _getch();

	//		if (menuKeyPressed == INSTRUCTIO_KEYS)
	//			Game.ShowInstructions();
	//		else if (menuKeyPressed == START)//TODO
	//		{

	//			Game.StartGame();
	//			isPressed = true;
	//		}
	//	}
	//}
	//
	 
	return 0;
}
