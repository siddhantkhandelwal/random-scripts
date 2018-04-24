#include<stdio.h>

int main()
{
    int delements, i, j;
    for(i=1;i<=20;++i)
    {
        elements = 2*i-1;

        for(j=i;j<=elements;++j)
            printf("%d", (j<=9?j:(j%10)));

        j-=2;
        
        for(;j>=i;--j)
            printf("%d", (j<=9?j:(j%10)));

        printf("\n");
    }
}