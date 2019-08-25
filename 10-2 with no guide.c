#include <stdio.h>

int main(void)
{
	int a, b, i, j;
	
	scanf("%d %d", &a, &b);
	
	if(a>b)
	{
		i = b;
		b = a;
		a = i;
	}
	
	for(i=a; i<=b; i++)
	{
		for(j=a; j<=b; j++)
			printf("%d * %d = %d\n", i, j, i*j);
		printf("\n");
	}
	
	return 0;
}

