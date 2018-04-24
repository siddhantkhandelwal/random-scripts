#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
	for(int p=0;p<2;++p)
		for(int i=0;i<strlen(string[p])-1;++i)
			for(int j=i+1;j<strlen(string[p]);++j)
				if(string[p][i]>string[p][j])
				{
					char temp = string[p][i];
					string[p][i]=string[p][j];
					string[p][j]=temp;
				}
	if(strcmp(string[0], string[1])==0)
		return 1;
return 0;
}
