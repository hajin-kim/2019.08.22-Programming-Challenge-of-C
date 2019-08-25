#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int inp, ai;
	int win = 0, draw = 0, lose = 1;
	
	srand((int)time(NULL));
	
	printf("rock: 1\nscissors: 2\npaper: 3\n");
	
	printf("\n");
	
	while(lose)
	{
		ai = rand() % 3 + 1;
		
		printf("Your choose: ");
		scanf("%d", &inp);
		
		switch(ai)
		{
			case 1:
				printf("AI's choose: rock\n");
				break;
			case 2:
				printf("AI's choose: scissors\n");
				break;
			case 3:
				printf("AI's choose: paper\n");
				break;
		}
		
		switch((inp - ai + 3) % 3)
		{
			case 0:
				printf("Result: draw\n");
				draw++;
				break;
			case 1:
				printf("Result: lose\n");
				lose--;
				break;
			case 2:
				printf("Result: win\n");
				win++;
				break;
		}
		printf("\n");
	}
	
	printf("Win: %d\nDraw: %d", win, draw);
	
	return 0;
}

