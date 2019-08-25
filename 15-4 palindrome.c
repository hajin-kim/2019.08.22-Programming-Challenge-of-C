#include <stdio.h>

int Palindrome(char * str, int len)
{
	int i;
	
	for(i=0; i<len/2; i++)
	{
		if(str[i] != str[len-i-1])
			return 0;
	}
	
	return 1;
}

int main(void)
{
	int len = -1;
	char str[100];
	
	scanf("%s", str);
	
	while(str[++len]);
	
	if(Palindrome(str, len))
		printf("Palindrome.");
	
	return 0;
}

