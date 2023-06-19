#include "GameCore.h"

int main()
{

	GameRunning = 1;

	/*초기화 시 실행*/
	BeginGame();

	while (GameRunning)
	{
		UpdateGame();
	}

	/*종료 전 실행*/
	EndGame();

	return 0;
}