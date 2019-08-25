#include <stdio.h>

void Mul(int s, int l)
{
	int i, j;
	
	for(i=s; i<=l; i++)
	{
		for(j=s; j<=l; j++)
			printf("%d * %d = %d\n", i, j, i*j);
		printf("\n");
	}
}

int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	a<b ?Mul(a, b): Mul(b, a);
	
	return 0;
}

