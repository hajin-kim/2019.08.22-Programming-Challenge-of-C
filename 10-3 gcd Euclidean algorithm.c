#include <stdio.h>

int main(void)
{
	int num1, num2, r;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1 < num2)
	{
		int i = num1;
		num1 = num2;
		num2 = i;
	}
	
	do
	{
		r = num1 % num2;
		num1 = num2;
		num2 = r;
	}
	while(r);
		
	printf("GCD: %d", num2);
	
	return 0;
}

