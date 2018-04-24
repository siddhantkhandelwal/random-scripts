#include<stdio.h>

void display(FILE *ifp, FILE *ofp);

int main(int argc, char *argv[])

{
	FILE *fp;
	while(--argc)
	{
		fp = fopen(argv[argc], "r");
		if(fp==NULL)
		{
			printf("Could not open file: %s\n", argv[argc]);
			continue;
		}
		display(fp, stdout);
	}
}

void display(FILE *ifp, FILE *ofp)
{
	char c;
	while((c=getc(ifp))!=EOF)
		putc(c, ofp);
}
