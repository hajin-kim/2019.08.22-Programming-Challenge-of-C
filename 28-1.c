#include <stdio.h>

typedef struct
{
	char title[50];
	char author[30];
	int pages;
} Book;

int main(void)
{
	int i;
	Book mybook[3];
	
	for(i = 0; i < 3; i++)
	{
		scanf("%s", mybook[i].title);
		scanf("%s", mybook[i].author);
		scanf("%d", &(mybook[i].pages));
	}
	
	printf("\nBook Information:\n");
	
	for(i = 0; i < 3; i++)
	{
		printf("Book %d.\n", i+1);
		puts(mybook[i].title);
		puts(mybook[i].author);
		printf("%d\n", mybook[i].pages);
	}
	
	return 0;
}

