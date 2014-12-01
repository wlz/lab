/*
 *  Write a loop equivalent to the for loop above without using && or || .
 */

#include <stdio.h>
#define N   1024

int main()
{
    char line[N];
    int limit = N;
    int i;
    char c;

    for(i = 0; i < limit - 1; i++)
    {
        c = getchar();
        if(c == '\n')
            break;
        if(c == EOF)
            break;

        line[i] = c;
    }

    line[i] = '\0'; 
    printf("%s\n", line); 

    return 0;
}
