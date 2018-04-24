#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 1000

int main(int argc, char *argv[])
{
	FILE *fp;
	int lines = 10;
	char string[MAX];
	int count=0;

	if(strcmp(argv[1],"-n")==0)
	{
		lines = atoi(argv[2]);
		fp = fopen(argv[1], "r");
	}
	else
		fp = fopen(argv[3], "r");

	if(fp == NULL)
	{
		printf("Could not open the file: %s", argv[1]);
		return -1;
	}
	while(count<lines && fgets(string, MAX, fp))
	{
		fputs(string, stdout);
		count++;
	}
}
