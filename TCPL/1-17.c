/*
 *  Write a program to print all input lines that are longer than 80 characters .
 */
#include <stdio.h>

#define MAXLINE     1000
#define CHECKLINE   80

int getline(char s[], int lim);
void copy(char to[], char from[]);

main()
{
    char line[MAXLINE];
    char longs[MAXLINE][MAXLINE];

    int len, i = 0;
    while((len = getline(line, MAXLINE)) > 0)
    { 
        if(len >= CHECKLINE)
            copy(longs[i++], line);
    }

    for(i = 0; i < MAXLINE; i++)
    {
        if(*longs[i])
            printf("%s", longs[i]); 
        else break;
    }
    printf("\n"); 
}

void copy(char to[], char from[])
{
    int i;
    for(i = 0; (to[i] = from[i]); i++);
}

int getline(char s[], int lim)
{
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if(c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i; 
}
