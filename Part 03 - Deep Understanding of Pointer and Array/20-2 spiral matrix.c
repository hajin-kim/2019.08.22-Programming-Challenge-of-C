#include <stdio.h>

void SpiralMatrix(int len)
{
	int i, j;
	int n = 0, x = -1, y = 0, dir = 1;
	int arr[len][len];
	
	for(i=len; i>0; i--)
	{
		for(j=i; j>0; j--)
		{
			x += dir;
			arr[y][x] = ++n;
		}
		for(j=i-1; j>0; j--)
		{
			y += dir;
			arr[y][x] = ++n;
		}
		dir *= -1;
	}
	
	for(i=0; i<len; i++)
	{
		for(j=0; j<len; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
}

int main(void)
{
	int inp;
	
	scanf("%d", &inp);
	
	SpiralMatrix(inp);
	
	return 0;
}

