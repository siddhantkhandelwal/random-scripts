#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXCOL 10000

void StoreSubstr(char * str, char substr[][MAXCOL]);

int main()
{
    char str[MAXCOL];
    scanf("%s", str);
    char substr[(strlen(str)*(strlen(str)+1))/2][MAXCOL];
    StoreSubstr(str, substr);
    for(int i=0;substr[i][0]!='\0';i++)
        printf("%s\n", substr[i]);
    return 0;
}

void StoreSubstr(char * str, char substr[][MAXCOL])
{
    int row=0, letters = 1, chars, l=0;
    for(int pass=0;pass<strlen(str);pass++)
    {
        for(int elements=0;elements<strlen(str)-pass;++elements)
        {
            for(chars=0;chars<letters;chars++)
            {
                 substr[row][chars]=str[l];
                 l++;
            } 
            substr[row][chars]='\0';
            row++;  
            l-=pass;
        }
        letters++;
        l=0;
    }
}