#include<stdio.h>
void main()
{
	int arr[5], i=0;
	do
	{
	scanf("%i",&arr[i]);
	i++;	
	}while(i<5);
	
	int *p[5];
	for (i=0;i<5;++i)
	{
		p[i]=&arr[i];
	}
	printf("\n%i\n", arr[0]);
	printf("%i\n", *p[0]);	

	char *names[]= {
					"abc",
					"def",
					"ghi"
	};
	printf("\n%s\n",names[0]);
	printf("\n%s\n",*names[0]);
}
