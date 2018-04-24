#include<stdio.h>
int main()
{
	float d, u, t, a;
	printf("Enter Speed, Accelaration, and Time: ");
	scanf("%f%f%f", &u, &a, &t);
	d = (u*t)+((a*t*t)/2);
	printf("The distance travelled by the vehicle is: %f\n", d);
	return 0;
}
