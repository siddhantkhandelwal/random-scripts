#include<stdio.h>
int main()
{
        float f;
        printf("Sizeof (char) = %lu bytes\n", sizeof(char));
        printf("Sizeof (short) = %lu bytes\n", sizeof(short));
        printf("Sizeof (int) = %lu bytes\n", sizeof(int));
        printf("Sizeof (long) = %lu bytes\n", sizeof(long));
        printf("Sizeof (float) = %lu bytes\n", sizeof(f));
        printf("Sizeof (double) = %lu bytes\n", sizeof(double));
        printf("Sizeof (1.55) = %lu bytes\n", sizeof(1.55));
        printf("Sizeof (1.55L) = %lu bytes\n", sizeof(1.55L));
        printf("Sizeof (str) = %lu bytes\n", sizeof("Hello"));

        printf("Sizeof (char) = %lu bytes\n", sizeof(signed char));
        printf("Sizeof (short) = %lu bytes\n", sizeof(signed short));
        printf("Sizeof (int) = %lu bytes\n", sizeof(signed int));
        printf("Sizeof (long) = %lu bytes\n", sizeof(signed long));
        printf("Sizeof (float) = %lu bytes\n", sizeof(f));
        printf("Sizeof (double) = %lu bytes\n", sizeof(double));
        printf("Sizeof (1.55) = %lu bytes\n", sizeof(1.55));
        printf("Sizeof (1.55L) = %lu bytes\n", sizeof(1.55L));
        printf("Sizeof (str) = %lu bytes\n", sizeof("Hello"));

        printf("Sizeof (char) = %lu bytes\n", sizeof(unsigned char));
        printf("Sizeof (short) = %lu bytes\n", sizeof(unsigned short));
        printf("Sizeof (int) = %lu bytes\n", sizeof(unsigned int));
        printf("Sizeof (long) = %lu bytes\n", sizeof(unsigned long));
        printf("Sizeof (float) = %lu bytes\n", sizeof(f));
        printf("Sizeof (double) = %lu bytes\n", sizeof(double));
        printf("Sizeof (1.55) = %lu bytes\n", sizeof(1.55));
        printf("Sizeof (1.55L) = %lu bytes\n", sizeof(1.55L));
        printf("Sizeof (str) = %lu bytes\n", sizeof("Hello"));

        return 0;
}

