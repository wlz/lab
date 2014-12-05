/*
 *  Rewrite the function lower, which converts upper case letter to lower case, with a conditional expression instead of if-else .
 */

#include <stdio.h>

char lower(char c);

int main()
{
    printf("%c\n", lower('B')); 
    printf("%c\n", lower('A')); 

    return 0;
}

char lower(char c)
{
    return c >= 'A' && c <= 'Z' ? c + 32 : c;
}
