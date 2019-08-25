#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char title[50];
	char author[30];
	int pages;
} Book;

int main(void)
{
	int i = 0, ea = 1, go;
	Book * mybook = (Book *)malloc(sizeof(Book));
	
	while(1)
	{
		printf("Get information of book %d?: ", ea);
		scanf("%d", &go);
		if(!go) break;
		
		mybook = (Book *)realloc(mybook, sizeof(Book) * ++ea);
		
		scanf("%s", mybook[i].title);
		scanf("%s", mybook[i].author);
		scanf("%d", &(mybook[i++].pages));
	}
	
	printf("\nBook Information:\n");
	
	for(i = 0; i < ea - 1; i++)
	{
		printf("Book %d.\n", i+1);
		puts(mybook[i].title);
		puts(mybook[i].author);
		printf("%d\n", mybook[i].pages);
	}
	
	return 0;
}

