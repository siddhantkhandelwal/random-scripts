#include<stdio.h>

int main()
{
    char ch;
    int characters, lines;
    characters=lines=0;
    while((ch=getchar())!= EOF)
    {
        if(ch== '\n')
            lines++;
        else
            characters++;
    }
    printf("%d %d\n", lines, characters);
}