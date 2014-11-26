/*
 *  Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop . Assume a fixed set of tab stops, say every n columns . Should n be a variable or a symbolic paramter ? 
 */

#include <stdio.h>

void put_spaces(int n);

main()
{
    char c;
    int i = 0, n = 0;
    char line[1024];
    while((c = getchar()) != EOF)
        line[i++] = c;
    line[i] = '\0';

    for(int j = 0; j < i; j++)
    {
        if(line[j] == '\t')
        {
            put_spaces(8 - n);
            n = 0;
        }
        else
        {
            putchar(line[j]);
            if(++n >= 8)
                n = 0;
        }
    } 
}

void put_spaces(int n)
{
    while(n-- > 0)
        putchar(' ');
}
