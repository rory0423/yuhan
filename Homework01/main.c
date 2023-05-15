#include "Test_screen.h"
#include <stdio.h>
#include <stdlib.h>

void fill_screen(char screen[500])
{

	int i = 0;
	while(i < 500)
	{
		if((i+1) % 31 == 0 && i > 0) /*i가 30의 배수이며 0이 아닐 때*/
		{
			screen[i] = '\n'; /*개행문자 ('\n') 삽입*/
		}
		else
		{
			screen[i] = ' '; /*'0' 삽입*/
		}
		i++;
	}
	
	screen[464] = '\0'; /*문자열 종료 표시 삽입*/
	screen[133] = 'R';
	screen[134] = 'a';
	screen[135] = 'i';
	screen[136] = 's';
	screen[137] = 'e';
	screen[139] = 'a';
	screen[141] = 'P';
	screen[142] = 'u';
	screen[143] = 'p';
	screen[144] = 'p';
	screen[145] = 'y';
	
	screen[220] = '1';
	screen[221] = ')';
	screen[223] = 'P';
	screen[224] = 'l';
	screen[225] = 'a';
	screen[226] = 'y';
	screen[228] = 'a';
	screen[230] = 'G';
	screen[231] = 'a';
	screen[232] = 'm';
	screen[233] = 'e';
	
	screen[251] = '2';
	screen[252] = ')';
	screen[254] = 'H';
	screen[255] = 'e';
	screen[256] = 'l';
	screen[257] = 'p';

	screen[282] = '3';
	screen[283] = ')';
	screen[285] = 'E';
	screen[286] = 'x';
	screen[287] = 'i';
	screen[288] = 't';
	screen[290] = 'a';
	screen[292] = 'G';
	screen[293] = 'a';
	screen[294] = 'm';
	screen[295] = 'e';
}

void play_screen(char playgame[500])
{
	int j = 0;
	while(j < 500)
	{
		if((j+1) % 31 == 0 && j > 0)
		{
			playgame[j] = '\n';
		}
		else
		{
			playgame[j] = ' ';
		}
		j++;
	}
	
	playgame[464] = '\0';
	playgame[282] = '1';
	playgame[283] = ')';
	playgame[285] = 'W';
	playgame[286] = 'a';
	playgame[287] = 's';
	playgame[288] = 'h';
	playgame[289] = 'i';
	playgame[290] = 'n';
	playgame[291] = 'g';
	playgame[293] = 't';
	playgame[294] = 'h';
	playgame[295] = 'e';
	playgame[297] = 'P';
	playgame[298] = 'u';
	playgame[299] = 'p';
	playgame[300] = 'p';
	playgame[301] = 'y';
	
	playgame[313] = '2';
	playgame[314] = ')';
	playgame[316] = 'W';
	playgame[317] = 'a';
	playgame[318] = 'l';
	playgame[319] = 'k';
	playgame[320] = 'i';
	playgame[321] = 'n';
	playgame[322] = 'g';
	playgame[324] = 't';
	playgame[325] = 'h';
	playgame[326] = 'e';
	playgame[328] = 'P';
	playgame[329] = 'u';
	playgame[330] = 'p';
	playgame[331] = 'p';
	playgame[332] = 'y';
	
	playgame[344] = '3';
	playgame[345] = ')';
	playgame[347] = 'P';
	playgame[348] = 'l';
	playgame[349] = 'a';
	playgame[350] = 'y';
	playgame[352] = 'w';
	playgame[353] = 'i';
	playgame[354] = 't';
	playgame[355] = 'h';
	playgame[357] = 'P';
	playgame[358] = 'u';
	playgame[359] = 'p';
	playgame[360] = 'p';
	playgame[361] = 'y';
	
	playgame[375] = '4';
	playgame[376] = ')';
	playgame[378] = 'E';
	playgame[379] = 'x';
	playgame[380] = 'i';
	playgame[381] = 't';
	playgame[383] = 'a';
	playgame[385] = 'S';
	playgame[386] = 'c';
	playgame[387] = 'r';
	playgame[388] = 'e';
	playgame[389] = 'e';
	playgame[390] = 'n';
}

void help_screen(char help[500])
{

	int n = 0;
	while(n < 500)
	{
		if((n+1) % 31 == 0 && n > 0) /*i가 30의 배수이며 0이 아닐 때*/
		{
			help[n] = '\n'; /*개행문자 ('\n') 삽입*/
		}
		else
		{
			help[n] = ' '; /*'0' 삽입*/
		}
		n++;
	}
	
	help[464] = '\0'; /*문자열 종료 표시 삽입*/
	help[102] = 'R';
	help[103] = 'a';
	help[104] = 'i';
	help[105] = 's';
	help[106] = 'e';
	help[108] = 'a';
	help[110] = 'P';
	help[111] = 'u';
	help[112] = 'p';
	help[113] = 'p';
	help[114] = 'y';
	
	help[251] = '1';
	help[252] = ')';
	help[254] = 'Y';
	help[255] = 'o';
	help[256] = 'u';
	help[258] = 'h';
	help[259] = 'a';
	help[260] = 'v';
	help[261] = 'e';
	help[263] = 't';
	help[264] = 'o';
	help[266] = 'k';
	help[267] = 'e';
	help[268] = 'e';
	help[269] = 'p';
	help[271] = 'P';
	help[272] = 'u';
	help[273] = 'p';
	help[274] = 'p';
	help[275] = 'y';
	help[276] = 's';
	help[282] = 'h';
	help[283] = 'e';
	help[284] = 'a';
	help[285] = 'l';
	help[286] = 't';
	help[287] = 'h';
	help[289] = 'a';
	help[290] = 'n';
	help[291] = 'd';
	help[293] = 'm';
	help[294] = 'o';
	help[295] = 'o';
	help[296] = 'd';
	help[298] = 'g';
	help[299] = 'o';
	help[300] = 'o';
	help[301] = 'd';
	
	help[313] = '2';
	help[314] = ')';
	help[316] = 'E';
	help[317] = 'x';
	help[318] = 'i';
	help[319] = 't';
	help[321] = 'a';
	help[323] = 'G';
	help[324] = 'a';
	help[325] = 'm';
	help[326] = 'e';
}

int main()
{
	char screen[500];
	char playgame[500];
	char help[500];
	
	int input;
	int game_state = 1;

	fill_screen(screen);
	printf("%s\n", screen);

	while(game_state)
	{	
		printf("input(1~3)> ");
		scanf("%d", &input);
		if(input == 1)
		{
			play_screen(playgame);
			printf("%s\n", playgame);
			while(game_state)
			{
				printf("input(1~4)> ");
				scanf("%d", &input);
				if(input == 1)
				{
					printf("None 1\n");
				}
				else if(input == 2)
				{
					printf("None 2\n");
				}
				else if(input == 3)
				{
					printf("None 3\n");
				}
				else if(input == 4)
				{
					fill_screen(screen);
					printf("%s\ninput(1~3)>", screen);
					break;
				}
				else
				{
					printf("Try again\n");
				}

			}
		}
		else if(input == 2)
		{
			help_screen(help);
			printf("%s\n", help);
			while(game_state)
			{
				printf("input(2 to Exit)> ");
				scanf("%d", &input);
				if(input == 2)
				{
					fill_screen(screen);
					printf("%s\ninput(1~3)>", screen);
					break;
				}
				else
				{
					printf("Try again\n");
				}
			}
		}
		else if(input == 3)
		{
			printf("Game Exit\n");
			game_state = 0;
		}
		else
		{
			printf("Try again\n");
		}
	}
	
	return 0;
}
