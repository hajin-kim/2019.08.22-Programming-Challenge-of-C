#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int inp[3], ai[3];
	int i, take = 0, strike, ball;
	
	srand((int)time(NULL));
	
	// Init
	ai[0] = rand() % 10;
	do ai[1] = rand() % 10; while(ai[1] == ai[0]);
	do ai[2] = rand() % 10; while(ai[2] == ai[1] || ai[2] == ai[0]);
	
	// Start game
	while(strike < 3)
	{
		take++; strike = 0; ball = 0;
		
		printf("Choose 3 numbers: ");
		scanf("%d %d %d", &inp[0], &inp[1], &inp[2]);
		
		for(i = 0; i < 3; i++)
		{
			if(inp[i] == ai[i]) strike++;
			else if(inp[i] == ai[(i+1)%3]) ball++;
			else if(inp[i] == ai[(i+2)%3]) ball++;
		}
		
		printf("Result of take.%d: %dstrike, %dball\n\n", take, strike, ball);
	}
	printf("Game over.\n");
	
	return 0;
}

