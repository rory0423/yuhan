#include "GameObject.h"
#include "ConsoleUtil.h"
#include <stdio.h>

void EndGameText1()
{
	int i = 0;;
	char a[30];
	char text[] = "ÇÃ·¹ÀÌ ÇØÁÖ¼Å¼­ °¨»çÇÕ´Ï´Ù.";
	while (text[i] != '\0')
	{
		printf("%c", text[i]);
		sleep(100);
		i = i + 1;
	}
}

void EndGameText2()
{
	int i = 0;;
	char a[30];
	char text[] = "ºÎµð Áñ°Å¿ì¼Ì±æ ¹Ù¶ø´Ï´Ù.";
	while (text[i] != '\0')
	{
		printf("%c", text[i]);
		sleep(100);
		i = i + 1;
	}
}

void MoneyText()
{
	printf("µ· : %d", Money);
}

void DebtText()
{
	printf("ºú : %d", Debt);
}

void workText()
{
	printf("[³²Àº È½¼ö : %d / 50]", work);
}

void DepositText()
{
	printf("¿¹±Ý : %d", Deposit);
}

void TestText()
{
	printf("»ÌÈù ¼ýÀÚ : %d", randomNumber);
}