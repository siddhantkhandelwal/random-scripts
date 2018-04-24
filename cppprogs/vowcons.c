#include<stdio.h>

int main()
{
    int vow, cons;
    char ch;
    while((ch=getchar())!= ' ' && ch!=EOF)
    {
        switch(ch)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vow++;
                break;
            default:
                cons++;
        }
    }
    printf("%d %d\n", vow, cons);
}