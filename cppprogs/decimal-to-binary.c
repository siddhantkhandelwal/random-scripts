#include<stdio.h>
int main()
{
    int decimal_no, temp, nbits;
    unsigned int mask;
    nbits = 8 * sizeof(int);
    mask = 0x1 << (nbits-1);
    do
    {
        printf("\nEnter a Decimal No. (0 to stop): ");
        scanf("%d", &decimal_no);
        for(int i=1;i<=nbits;++i)
        {
            temp = decimal_no & mask?1:0;
            printf("%d", temp);
            if(i%4==0)
                printf(" ");
            mask >>= 1;
        }
    }while(decimal_no!=0);             
return 0;
}
