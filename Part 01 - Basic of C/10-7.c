#include <stdio.h>

int main(void)
{
	int n, result=1, k=0;

	scanf("%d", &n);
	
	while((result*=2)<=n)
		k++;
	
	printf("%d", k);
	
	return 0;
}

