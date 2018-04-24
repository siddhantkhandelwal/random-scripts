#include<stdio.h>
int main()
{
	int x = 12;
	printf("%5d\n", x);
	x = 12;
	printf("%-5d\n", x);
	float y = 234.5678;
	printf("%-8.2f\n", y);
	printf("%+8.2f\n", y);
	printf("%+-8.2f\n", y);
	char ch = 'Y';
	printf("%c\n", ch);
	return 0;
}
