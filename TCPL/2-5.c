/*
 *  Write the function any(s1, s2), which returns the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location .)
 */

#include <stdio.h>

int any(char *s1, char *s2);

int main()
{
    char *s1 = "aabbcde";
    char *s2 = "bg";

    printf("%d\n", any(s1, s2)); 
    return 0;
}

int any(char *s1, char *s2)
{
    int i;
    for(i = 0; *(s1 + i); i++)
    {
        if(inside(*(s1 + i), s2))
            return i;
    }

    return -1; 
}

int inside(char c, char *s)
{
    while(*s++)
    {
        if(c == *(s - 1))
            return 1;
    }
    return 0;
}
