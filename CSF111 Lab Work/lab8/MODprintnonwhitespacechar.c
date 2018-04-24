#include<stdio.h>
int main()
{
	char line[100], ch;
	int no_lines;
	printf("Enter no. of lines: ");
	scanf("%d", &no_lines);
	while(no_lines>10)
	{
		printf("Error. Max 10 lines: ");
		scanf("%d", &no_lines);
	}
	while((ch=getchar())!='\n');
	for(int i=0;i<no_lines;++i)
	{
		printf("Enter line %d of string: ", i+1);
		scanf("%[^\n]", line);
		getchar();
		int j=0;
		while(line[j]!=EOF && line[j]!='\0')
		{
			if(line[j]!=' ' && line[j]!='\t')
				printf("%c", line[j]);
			j++;
		}
		printf("\n");
	}
	printf("\n");
return 0;
}

