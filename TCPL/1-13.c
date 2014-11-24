/*
 *  Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging .
 */

#include <stdio.h>
#define IN  1
#define OUT 0

main()
{
    int ndigit[10];
    int state = OUT;
    int c, len = 0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(state == IN)
            {
                printf("\t%d\n", len);
                len = 0;
                state = OUT;
            }
        }
        else
        {
            len++;
            putchar(c);
            state = IN;
        }
    }
}
