#include<stdio.h>
#include<string.h>
int my_str(char p[])
{
	char *q = p;
	while (*q)
		q++;
	return q-p;
}

long unsigned int my_strlen1(char p[])
{
	return strlen(p);
}

int main()
{
	char string[100];
	printf("Enter a string: ");
	scanf("%[^\n]", string);
	getchar();
	printf("Length of the String entered is %d by my_str() and %lu by my_strlen1()\n", my_str(string), my_strlen1(string));
	return 0;
}
