#include <stdio.h>

void Odd(int arr[], int L)
{
	int i;
	
	printf("Odd\n");
	for(i=0; i<L; i++)
	{
		if(arr[i] % 2 == 1)
			printf("%d\n", arr[i]);
	}
}

void Even(int arr[], int L)
{
	int i;
	
	printf("Even\n", L);
	for(i=0; i<L; i++)
	{
		if(arr[i] % 2 == 0)
			printf("%d\n", arr[i]);
	}
}

int main(void)
{
	int arr[10], i;
	
	for(i = 0; i < 10; i++)
		scanf("%d", arr+i);
	
	Odd(arr, sizeof(arr)/sizeof(int));
	Even(arr, sizeof(arr)/sizeof(int));
	
	return 0;
}

