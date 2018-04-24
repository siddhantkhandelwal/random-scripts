#include<stdio.h>
int main()
{
	float a, b, prod;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of a: ");
	scanf("%f", &b);
	prod = a * b;
	printf("Product of %.2f and %.2f is: %.4f\n", a, b, prod);
	return 0;
}
