/*
 *  Write a program to count blanks, tabs, and newlines .
 */

#include <stdio.h>

main()
{ 
    char c;
    long nb , nt , nl;
    nb = nt = nl = 0;
    c = getchar();
    while((c = getchar()) != EOF)
    {
        if(c == ' ')
            nb++; 
        else if(c == '\t')
            nt++;
        else if(c == '\n')
            nl++;
    }
    printf("%ld %ld %ld\n", nb, nt, nl); 
}
