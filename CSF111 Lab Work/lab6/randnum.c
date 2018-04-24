#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int seed, number;
	seed = time(NULL);
	srand(seed);
	for(int i=0;i<5;++i)
	{
		number = rand()%40;
		printf("%d	", (number>=20?number:number+20));
	}
printf("\n");
return 0;
}
