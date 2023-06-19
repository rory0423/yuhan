#include <Windows.h>
#include "ConsoleUtil.h"

void SetCursorPosition(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void SetCursorVisible(int isVisble) /*Ŀ���� ���̰� �� ���ΰ�*/
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = isVisble;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void sleep(int ms)
{
	Sleep(ms);
}