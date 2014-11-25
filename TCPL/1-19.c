/*
 *  Write a function reverse(s) that reverses the character string s . Use it to write a program that reverses its input a line at a time .
 */
#include <stdio.h>
#define MAXLINE 100

void reverse(char *s);
int length(char *s);
void swap(char *s, int p, int q);
int getline(char *s, int lim);
void copy(char *src, char *dest); 

main()
{
    char line[MAXLINE];
    char longs[MAXLINE][MAXLINE];

    int len, i = 0;
    while((len = getline(line, MAXLINE)) > 1)
    { 
        reverse(line);
        copy(line, longs[i++]);
    }

    for(i = 0; i < MAXLINE; i++)
    {
        if(*longs[i])
            printf("%s", longs[i]); 
        else break;
    }
    printf("\n"); 
}
    
void copy(char *src, char *dest) 
{
    int i;
    for(i = 0; (dest[i] = src[i]) != '\0' ; i++);
    dest[i] = '\0';
}

int getline(char *s, int lim)
{ 
    int i;
    char c;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n' ; i++)
        s[i] = c;
    if(c == '\n')
        s[i] = c;
    s[++i] = '\0'; 

    return i - 1;
}

void reverse(char *s)
{
    int len = length(s);
    if(len > 1)
    {
        int i;
        int mid = len / 2;
        for(i = 0; i < mid; i++)
            swap(s, i, len - i - 1); 
    }
}

int length(char *s)
{
    int n = 0;
    while(s[++n]); 
    return n;
}

void swap(char *s, int p, int q)
{
    char t = s[p];
    s[p] = s[q];
    s[q] = t;
}
