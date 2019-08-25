#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i = 2;
	
	srand((int)time(NULL));
	
	while(i--)
		printf("Dice: %d\n", rand()%6);
	
	return 0;
}

