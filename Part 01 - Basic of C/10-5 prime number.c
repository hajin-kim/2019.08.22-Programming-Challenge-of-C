#include <stdio.h>

int main(void)
{
	int time, num = 1, r;
	
	for(time = 1; time <= 10; time++)
	{
		while(1)
		{
			num++;
			for(r = 2; r < num; r++)
			{
				if(num % r == 0)
					break;
			}
			if(num == r)
				break;
		}
		printf("%d\n", num);
	}
	
	return 0;
}

