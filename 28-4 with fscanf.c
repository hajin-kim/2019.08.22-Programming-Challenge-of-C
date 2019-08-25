#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("28-4 data\\28-4 data1.txt", "rt");	// data1 / data2 / data3 ---[4, 1] / data4 / data5
	int ret, word_A = 0, word_P = 0;
	char ch[50];
	
	if(fp == NULL)
	{
		printf("Exception: file open error\n");
		
		return -1;
	}
	
	while((ret = fscanf(fp, "%s", &ch)) != EOF)
	{
		if(ch[0] == 'A') word_A++;
		else if(ch[0] == 'P') word_P++;
	}
	
	if(!feof(fp))
	{
		printf("Exception: file reading error");
		
		return -1;
	}
	
	fclose(fp);
	
	printf("Number of A word: %d\nNumber of P word: %d", word_A, word_P);
	
	return 0;
}

