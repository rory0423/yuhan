#include "GameCore.h"
#include "screen.h"
#include "ConsoleUtil.h"
#include "GameObject.h"

int gameState;
/*게임 상태 변수
 * 0 : 게임 종료
 * 1 : 시작 타이틀 화면
 * 2 : 도움말 화면
 * 3 : 인게임 화면
 * 4 : 일하기 화면
 * 5 : 도박하기 화면
 * 6 : 도박성공 화면
 * 7 : 도박실패 화면
 * 8 : 은행 화면
 * 9 : 예금 화면
 * 10 : 대출 화면
 * 11 : 출금 화면
 * 12 : 빚갚는 화면
 * 13 : 엔딩 화면
*/

void BeginGame()
{
	gameState = 1;

	Money = 100000;
	Debt = 50000000;
	work = 0;
	Deposit = 0;

	SetCursorVisible(0);
}

void UpdateGame()
{
	if (gameState == 1) /*타이틀 화면*/
	{
		SetCursorPosition(0, 0);
		PrintTitle();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch(); /*getchar와 달리 Enter키 없이 실행*/

		if (gameInput == '1')
		{
			gameState = 3;
		}
		if (gameInput == '2')
		{
			gameState = 2;
		}
		if (gameInput == '3')
		{
			GameRunning = 0;
			gameState = 0;
		}
	}
	else if (gameState == 2) /*도움말 화면*/
	{
		SetCursorPosition(0, 0);
		PrintHelpTitle();
		SetCursorPosition(0, 13);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == 'q')
		{
			gameState = 1;
		}
	}
	else if (gameState == 3) /*인게임 화면*/
	{
		SetCursorPosition(0, 0);
		PrintMainGame();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == '1')
		{
			gameState = 4;
		}
		if (gameInput == '2')
		{
			gameState = 5;
		}
		if (gameInput == '3')
		{
			gameState = 8;
		}
		if (gameInput == '4')
		{
			gameState = 12;
		}
		if (gameInput == '5')
		{
			gameState = 1;
		}

	}
	else if (gameState == 4) /*일하기 화면*/
	{
		SetCursorPosition(0, 0);
		PrintWorkGame();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(17, 10);
		workText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == 'a')
		{
			work = work + 1;
			sleep(250);
		}
		if (gameInput == 'q')
		{
			work = 0;
			gameState = 3;
		}
		if (work == 50)
		{
			work = 0;
			Money = Money + 50000;
			Deposit = Deposit * 1.02;
		}

	}
	else if (gameState == 5) /*도박하는 화면 여기서 다시 시작*/
	{
		SetCursorPosition(0, 0);
		PrintGameblingGame();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		randomNumber = rand() % 100 + 1;

		SetCursorPosition(0, 17);

		if (gameInput == '1')
		{
			if (Money >= 10000)
			{
				if (randomNumber <= 50)
				{
					Money = Money + 10000;
					gameState = 6;
				}
				else
				{
					Money = Money - 10000;
					gameState = 7;
				}
			}
		}
		if (gameInput == '2')
		{
			if (Money >= 100000)
			{
				if (randomNumber <= 50)
				{
					Money = Money + 100000;
					gameState = 6;
				}
				else
				{
					Money = Money - 100000;
					gameState = 7;
				}
			}
		}
		if (gameInput == '3')
		{
			if (Money >= 1000000)
			{
				if (randomNumber <= 50)
				{
					Money = Money + 1000000;
					gameState = 6;
				}
				else
				{
					Money = Money - 1000000;
					gameState = 7;
				}
			}
		}
		if (gameInput == '4')
		{
			if (Money >= 10000000)
			{
				if (randomNumber <= 50)
				{
					Money = Money + 10000000;
					gameState = 6;
				}
				else
				{
					Money = Money - 10000000;
					gameState = 7;
				}
			}
		}
		if (gameInput == 'q')
		{
			gameState = 3;
		}
	}
	else if (gameState == 6) /*도박성공 화면*/
	{
		SetCursorPosition(0, 0);
		PrintGameblingSuccess();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == 'q')
		{
			gameState = 5;
		}
	}
	else if (gameState == 7) /*도박실패 화면*/
	{
		SetCursorPosition(0, 0);
		PrintGameblingFail();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == 'q')
		{
			gameState = 5;
		}
	}
	else if (gameState == 8) /*은행 화면*/
	{
		SetCursorPosition(0, 0);
		PrintBank();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == '1')
		{
			gameState = 9;
		}
		if (gameInput == '2')
		{
			gameState = 10;
		}
		if (gameInput == '3')
		{
			gameState = 11;
		}
		if (gameInput == 'q')
		{
			gameState = 3;
		}
	}
	else if (gameState == 9) /*예금 화면*/
	{
		SetCursorPosition(0, 0);
		PrintDeposit();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == '1')
		{
			if (Money >= 10000)
			{
				Money = Money - 10000;
				Deposit = Deposit + 10000;
			}
		}
		if (gameInput == '2')
		{
			if (Money >= 100000)
			{
				Money = Money - 100000;
				Deposit = Deposit + 100000;
			}
		}
		if (gameInput == '3')
		{
			if (Money >= 1000000)
			{
				Money = Money - 1000000;
				Deposit = Deposit + 1000000;
			}
		}
		if (gameInput == '4')
		{
			if (Money >= 10000000)
			{
				Money = Money - 10000000;
				Deposit = Deposit + 10000000;
			}
		}
		if (gameInput == 'q')
		{
			gameState = 8;
		}
	}
	else if (gameState == 10) /*대출 화면*/
	{
		SetCursorPosition(0, 0);
		PrintLoan();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == '1')
		{
			Money = Money + 10000;
			Debt = Debt + 12000;
		}
		if (gameInput == '2')
		{
			Money = Money + 100000;
			Debt = Debt + 120000;
		}
		if (gameInput == '3')
		{
			Money = Money + 1000000;
			Debt = Debt + 1200000;
		}
		if (gameInput == '4')
		{
			Money = Money + 10000000;
			Debt = Debt + 12000000;
		}
		if (gameInput == 'q')
		{
			gameState = 8;
		}
	}
	else if (gameState == 11) /*출금 화면*/
	{
		SetCursorPosition(0, 0);
		Printwithdraw();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (gameInput == '1')
		{
			if (Deposit >= 10000)
			{
				Deposit = Deposit - 10000;
				Money = Money + 10000;
			}
		}
		if (gameInput == '2')
		{
			if (Deposit >= 100000)
			{
				Deposit = Deposit - 100000;
				Money = Money + 100000;
			}
		}
		if (gameInput == '3')
		{
			if (Deposit >= 1000000)
			{
				Deposit = Deposit - 1000000;
				Money = Money + 1000000;
			}
		}
		if (gameInput == '4')
		{
			if (Deposit >= 10000000)
			{
				Deposit = Deposit - 10000000;
				Money = Money + 10000000;
			}
		}
		if (gameInput == 'q')
		{
			gameState = 3;
		}
	}
	else if (gameState == 12) /*빚갚기 화면*/
	{
		SetCursorPosition(0, 0);
		PrintFreeDebt();
		SetCursorPosition(38, 1);
		MoneyText();
		SetCursorPosition(38, 2);
		DebtText();
		SetCursorPosition(38, 3);
		DepositText();
		SetCursorPosition(0, 17);

		char gameInput = '0';
		gameInput = getch();

		if (Debt <= 0)
		{
			gameState = 13;
		}
		if (gameInput == '1')
		{
			if (Money >= 10000)
			{
				Money = Money - 10000;
				Debt = Debt - 10000;
			}
		}
		if (gameInput == '2')
		{
			if (Money >= 100000)
			{
				Money = Money - 100000;
				Debt = Debt - 100000;
			}
		}
		if (gameInput == '3')
		{
			if (Money >= 1000000)
			{
				Money = Money - 1000000;
				Debt = Debt - 1000000;
			}
		}
		if (gameInput == '4')
		{
			if (Money >= 10000000)
			{
				Money = Money - 10000000;
				Debt = Debt - 10000000;
			}
		}
		if (gameInput == 'q')
		{
			gameState = 8;
		}
	}
	else if (gameState == 13) /*엔딩 화면*/
	{
		SetCursorPosition(0, 0);
		PrintEnding();
		SetCursorPosition(0, 17);
		sleep(2000);

		gameState = 0;
		GameRunning = 0;
	}
}

void EndGame()
{
	SetCursorPosition(0, 0);
	PrintEndGame();
	sleep(1000);
	SetCursorVisible(1);
	SetCursorPosition(14, 9);
	EndGameText1();
	sleep(1000);
	SetCursorPosition(15, 10);
	EndGameText2();
	SetCursorVisible(0);
	sleep(5000);
	SetCursorPosition(0, 17);
}