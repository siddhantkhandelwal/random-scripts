#include<stdio.h>

void copy(FILE *, FILE *);

int main(int argc, char *argv[])

{
	FILE *fp1, *fp2;

	if(argc<3)
	{
		printf("Insufficient number of arguments provided! Exiting (Error: -1)\n");
		return -1;
	}

	if(argc>3)
		printf("Excessive arguments passed! Accepting only: \"%s\" and \"%s\"\n", argv[1], argv[2]);

	fp1 = fopen(argv[1], "r");
	fp2 = fopen(argv[2], "w");

	if(fp1==NULL)
	{
		printf("Could not open file: %s\n", argv[argc]);
		return -2;
	}

	copy(fp1, fp2);
	fclose(fp1);
	fclose(fp2);

}

void copy(FILE *fp1, FILE *fp2)
{
	char c;
	while((c=getc(fp1))!=EOF)
		putc(c, fp2);
}
