#include "GameObject.h"
#include "ConsoleUtil.h"
#include <stdio.h>

void EndGameText1()
{
	int i = 0;;
	char a[30];
	char text[] = "�÷��� ���ּż� �����մϴ�.";
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
	char text[] = "�ε� ��ſ�̱� �ٶ��ϴ�.";
	while (text[i] != '\0')
	{
		printf("%c", text[i]);
		sleep(100);
		i = i + 1;
	}
}

void MoneyText()
{
	printf("�� : %d", Money);
}

void DebtText()
{
	printf("�� : %d", Debt);
}

void workText()
{
	printf("[���� Ƚ�� : %d / 50]", work);
}

void DepositText()
{
	printf("���� : %d", Deposit);
}

void TestText()
{
	printf("���� ���� : %d", randomNumber);
}