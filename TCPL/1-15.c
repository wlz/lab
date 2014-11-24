/*
 *  Rewrite the temperature conversion program of Section 1.2 to use a function for conversion .
 */

#include <stdio.h>
int temp_conversion(int fahr);

main()
{ 
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while(fahr <= upper)
    {
        celsius = temp_conversion(fahr);
        printf("%d\t\%d\n", fahr, celsius); 
        fahr = fahr + step;
    }
}

int temp_conversion(int fahr)
{
    return 5 * (fahr - 32) / 9; 
}
