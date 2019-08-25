#include <stdio.h>

int main(void)
{
	int arr[10], result[10];
	int i, odd = 0, L = sizeof(arr)/sizeof(int), even = L;
	
	for(i=0; i<L; i++)
		scanf("%d", arr+i);
	
	for(i=0; i<L; i++)
	{
		if(arr[i] % 2)
			result[odd++] = arr[i];
		else
			result[--even] = arr[i];
	}
	
	for(i=0; i<L; i++)
		printf("%d ", result[i]);
	
	return 0;
}

