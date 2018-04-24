#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int n, seed, rnu;
    seed = time(NULL);
    srand(seed);
    for(int i=0;i<5;++i)
    {
        rnu = rand()%40;
        printf("%d  ", (rnu>=20)?rnu:(rnu+20));
    }
    printf("\n");
}