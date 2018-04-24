#include<stdio.h>
int main()
{
int factor, know=1;
do
{
	for (factor=1; ; factor++)
	{
	  if (factor >2) 
		break;
	  if (know == factor)
		continue;
	  printf("%d%d\n", know, factor);
	}
 know++;
} while (know <3);
return 0;
}
