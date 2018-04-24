#include<stdio.h>
#include<cs50.h>
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int swap=1;
    int temp;
    while(swap!=0)
    {
        for(int i=0;i<n;++i)
        {
            swap=0;
            if(values[i]>values[i+1])
            {
                temp=values[i];
                values[i]=values[i+1];
                values[i+1]=temp;
                swap++;
            }
        }
    }
}

void main()
{
    int n=get_int();
    int values[n];
    for(int i=0;i<n;++i)
    {
        values[i]=get_int();
    }
    sort(values,n);
    for(int i=0;i<n;++i)
    {
        printf("%i  ",values[i]);
    }
}
