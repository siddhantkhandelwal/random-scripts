#include <stdio.h>
#include <string.h>
#define MAX 10000

int isPalindrome(char *, int, int);
int main()
{
    char string[MAX];
    printf("String Palindrome implementation using recursion\n\n");
    printf("Enter a String [MAX Size: 10000]: ");
    scanf("%s", string);
    if(isPalindrome(string, 0, strlen(string)-1) == 0)
        printf("Given string: %s is not Palindrome\n", string);
    else
        printf("Given string: %s is Palindrome\n", string);
}

int isPalindrome(char *string, int start_index, int end_index)
{
    if(start_index>end_index)
        return 1;
    if(string[start_index]!=string[end_index])
        return 0;
    start_index++;
    end_index--;
    return (isPalindrome(string, start_index, end_index));
}