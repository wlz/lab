/*
 *  Write an alternate version of squeeze(s1, s2) that deletes
 * each character in s1 that matches any character in the string s2.
 */
#include <stdio.h>

void squeeze(char *s1, const char *s2);
int inside(char c, char *s);

int main()
{
    char *s1 = "helloworld!";
    char *s2 = "elod";

    squeeze(s1, s2);

    printf("%s\n", s1); 
    return 0;
}

void squeeze(char *s1, const char *s2)
{
    int i;
    int loc = 0;
    for(i = 0; *(s1 + i); i++)
    {
        if(!inside(*(s1 + i), s2))
            s1[loc++] = *(s1 + i);
    } 

    s1[loc] = '\0';
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
