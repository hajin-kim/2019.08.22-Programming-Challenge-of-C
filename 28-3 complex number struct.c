#include <stdio.h>

typedef struct
{
	double real;
	double imag;
} Complex;

int main(void)
{
	Complex num1, num2;
	
	scanf("%lf %lf", &(num1.real), &(num1.imag));
	scanf("%lf %lf", &(num2.real), &(num2.imag));
	
	printf("Sum: %g + %gi\n", num1.real + num2.real, num1.imag + num2.imag);
	printf("Mul: %g + %gi\n", num1.real * num2.real - num1.imag * num2.imag, num1.imag * num2.real + num1.real * num2.imag);
	
	return 0;
}

