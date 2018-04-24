#include <stdio.h>

int main()
{
int val, term, count, flag=0, a, b;

printf("Enter a +ve integer to generate the hailstone sequence: ");
scanf("%d",&val);

while(val <= 0) 
{
   printf("Hailstone sequences only for +ve numbers!\n\n");
   scanf("%d", &val);
}

count = 1;	
scanf("%d %d", &a, &b);
printf("%d %d %d\n", val, a, b);

for (term = val; term != 1; )
{
   if (term % 2 == 0) 
      term = term / 2;
   else 
      term = (3 * term) + 1;

   printf("%d\n", term);
   count++;

   if(term>=a && term<b)
        {
        flag=1;
        break;
        }
}

if(flag)
	printf("A hailstone number lies in the region [%d, %d), it is %d", a, b, term);

printf("Number of terms = %d\n",count);

return 0;
}
