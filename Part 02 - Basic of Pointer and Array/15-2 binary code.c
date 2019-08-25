#include <stdio.h>

void Binary(int num)
{
	if(num>1)
		Binary(num/2);
	printf("%d", num%2);
}

int main(void)
{
	int inp;
	
	scanf("%d", &inp);
	
	Binary(inp);
	
	return 0;
}

