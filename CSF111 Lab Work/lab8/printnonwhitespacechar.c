#include<stdio.h>
int main()
{
	char line[100];
	printf("Enter a line of string: ");
	scanf("%[^\n]", line);
	getchar();
	int i=0;
	while(line[i]!=EOF && line[i]!='\0')
	{
		if(line[i]!=' ' && line[i]!='\t')
			printf("%c", line[i]);
		i++;
	}
	printf("\n");
return 0;
}

