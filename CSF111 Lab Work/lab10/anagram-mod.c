#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAXLENGTH 1000

int isAnagram(char *[]);

int main()
{
	char *string[2];

	for(int i=0;i<2;++i)
		string[i]=malloc(sizeof(char)*MAXLENGTH);

	printf("Enter Two Strings: ");

	for(int i=0;i<2;++i)
	{
		scanf("%[^\n]", string[i]);
		for(int j=0;string[i][j]!='\0';++j)
			string[i][j]=tolower(string[i][j]);
		getchar();
	}

	if(isAnagram(string))
		printf("They are Anagrams!\n");
	else
		printf("They are not Anagrams!\n");

	free(string[0]);
	free(string[1]);

return 0;
}

int isAnagram(char *string[])
{
	int head[2];

	for(int p=0;p<2;++p)
	{
		for(int i=0;i<strlen(string[p])-1;++i)
			for(int j=i+1;j<strlen(string[p]);++j)
				if(string[p][i]>string[p][j])
				{
					char temp = string[p][i];
					string[p][i]=string[p][j];
					string[p][j]=temp;
				}

		for(int i=0;i<strlen(string[p]);++i)
			if(string[p][i]==32 || string[p][i]==9)
				head[p] = i+1;
	}

	//printf("\n\n%s\t\tHead: %d\n%s\t\tHead: %d\n\n", string[0], head[0], string[1], head[1]);

	for(int i=head[0], j=head[1];i<strlen(string[0]);++i, ++j)
		if(string[0][i]!=string[1][j])
			return 0;
return 1;
}
