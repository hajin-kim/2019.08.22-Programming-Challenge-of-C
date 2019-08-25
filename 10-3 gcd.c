#include <stdio.h>

int main(void)
{
	int num1, num2, gcd;
	
	scanf("%d %d", &num1, &num2);
	
	for(gcd = num1<num2? num1: num2; gcd>1; gcd--)
	{
		if(num1 % gcd == 0 && num2 % gcd == 0)
			break;
	}
	
	printf("GCD: %d", gcd);
	
	return 0;
}

