#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char name[20];
	char tel[15];
} Contacts;

const int size = sizeof(Contacts);

int Menu(void)
{
	int inp;
	
	printf("***** MENU *****\n");
	printf("1. Insert\n");
	printf("2. Delete\n");
	printf("3. Search\n");
	printf("4. Print All\n");
	printf("5. Exit\n");
	printf("Choose the item: ");
	
	scanf("%d", &inp);
	
	return inp;
}

void Insert(Contacts ** book, int * len)
{
	printf("\n[ Insert ]\n");
	
	*book = (Contacts *)realloc(*book, ++*len * size);
	
	printf("Name: ");
	scanf("%s", (*book)[*len - 1].name);
	
	printf("Tel: ");
	scanf("%s", (*book)[*len - 1].tel);
	
	printf("Data Inserted\n\n");
}

void Delete(Contacts ** book, int * len)
{
	int i, j, cnt = 0;
	char target[20];
	
	printf("\n[ Delete ]\n");
	
	printf("Target name: ");
	scanf("%s", target);
	
	for(i = *len - 1; i >= 0; i--)
	{
		if(strcmp((*book)[i].name, target) == 0)
		{
			for(j = i; j < *len - 1; j++)
			{
				strcpy((*book)[j].name, (*book)[j + 1].name);
				strcpy((*book)[j].tel, (*book)[j + 1].tel);
			}
			*book = (Contacts *)realloc(*book, --*len * size);
			cnt++;
		}
	}
	
	if(cnt)
		printf("Data Deleted: %d\n\n", cnt);
	else
		printf("No Data Found\n\n");
}

void Search(Contacts ** book, int len)
{
	int i, cnt = 0;
	char target[20];
	
	printf("\n[ Search ]\n");
	
	printf("Target name: ");
	scanf("%s", target);
	
	for(i = 0; i < len; i++)
	{
		if(strcmp((*book)[i].name, target) == 0)
		{
			printf("Name: %s\n", (*book)[i].name);
			printf("Tel: %s\n", (*book)[i].tel);
			
			cnt++;
		}
	}
	
	if(cnt)
		printf("Data Found: %d\n\n", cnt);
	else
		printf("No Data Found\n\n");
}

void PrintAll(Contacts ** book, int len)
{
	int i;
	
	printf("\n[ Print All Data ]\n");
	
	for(i = 0; i < len; i++)
	{
		printf("Name: %s\n", (*book)[i].name);
		printf("Tel: %s\n", (*book)[i].tel);
	}
	
	if(len)
		printf("Data Found: %d\n\n", len);
	else
		printf("No Data Found\n\n");
}

int main(void)
{
	int flag = 1, len = 0;
	Contacts * mybook = (Contacts *)malloc(len);
	
	while(flag)
	{
		switch(Menu())
		{
			case 1: Insert(&mybook, &len); break;
			case 2: Delete(&mybook, &len); break;
			case 3: Search(&mybook, len); break;
			case 4: PrintAll(&mybook, len); break;
			default: flag = 0;
		}
		printf("\n");
	}
	
	printf("[ Exit ]\n");
	
	return 0;
}

