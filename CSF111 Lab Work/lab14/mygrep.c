#include<stdio.h>
#include<string.h>

#define MAX 1000

int main(int argc, char *argv[])
{
	FILE *fp;
    
    if(argc<3)
	{
		printf("Insufficient number of arguments provided! Exiting (Error: -1)\n");
		return -1;
	}	

    fp = fopen(argv[2], "r");

	char string[MAX];

	while(fgets(string, MAX, fp)!=NULL)
	if(strstr(string, argv[1])!=NULL)
		printf("%s", string);
}
