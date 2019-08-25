#include <stdio.h>

int main(void)
{
	int arr[7];
	int temp, i, j, L = sizeof(arr)/sizeof(int);
	
	for(i=0; i<L; i++)
		scanf("%d", &arr[i]);
	
	for(i=0; i<L; i++)
		for(j=1; j<L-i; j++)
		{
			if(arr[j] > arr[j-1])	// descending order
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	
	for(i=0; i<L; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

