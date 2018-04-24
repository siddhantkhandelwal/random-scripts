#include<stdio.h>
int main()
{
float a, b, calc;
printf("Enter a number: ");
scanf("%f", &a);
printf("Enter another number: ");
scanf("%f", &b);
calc = a + b;
printf("Sum of %f and %f is: %f.\n", a, b, calc);
calc = a - b;
printf("Difference of %f and %f is: %f.\n", a, b, calc);
calc = a * b;
printf("Product of %f and %f is: %f.\n", a, b, calc);
calc = a / b;
printf("Quotient of %f and %f is: %f.\n", a, b, calc);
return 0;
}
