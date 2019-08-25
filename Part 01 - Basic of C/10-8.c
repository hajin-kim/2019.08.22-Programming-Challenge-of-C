#include <stdio.h>

int Mul(int n, int time)
{
	return time? Mul(n*2, --time): n;
}

int main(void)
{
	int inp;
	
	scanf("%d", &inp);
	
	printf("%d", Mul(1, inp));
	
	return 0;
}

