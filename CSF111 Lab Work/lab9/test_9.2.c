#include<stdio.h>
int main()
{
	char *ch, varch='a';
	int *i1, *i2, varint1=5, varint2=4;
	ch=&varch;
	i1=&varint1;
	i2=&varint2;
	//printf("%d", i-ch);
	//printf("%ld", i1+i2);
	printf("%ld\n", i1-i2);
	//printf("%ld\n", i1*i2);
	printf("%f\n", i1+6.25f);
return 0;
}
