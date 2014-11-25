/*
 *  Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines .
 */
#include <stdio.h>

#define MAXLINE     1000

int getline(char s[], int lim);
void copy(char to[], char from[]);
int trim(char *s);

main()
{
        char line[MAXLINE];
        char longs[MAXLINE][MAXLINE];
    
        int len, i = 0;
        while((len = getline(line, MAXLINE)) > 0)
        { 
            int cnt = trim(line);
            if(cnt > 1)
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

int trim(char *s)
{
    int i = -1;
    while(s[++i] != '\0');
    i--;
    while(s[i] == ' ' || s[i] == '\t')
    {
        s[i] = '\0';
        i--;
    } 
    i++;
    return i;
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
