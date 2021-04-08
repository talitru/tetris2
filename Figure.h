#pragma once
#include "Board.h"
#include <iostream>

enum SHAPES { l = 1, L = 2, J = 3, O = 4, Z = 5, S = 6, RT = 7 };//RT=reversed T=  *
																	 //=              *** 

class Figure                                        
{
	
	enum { SIZE = 4 };
	char FigureBody[SIZE][SIZE]; //7 figures ****  **   *       *     **     *     **
	////////////////////////////////// **   ***   ***    **     ***     **
	char direction;
	int serial_num_of_figure=0;
	
public:
	//enum SHAPES { l = 1, L = 2, J = 3, O = 4, Z = 5, S = 6, RT = 7 };//RT=reversed T=  *
	                                                                 //=              *** 

	////ctor
	//Figure()
	//{
	//	
	//};
	void SetSerialNum(int num) { serial_num_of_figure = num; };
	int GetSerialNum() const { return serial_num_of_figure; };
	void initFigureBySerialNum();
	void printFigure(Point* p,int x,int y);
	void deleteFigure();
	void Rotate();//Rotate is up- kbhit ������ ����� ��� ����� ����� �� ���������� �����
	void RightOrLeftOrdown();
	
	

};