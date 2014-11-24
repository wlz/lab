/*
 *  Write a program that prints its input one word per line .
 */
#include <stdio.h>

#define IN  1
#define OUT 0

main()
{
    int c;
    int state = OUT;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
        {
            if(state == IN)
            {
                putchar('\n');
                state = OUT;
            }
        }
        else
        {
            putchar(c);
            state = IN;
        }
    } 
}
