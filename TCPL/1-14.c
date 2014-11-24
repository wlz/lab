/*
 *  Write a program to print a histogram of the frequencies of different characters in its input .
 */

#include <stdio.h>

main()
{
    char c;
    int ndigits[26] = { 0 };

    while((c = getchar()) != EOF)
    {
        if(c >= 'a' && c <= 'z')
            ndigits[c - 'a']++;
    }


    for(int i = 0; i < 26; i++)
        printf("%c:%d\t", 'a' + i, ndigits[i]); 
    printf("\n"); 
}
