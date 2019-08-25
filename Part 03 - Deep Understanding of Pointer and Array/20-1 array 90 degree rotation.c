#include <stdio.h>

int main(void)
{
	int arr[4][4];
	int result[4][4];
	int i, j, L = sizeof(*arr)/sizeof(int);
	
	for(i=0; i<L; i++)
		for(j=0; j<L; j++)
			arr[i][j] = i * 4 + j + 1;
	
	for(i=0; i<L; i++)
		for(j=0; j<L; j++)
			result[i][j] = arr[3-j][i];
	
	for(i=0; i<L; i++)
	{
		for(j=0; j<L; j++)
		{
			printf("%3d", result[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

