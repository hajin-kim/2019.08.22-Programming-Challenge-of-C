#include <stdio.h>

int main(void)
{
	const int bre = 500, sna = 700, dri = 400;
	int inp, i, j, k;
	
	scanf("%d", &inp);
	
	for(i=bre; i<inp; i+=bre)
	{
		for(j=sna; i+j<inp; j+=sna)
		{
			if((k = inp - (i + j)) % dri == 0)
				printf("bread %dea, snack %dea, drink %dea\n", i/bre, j/sna, k/dri);
		}
	}
	
	
	return 0;
}

