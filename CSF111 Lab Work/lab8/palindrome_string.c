#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isPalind_1(char []);
int isPalind_2(char *);
int isPalind_3(char *);
void strrev(char *);

int main()
{
	char string[1001];
	printf("Enter a String (max 1000 char): ");
	scanf("%[^\n]", string);
	getchar();
	printf("Using isPalind_1()\n");
	if(isPalind_1(string))
                printf("String %s is a palindrome!", string);
        else
                printf("String %s is not a palindrome!", string);
        printf("\nUsing isPalind_2()\n");
	if(isPalind_2(string))
		printf("String %s is a palindrome!", string);
	else
		printf("String %s is not a palindrome!", string);
	printf("\nUsing isPalind_3()\n");
	if(isPalind_3(string))
                printf("String %s is a palindrome!", string);
        else
                printf("String %s is not a palindrome!", string);

	return 0;
}

int isPalind_1(char string[])
{
	for(int i=0, j=strlen(string)-1;i<j;++i, --j)
	{
		if(tolower(string[i])!=tolower(string[j]))
			return 0;
	}
	return 1;
}

int isPalind_2(char *ptr)
{
	char *end;
	end = ptr + strlen(ptr) - 1;
	for(; ptr<end; ++ptr, --end)
	{
		if(tolower(*ptr)!=tolower(*end))
			return 0;
	}
	return 1;
}

int isPalind_3(char *ptr)
{
	char *copyptr;
	strcpy(copyptr, ptr);
	strrev(copyptr);
	if(!strcmp(ptr, copyptr))
		return 1;
	return 0;
}

void strrev(char *a)
{
	char *b, temp;
	b = a + strlen(a)-1;
	for(;a<b;a++, b--)
	{
		temp = *a;
		*a=*b;
		*b=temp;
	}
}
