/*
 *  Write a program to copy its input to its output, replacing each of one or more blank by a single blank .
 */

#include <stdio.h>
main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        putchar(c);
        if(c == ' ')
        {
            while((c = getchar()) == ' ');
            if(c != EOF)
                putchar(c);
        }
    } 
} 
