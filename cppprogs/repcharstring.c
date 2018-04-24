#include<stdio.h>
#include<string.h>

#define MAXLENGTH 1000

void rep(char arr[]);
int linear(int indexcounter[], int i, int indexcounter_counter);
void store(int i, char arr[], int indexcounter[], int indexcounter_counter, char arr2[], int *next);

int main()
{
    char arr[MAXLENGTH];
    scanf("%s", arr);
    rep(arr);
}

void rep(char arr[])
{
    char arr2[MAXLENGTH];
    int indexcounter[MAXLENGTH], indexcounter_counter=0, next=0;
    for(int i=0;i<strlen(arr);++i)
    {
        for(int j=i+1;j<strlen(arr);++j)
        {
            if(arr[i]==arr[j])
            {
                indexcounter[indexcounter_counter]=j;
                indexcounter_counter++;
            }
        }
        store(i, arr, indexcounter, indexcounter_counter, arr2, &next);
    }
    arr2[next]='\0'; 
    printf("%s\n", arr2);
}

void store(int i, char arr[], int indexcounter[], int indexcounter_counter, char arr2[], int *next)
{
    if(!linear(indexcounter, i, indexcounter_counter))
    {
        arr2[*next]=arr[i];
        *next=*next+1;
    }
}

int linear(int indexcounter[], int i, int indexcounter_counter)
{
    for(int j=0;j<indexcounter_counter;++j)
        if(indexcounter[j]==i)
            return 1;
    return 0;
}