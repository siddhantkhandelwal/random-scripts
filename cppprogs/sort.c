#include<stdio.h>
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    int max=values[0];
    for(int i=0;i<n-1;++i)
    	if(values[i]<values[i+1])
    		max=values[i+1];
    printf("%d\n",max);
    int count[65356];
    for(int i=0;i<max+1;++i)
    	count[i]=0;
    for(int i=0;i<max+1;++i)
        printf("%d ",count[i]);
    printf("\n");
    for(int i=0;i<n;++i)
    	count[values[i]]++;
    for(int i=0;i<max+1;++i)
        printf("%d ",count[i]);
    printf("\n");
    for(int i=0,j=0 ;i<max+1;++i)
    		while(count[i]!=0)
    		{
    			values[j]=i;
    			j++;
    			count[i]--;
    		}
}

void main()
{
    int n;
    scanf("%d", &n);
    int values[65356];
    for(int i=0;i<n;++i)
    {
        scanf("%d", &values[i]);
    }
    for(int i=0;i<n;++i)
        printf("%d ",values[i]);
    printf("\n");
    
    sort(values,n);
    for(int i=0;i<n;++i)
        printf("%d ",values[i]);
    
}
