#include <stdio.h>

int main(void)
{
	int inp, h, m, s;
	
	scanf("%d", &inp);
	
	s = inp % 60;
	inp /= 60;
	m = inp % 60;
	h = inp / 60;
	
	printf("[h:%d, m:%d, s:%d]", h, m, s);
	
	return 0;
}

