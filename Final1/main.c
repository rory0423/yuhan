#include "GameCore.h"

int main()
{

	GameRunning = 1;

	/*�ʱ�ȭ �� ����*/
	BeginGame();

	while (GameRunning)
	{
		UpdateGame();
	}

	/*���� �� ����*/
	EndGame();

	return 0;
}