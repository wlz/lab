/*
 * Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s . Use a switch . Write a function for the other direction as well, converting escape sequences into the real characters.
 */
#include <stdio.h>

void escape(const char s[], char t[]);

int main()
{
    char *s = "a\ta\ba";
    char t[10];
    escape(s, t);

    printf("%s", t); 
    return 0;
}

void escape(const char s[], char t[])
{
    int i, j;
    for(i = 0, j = 0; s[i] != '\0'; i++, j++)
    {
        switch(s[i])
        {
            case '\t':
                t[j] = '*';
                t[++j] = 't';
                break;
            case '\b':
                t[j] = '*';
                t[++j] = 'b';
                break;
            case '\n':
                t[j] = '*';
                t[++j] = 'n';
                break;
            default:
                t[j] = s[j];
                break;
        }
    }
}
