#include <stdio.h>

int main(void)
{
	FILE * fp = fopen("28-4 data\\28-4 data1.txt", "rt");	// data1 / data2 / data3 ---[4, 1] / data4 / data5
	int ch, flag = 1, word_A = 0, word_P = 0;
	
	if(fp == NULL)
	{
		printf("Exception: file open error\n");
		
		return -1;
	}
	
	while((ch = fgetc(fp)) != EOF)
	{
		if(ch == ' ' || ch == '\t' || ch == '\n')
			flag = 1;
		else if(flag)
		{
			if(ch == 'A') word_A++;
			else if(ch == 'P') word_P++;
			flag = 0;
		}
		else flag = 0;
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

