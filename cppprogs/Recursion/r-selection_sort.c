#include<stdio.h>

void recursive_selection_sort(int array[], int start_index, int end_index);

int main()
{
    int size;
    printf("Implementation of Selection Sort by recursion\n\n");
    printf("Enter size of the integer array to be sorted and then the array: ");
    scanf("%d", &size);
    int array[size];
    for(int i=0;i<size;++i)
        scanf("%d", &array[i]);
    printf("Unsorted Array is: \n");
    for(int i=0;i<size;++i)
        printf("%d  ", array[i]);
    putchar('\n');
    recursive_selection_sort(array, 0, size-1);
    printf("\n____\nSorted Array is: \n");
    for(int i=0;i<size;++i)
        printf("%d  ", array[i]);
    putchar('\n');
    return 0;
}

void recursive_selection_sort(int array[], int start_index, int end_index)
{
    if(start_index>=end_index)
        return;

    int min_index = start_index;
    int temp;

    for(int i=start_index+1;i<=end_index;++i)
        if(array[i]<array[min_index])
            min_index=i;

    temp = array[start_index];
    array[start_index]=array[min_index];
    array[min_index]=temp;
    
    /*static int pass=0;
    pass++;
    printf("Array after pass %d:\n", pass);
    for(int i=0;i<=end_index;++i)
        printf("%d  ", array[i]);
    putchar('\n');*/

    recursive_selection_sort(array, start_index+1, end_index);
}