#include <stdio.h>
#include "Test_screen.h"

int main()
{
	/*  width : 30    height : 10    가로 여백 : 2    세로여백 :1 */
	char screenBuf[35 * 12 + 1];
	int width = 34;
	int height = 12;
	int isGamePlaying = 1;
	int j = 0;
	int i = 0;

	char input[10];

	while (isGamePlaying)
	{
      	clearBuffer(screenBuf, width, height);
      	setTitleToScreenBuffer(screenBuf, width, height); /* 이런식으로 짜주세용 */
     		printf("%s\ninput(q(Exit) or 1~3)> ", screenBuf);
     		scanf("%s", input);

      		if (input[0] == 'q')    /*q 누르면 종료*/
		{
			isGamePlaying = 0;
		}
        	else if (input[0] == '1')
		{
			while (isGamePlaying)
			{
				clearBuffer(screenBuf, width, height);
				writeStringToBuffer(screenBuf, "1) Washing the Puppy", 5, 7, width);
				writeStringToBuffer(screenBuf, "2) Walking the Puppy", 5, 8, width);
				writeStringToBuffer(screenBuf, "3) Play with Puppy", 5, 9, width);
				writeStringToBuffer(screenBuf, "4) Exit title screen", 5, 10, width);
				printf("%s\ninput(1~4)>", screenBuf);
				scanf("%s", input);
				if (input[0] == '1')
				{
					printf("None1\n");
				}
				else if (input[0] == '2')
				{
					printf("None2\n");
				}
				else if (input[0] == '3')
				{
					printf("None3\n");
				}
				else if (input[0] == '4')
				{
					break;
				}
				else
				{
					printf("Sorry, Try Again\n");
				}
			}
		}
		else if (input[0] == '2')
		{
			while (isGamePlaying)
			{
				clearBuffer(screenBuf, width, height);
				writeStringToBuffer(screenBuf, "Raise a Puppy", 11, 3, width);
				writeStringToBuffer(screenBuf, "1) You have to keep Puppy's", 4, 5, width);
				writeStringToBuffer(screenBuf, "Health and mood good", 4, 6, width);
				writeStringToBuffer(screenBuf, "2) Puppy's can run away if not", 4, 8, width);
				writeStringToBuffer(screenBuf, "managed porperly", 4, 9, width);
				printf("%s\ninput(exit in q) > ", screenBuf);
				scanf("%s", input);
				if (input[0] == 'q')
				{
					break;
				}
				else
				{
					printf("Sorry, Try Again\n");
				}
			}
		}
		else if (input[0] == '3')
		{
			isGamePlaying = 0;
		}
		else
		{
			printf("Sorry, Try Again\n");
		}
            
    	}
    	
    	return 0;
}
