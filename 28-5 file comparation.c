#include <stdio.h>

int main(void)
{
	FILE * d1 = fopen("28-5 data\\28-5 data1.txt", "rt");	// data1 / data3 / data3 / data5(Exception)
	FILE * d2 = fopen("28-5 data\\28-5 data2.txt", "rt");	// data2 / data2 / data4 / data4
	int ch1, ch2;
	
	if(d1 == NULL || d2 == NULL)
	{
		printf("Exception: file open error\n");
		
		return -1;
	}
	
	do
	{
		ch1 = fgetc(d1);
		ch2 = fgetc(d2);
		
		if(ch1 != ch2)
		{			
			fclose(d1);
			fclose(d2);
			
			return 0;
		}
	}
	while(ch1 != EOF && ch2 != EOF);
	
	if(feof(d1) * feof(d2))
		printf("File equal\n");
	
	fclose(d1);
	fclose(d2);
	
	return 0;
}

