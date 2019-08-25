#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 5;
	
	while(i--)
		printf("%d\n", rand()%100);
	
	return 0;
}

